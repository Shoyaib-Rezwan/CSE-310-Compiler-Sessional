#pragma once

#include "CSubset_2205014BaseVisitor.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include "headers/2205014_symbol_table.hpp"
#include <iomanip>
#include "tree/ParseTreeProperty.h"

using namespace std;
using namespace antlr4;
using namespace tree;

extern ofstream asmFile;
ofstream tempFile;
extern SymbolTable *table;

bool icgEqualsIgnoreCase(string a, string b)
{
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++)
    {
        if (tolower(a[i]) != tolower(b[i]))
            return false;
    }
    return true;
}

void writeIntoAsmFile(const std::string &message)
{
    if (!asmFile.is_open())
    {
        asmFile.open("code.asm", std::ios::app);
        if (!asmFile)
            return;
    }
    asmFile << message;
    asmFile.flush();
}

void writeIntoTempFile(const std::string &message)
{
    if (!tempFile.is_open())
    {
        tempFile.open("temp.asm", std::ios::app);
        if (!tempFile)
            return;
    }
    tempFile << message;
    tempFile.flush();
}

void declareVarInDataSegment(string ID, string type_specifier, int size = 0)
{
    int count = (size > 0) ? size : 1;
    string stmt = ID + " dd " + to_string(count) + " DUP (0)\n";
    writeIntoAsmFile("\t" + stmt);
}

class ICG_2205014 : public CSubset_2205014Visitor
{
    ParseTreeProperty<string> exprTypes;
    string decLstType;
    vector<string> paramTypes;
    vector<string> argTypes;
    vector<string> paramNames;

    bool insGlobalScope = true;
    int labelCounter = 0;
    int currStkOffset = 0;
    int currStmtCnt = 0;
    bool printfUsed = false;
    bool fetchFromStack = false;
    string currFuncEndLabel = "";
    string currFuncStartLabel = "";

    string fetchExpr(string expr)
    {
        SymbolInfo *s = lookup(expr);
        string fetchStr = "";
        string src = "";
        if (s)
        {
            if (s->getStkOffset() > 0)
            {
                src = "EBP-" + to_string(s->getStkOffset());
            }
            else if (s->getStkOffset() < 0)
            {
                src = "EBP+" + to_string(-s->getStkOffset());
            }
            else
            {
                src = expr;
            }
            fetchStr = "\tMOV EAX, [" + src + "]\n";
        }
        else if (fetchFromStack)
        {
            fetchFromStack = false;
            fetchStr = "\tPOP EAX\n";
        }
        else if (!expr.empty())
        {
            fetchStr = "\tMOV EAX, " + expr + "\n";
        }
        return fetchStr;
    }

    string fetchSrc(string expr)
    {
        SymbolInfo *s = lookup(expr);
        string src = "";
        if (s)
        {
            if (s->getStkOffset() > 0)
            {
                src = "EBP-" + to_string(s->getStkOffset());
            }
            else if (s->getStkOffset() < 0)
            {
                src = "EBP+" + to_string(-s->getStkOffset());
            }
            else
            {
                src = expr;
            }
        }
        return src;
    }

public:
    SymbolInfo *lookup(string key)
    {
        unsigned int bucket;
        int position, uniqueNumber;
        string scopeNo;
        return table->lookUp2(key, bucket, position, uniqueNumber, scopeNo);
    }

    any visitStart(CSubset_2205014Parser::StartContext *ctx) override
    {
        tempFile.open("temp.asm", ios::out);
        string header = "format ELF executable 3\nentry main\nsegment readable writeable\n";
        writeIntoAsmFile(header);

        any returnVal = visit(ctx->program());
        table->exitScope();

        tempFile.close();
        ifstream tempFile2("temp.asm");
        if (tempFile2.is_open())
        {
            writeIntoAsmFile("segment readable executable\n");
            asmFile << tempFile2.rdbuf();
            tempFile2.close();
        }
        remove("temp.asm");

        if (printfUsed)
        {
            tempFile2.open("printProc.lib", ios::in);
            if (tempFile2.is_open())
            {
                writeIntoAsmFile(";-------------------------------\n");
                writeIntoAsmFile(";\tprint library\n");
                writeIntoAsmFile(";-------------------------------\n");
                asmFile << tempFile2.rdbuf();
                writeIntoAsmFile(";-------------------------------");
                tempFile2.close();
            }
        }
        return returnVal;
    }

    any visitProgProgUnit(CSubset_2205014Parser::ProgProgUnitContext *ctx) override
    {
        string program = any_cast<string>(visit(ctx->program()));
        string unit = any_cast<string>(visit(ctx->unit()));
        return program + "\n" + unit;
    }

    any visitProgUnit(CSubset_2205014Parser::ProgUnitContext *ctx) override
    {
        return visit(ctx->unit());
    }

    any visitUnitVarDec(CSubset_2205014Parser::UnitVarDecContext *ctx) override
    {
        return visit(ctx->var_declaration());
    }

    any visitUnitFuncDec(CSubset_2205014Parser::UnitFuncDecContext *ctx) override
    {
        return visit(ctx->func_declaration());
    }

    any visitUnitFuncDef(CSubset_2205014Parser::UnitFuncDefContext *ctx) override
    {
        return visit(ctx->func_definition());
    }

    any visitFuncDecParam(CSubset_2205014Parser::FuncDecParamContext *ctx) override
    {
        string type_specifier = any_cast<string>(visit(ctx->type_specifier()));
        string ID = ctx->ID()->getText();
        bool multiDeclarationError = !table->insert(ID, "ID", type_specifier, false, false);
        SymbolInfo *s = lookup(ID);
        if (s)
            s->setIsFunction();

        table->enterScope();
        paramTypes.resize(0);
        string parameter_list = any_cast<string>(visit(ctx->parameter_list()));

        if (!multiDeclarationError && s)
            s->setParamTypes(paramTypes);

        table->exitScope();
        return type_specifier + " " + ID + ctx->LPAREN()->getText() + parameter_list + ctx->RPAREN()->getText() + ctx->SEMICOLON()->getText();
    }

    any visitFuncDecNoParam(CSubset_2205014Parser::FuncDecNoParamContext *ctx) override
    {
        string type_specifier = any_cast<string>(visit(ctx->type_specifier()));
        string ID = ctx->ID()->getText();
        table->insert(ID, "ID", type_specifier, false, false);
        SymbolInfo *s = lookup(ID);
        if (s)
            s->setIsFunction();

        table->enterScope();
        table->exitScope();
        return type_specifier + " " + ID + ctx->LPAREN()->getText() + ctx->RPAREN()->getText() + ctx->SEMICOLON()->getText();
    }

    any visitFuncDefParam(CSubset_2205014Parser::FuncDefParamContext *ctx) override
    {
        string type_specifier = any_cast<string>(visit(ctx->type_specifier()));
        string ID = ctx->ID()->getText();
        bool previouslyPushed = false;

        if (!table->insert(ID, "ID", type_specifier))
        {
            unsigned int bucket;
            int position, uniqueNumber;
            string scopeNo;
            SymbolInfo *s = table->lookUp2(ID, bucket, position, uniqueNumber, scopeNo);
            if (s)
                s->setIsDefined(true);
            previouslyPushed = true;
        }
        SymbolInfo *s = lookup(ID);
        if (s)
            s->setIsFunction();

        currFuncStartLabel = (ID == "main") ? ID : ID + "_START";
        currFuncEndLabel = ID + "_EXIT";
        insGlobalScope = false;
        currStkOffset = 0;
        currStmtCnt = 0;

        string asmStr = currFuncStartLabel + ":\n\tPUSH EBP\n\tMOV EBP, ESP\n";
        writeIntoTempFile(asmStr);

        table->enterScope();
        paramTypes.resize(0);
        paramNames.clear();

        string parameter_list = any_cast<string>(visit(ctx->parameter_list()));

        if (!previouslyPushed && s)
            s->setParamTypes(paramTypes);

        int numArgs = paramNames.size();
        for (int i = 0; i < numArgs; i++)
        {
            SymbolInfo *sParam = lookup(paramNames[i]);
            if (sParam)
            {
                sParam->setStkOffset(-(4 * (numArgs - i + 1)));
            }
        }

        string compound_statement = any_cast<string>(visit(ctx->compound_statement()));

        string moveESP = "";
        if (currStkOffset)
        {
            moveESP = "\tADD ESP, " + to_string(currStkOffset) + "\n";
        }
        string returnStmt = "\tPOP EBP\n\tRET " + to_string(numArgs * 4);
        string extStmt = (ID == "main") ? "\tPOP EBP\n\tMOV EAX,1\n\tXOR EBX, EBX\n\tINT 0x80" : "";
        if (extStmt.empty())
        {
            asmStr = currFuncEndLabel + ":\n" + moveESP + returnStmt + "\n";
        }
        else
        {
            asmStr = currFuncEndLabel + ":\n" + moveESP + extStmt + "\n" + returnStmt + "\n";
        }
        writeIntoTempFile(asmStr);
        insGlobalScope = true;

        return type_specifier + " " + ID + ctx->LPAREN()->getText() + parameter_list + ctx->RPAREN()->getText() + compound_statement + "\n";
    }

    any visitFuncDefNoParam(CSubset_2205014Parser::FuncDefNoParamContext *ctx) override
    {
        string type_specifier = any_cast<string>(visit(ctx->type_specifier()));
        string ID = ctx->ID()->getText();

        if (!table->insert(ID, "ID", type_specifier))
        {
            unsigned int bucket;
            int position, uniqueNumber;
            string scopeNo;
            SymbolInfo *s = table->lookUp2(ID, bucket, position, uniqueNumber, scopeNo);
            if (s)
                s->setIsDefined(true);
        }
        SymbolInfo *s = lookup(ID);
        if (s)
            s->setIsFunction();

        currFuncStartLabel = (ID == "main") ? ID : ID + "_START";
        currFuncEndLabel = ID + "_EXIT";
        insGlobalScope = false;
        currStkOffset = 0;
        currStmtCnt = 0;
        string asmStr = currFuncStartLabel + ":\n\tPUSH EBP\n\tMOV EBP, ESP\n";
        writeIntoTempFile(asmStr);

        table->enterScope();
        string compound_statement = any_cast<string>(visit(ctx->compound_statement()));

        string moveESP = "";
        if (currStkOffset)
        {
            moveESP = "\tADD ESP, " + to_string(currStkOffset) + "\n";
        }
        string returnStmt = "\tPOP EBP\n\tRET";
        string extStmt = (ID == "main") ? "\tPOP EBP\n\tMOV EAX,1\n\tXOR EBX, EBX\n\tINT 0x80" : "";
        if (extStmt.empty())
        {
            asmStr = currFuncEndLabel + ":\n" + moveESP + returnStmt + "\n";
        }
        else
        {
            asmStr = currFuncEndLabel + ":\n" + moveESP + extStmt + "\n" + returnStmt + "\n";
        }
        writeIntoTempFile(asmStr);
        insGlobalScope = true;

        return type_specifier + " " + ID + ctx->LPAREN()->getText() + ctx->RPAREN()->getText() + compound_statement + "\n";
    }

    any visitUniParamDef(CSubset_2205014Parser::UniParamDefContext *ctx) override
    {
        string type_specifier = any_cast<string>(visit(ctx->type_specifier()));
        paramTypes.push_back(type_specifier);
        paramNames.push_back(ctx->ID()->getText());
        table->insert(ctx->ID()->getText(), "ID", exprTypes.get(ctx->type_specifier()));
        return type_specifier + " " + ctx->ID()->getText();
    }

    any visitMultiParamDec(CSubset_2205014Parser::MultiParamDecContext *ctx) override
    {
        string parameter_list = any_cast<string>(visit(ctx->parameter_list()));
        string type_specifier = any_cast<string>(visit(ctx->type_specifier()));
        paramTypes.push_back(type_specifier);
        return parameter_list + ctx->COMMA()->getText() + type_specifier;
    }

    any visitMultiParamDef(CSubset_2205014Parser::MultiParamDefContext *ctx) override
    {
        string parameter_list = any_cast<string>(visit(ctx->parameter_list()));
        string type_specifier = any_cast<string>(visit(ctx->type_specifier()));
        paramTypes.push_back(type_specifier);
        paramNames.push_back(ctx->ID()->getText());
        table->insert(ctx->ID()->getText(), "ID", exprTypes.get(ctx->type_specifier()));
        return parameter_list + ctx->COMMA()->getText() + type_specifier + " " + ctx->ID()->getText();
    }

    any visitUniParamDec(CSubset_2205014Parser::UniParamDecContext *ctx) override
    {
        string type_specifier = any_cast<string>(visit(ctx->type_specifier()));
        paramTypes.push_back(type_specifier);
        return type_specifier;
    }

    any visitCmpd_stmtStmts(CSubset_2205014Parser::Cmpd_stmtStmtsContext *ctx) override
    {
        string statements = any_cast<string>(visit(ctx->statements()));
        table->exitScope();

        labelCounter++;
        string label = ".L" + to_string(labelCounter);
        string asmCode = label + ":\n";
        writeIntoTempFile(asmCode);

        return ctx->LCURL()->getText() + "\n" + statements + "\n" + ctx->RCURL()->getText();
    }

    any visitCmpd_stmtParen(CSubset_2205014Parser::Cmpd_stmtParenContext *ctx) override
    {
        table->exitScope();

        labelCounter++;
        string label = ".L" + to_string(labelCounter);
        string asmCode = label + ":\n";
        writeIntoTempFile(asmCode);

        return ctx->LCURL()->getText() + ctx->RCURL()->getText();
    }

    any visitVar_declaration(CSubset_2205014Parser::Var_declarationContext *ctx) override
    {
        string type_specifier = any_cast<string>(visit(ctx->type_specifier()));
        decLstType = type_specifier;
        string declaration_list = any_cast<string>(visit(ctx->declaration_list()));
        return type_specifier + " " + declaration_list + ctx->SEMICOLON()->getText();
    }

    any visitTypeInt(CSubset_2205014Parser::TypeIntContext *ctx) override
    {
        exprTypes.put(ctx, "INT");
        return ctx->INT()->getText();
    }

    any visitTypeFloat(CSubset_2205014Parser::TypeFloatContext *ctx) override
    {
        exprTypes.put(ctx, "FLOAT");
        return ctx->FLOAT()->getText();
    }

    any visitTypeVoid(CSubset_2205014Parser::TypeVoidContext *ctx) override
    {
        exprTypes.put(ctx, "VOID");
        return ctx->VOID()->getText();
    }

    any visitDec_lstThird(CSubset_2205014Parser::Dec_lstThirdContext *ctx) override
    {
        string ID = ctx->ID()->getText();
        int size = stoi(ctx->CONST_INT()->getText());
        if (!icgEqualsIgnoreCase(decLstType, "void"))
            table->insert(ID, "ID", decLstType, true);

        if (insGlobalScope)
        {
            declareVarInDataSegment(ID, decLstType, size);
        }
        else
        {
            int byteSize = size * 4;
            currStkOffset += byteSize;
            SymbolInfo *s = lookup(ID);
            if (s)
                s->setStkOffset(currStkOffset);
            writeIntoTempFile("\tSUB ESP, " + to_string(byteSize) + "\n");
        }

        return ID + ctx->LTHIRD()->getText() + ctx->CONST_INT()->getText() + ctx->RTHIRD()->getText();
    }

    any visitDec_lstCommaThird(CSubset_2205014Parser::Dec_lstCommaThirdContext *ctx) override
    {
        string declaration_list = any_cast<string>(visit(ctx->declaration_list()));
        string ID = ctx->ID()->getText();
        int size = stoi(ctx->CONST_INT()->getText());

        if (!icgEqualsIgnoreCase(decLstType, "void"))
            table->insert(ID, "ID", decLstType, true);

        if (insGlobalScope)
        {
            declareVarInDataSegment(ID, decLstType, size);
        }
        else
        {
            int byteSize = size * 4;
            currStkOffset += byteSize;
            SymbolInfo *s = lookup(ID);
            if (s)
                s->setStkOffset(currStkOffset);
            writeIntoTempFile("\tSUB ESP, " + to_string(byteSize) + "\n");
        }

        return declaration_list + ctx->COMMA()->getText() + ID + ctx->LTHIRD()->getText() + ctx->CONST_INT()->getText() + ctx->RTHIRD()->getText();
    }

    any visitDec_lstID(CSubset_2205014Parser::Dec_lstIDContext *ctx) override
    {
        string matchStr = ctx->ID()->getText();
        if (!icgEqualsIgnoreCase(decLstType, "void"))
            table->insert(matchStr, "ID", decLstType);

        if (insGlobalScope)
        {
            declareVarInDataSegment(matchStr, decLstType, 0);
        }
        else
        {
            int byteSize;
            if (icgEqualsIgnoreCase(decLstType, "INT"))
                byteSize = 4;
            currStkOffset += byteSize;
            SymbolInfo *s = lookup(matchStr);
            if (s)
                s->setStkOffset(currStkOffset);
            string asmStr = "\tSUB ESP, " + to_string(byteSize) + "\n";
            writeIntoTempFile(asmStr);
        }
        return matchStr;
    }

    any visitDec_lstCommaID(CSubset_2205014Parser::Dec_lstCommaIDContext *ctx) override
    {
        string declaration_list = any_cast<string>(visit(ctx->declaration_list()));
        string ID = ctx->ID()->getText();
        if (!icgEqualsIgnoreCase(decLstType, "void"))
            table->insert(ID, "ID", decLstType);

        if (insGlobalScope)
        {
            declareVarInDataSegment(ID, decLstType, 0);
        }
        else
        {
            int byteSize;
            if (icgEqualsIgnoreCase(decLstType, "INT"))
                byteSize = 4;
            currStkOffset += byteSize;
            SymbolInfo *s = lookup(ID);
            if (s)
                s->setStkOffset(currStkOffset);
            string asmStr = "\tSUB ESP, " + to_string(byteSize) + "\n";
            writeIntoTempFile(asmStr);
        }

        return declaration_list + ctx->COMMA()->getText() + ID;
    }

    any visitStmtsStmt(CSubset_2205014Parser::StmtsStmtContext *ctx) override
    {
        currStmtCnt++;
        if (currStmtCnt > 1)
        {
            labelCounter++;
            string label = ".L" + to_string(labelCounter);
            writeIntoTempFile(label + ":\n");
        }
        return visit(ctx->statement());
    }

    any visitStmtsStmtsStmt(CSubset_2205014Parser::StmtsStmtsStmtContext *ctx) override
    {
        string statements = any_cast<string>(visit(ctx->statements()));
        currStmtCnt++;
        if (currStmtCnt > 1)
        {
            labelCounter++;
            string label = ".L" + to_string(labelCounter);
            writeIntoTempFile(label + ":\n");
        }
        string statement = any_cast<string>(visit(ctx->statement()));
        return statements + "\n" + statement;
    }

    any visitStmtVar_dec(CSubset_2205014Parser::StmtVar_decContext *ctx) override
    {
        return visit(ctx->var_declaration());
    }

    any visitStmtExpr_stmt(CSubset_2205014Parser::StmtExpr_stmtContext *ctx) override
    {
        return visit(ctx->expression_statement());
    }

    any visitStmtIfElse(CSubset_2205014Parser::StmtIfElseContext *ctx) override
    {
        string IF = ctx->IF()->getText();
        string expression = any_cast<string>(visit(ctx->expression()));

        writeIntoTempFile(fetchExpr(expression));
        int lTrue = ++labelCounter;
        int lFalse = ++labelCounter;
        int lEnd = ++labelCounter;

        writeIntoTempFile("\tCMP EAX, 0\n\tJNE .L" + to_string(lTrue) + "\n\tJMP .L" + to_string(lFalse) + "\n.L" + to_string(lTrue) + ":\n");

        string statement1 = any_cast<string>(visit(ctx->statement(0)));

        writeIntoTempFile("\tJMP .L" + to_string(lEnd) + "\n.L" + to_string(lFalse) + ":\n");

        string ELSE = ctx->ELSE()->getText();
        string statement2 = any_cast<string>(visit(ctx->statement(1)));

        writeIntoTempFile(".L" + to_string(lEnd) + ":\n");

        return IF + " " + ctx->LPAREN()->getText() + expression + ctx->RPAREN()->getText() + statement1 + "\n" + ELSE + "\n" + statement2;
    }

    any visitStmtWhile(CSubset_2205014Parser::StmtWhileContext *ctx) override
    {
        string WHILE = ctx->WHILE()->getText();
        int lCond = ++labelCounter;
        int lBody = ++labelCounter;
        int lEnd = ++labelCounter;

        writeIntoTempFile(".L" + to_string(lCond) + ":\n");
        string expression = any_cast<string>(visit(ctx->expression()));

        writeIntoTempFile(fetchExpr(expression));
        writeIntoTempFile("\tCMP EAX, 0\n\tJNE .L" + to_string(lBody) + "\n\tJMP .L" + to_string(lEnd) + "\n");
        writeIntoTempFile(".L" + to_string(lBody) + ":\n");

        string statement = any_cast<string>(visit(ctx->statement()));

        writeIntoTempFile("\tJMP .L" + to_string(lCond) + "\n.L" + to_string(lEnd) + ":\n");

        return WHILE + " " + ctx->LPAREN()->getText() + expression + ctx->RPAREN()->getText() + statement;
    }

    any visitStmtPrint(CSubset_2205014Parser::StmtPrintContext *ctx) override
    {
        string ID = ctx->ID()->getText();
        SymbolInfo *s = lookup(ID);
        string src = "";
        if (s && s->getStkOffset() > 0)
        {
            src = "[EBP-" + to_string(s->getStkOffset()) + "]";
        }
        else if (s && s->getStkOffset() < 0)
        {
            src = "[EBP+" + to_string(-s->getStkOffset()) + "]";
        }
        else
        {
            src = "[" + ID + "]";
        }
        string asmCode = "\tMOV EAX, " + src + "\t\t; Line " + to_string(ctx->getStart()->getLine()) + "\n\tCALL print_number\n";
        writeIntoTempFile(asmCode);
        printfUsed = true;
        return ctx->PRINTLN()->getText() + ctx->LPAREN()->getText() + ID + ctx->RPAREN()->getText() + ctx->SEMICOLON()->getText();
    }

    any visitStmtReturn(CSubset_2205014Parser::StmtReturnContext *ctx) override
    {
        string expression = any_cast<string>(visit(ctx->expression()));
        string fetchExp = fetchExpr(expression);
        string jmp = "\tJMP " + currFuncEndLabel + "\n";

        writeIntoTempFile(fetchExp + jmp);

        return ctx->RETURN()->getText() + " " + expression + ctx->SEMICOLON()->getText();
    }

    any visitExpr_stmtSemicolon(CSubset_2205014Parser::Expr_stmtSemicolonContext *ctx) override
    {
        return ctx->SEMICOLON()->getText();
    }

    any visitExpr_stmtExprSemicolon(CSubset_2205014Parser::Expr_stmtExprSemicolonContext *ctx) override
    {
        string expression = any_cast<string>(visit(ctx->expression()));
        writeIntoTempFile(fetchExpr(expression));
        return expression + ctx->SEMICOLON()->getText();
    }

    any visitExpr_stmtExpr(CSubset_2205014Parser::Expr_stmtExprContext *ctx) override
    {
        string expression = any_cast<string>(visit(ctx->expression()));
        writeIntoTempFile(fetchExpr(expression));
        return expression;
    }

    any visitVarId(CSubset_2205014Parser::VarIdContext *ctx) override
    {
        string matchStr = ctx->ID()->getText();
        unsigned int bucket;
        int position, uniqueNumber;
        string scopeNo;
        SymbolInfo *s = table->lookUp2(matchStr, bucket, position, uniqueNumber, scopeNo);

        if (s)
            exprTypes.put(ctx, s->getDtype());
        return matchStr;
    }

    any visitVarThird(CSubset_2205014Parser::VarThirdContext *ctx) override
    {
        string ID = ctx->ID()->getText();
        string expression = any_cast<string>(visit(ctx->expression()));
        unsigned int bucket;
        int position, uniqueNumber;
        string scopeNo;
        SymbolInfo *s = table->lookUp2(ID, bucket, position, uniqueNumber, scopeNo);

        if (s)
            exprTypes.put(ctx, s->getDtype());

        writeIntoTempFile(fetchExpr(expression));
        writeIntoTempFile("\tPUSH EAX\n");
        fetchFromStack = true;

        return ID + ctx->LTHIRD()->getText() + expression + ctx->RTHIRD()->getText();
    }

    any visitExprLogic(CSubset_2205014Parser::ExprLogicContext *ctx) override
    {
        exprTypes.put(ctx, exprTypes.get(ctx->logic_expression()));
        return visit(ctx->logic_expression());
    }

    any visitExprVar(CSubset_2205014Parser::ExprVarContext *ctx) override
    {
        string logic_expression = any_cast<string>(visit(ctx->logic_expression()));
        string rhsPop = fetchExpr(logic_expression);

        writeIntoTempFile(rhsPop);
        writeIntoTempFile("\tPUSH EAX\n");
        fetchFromStack = false;

        string variable = any_cast<string>(visit(ctx->variable()));

        if (auto varThird = dynamic_cast<CSubset_2205014Parser::VarThirdContext *>(ctx->variable()))
        {
            string ID = varThird->ID()->getText();
            SymbolInfo *s = lookup(ID);

            writeIntoTempFile("\tPOP EAX\n");
            writeIntoTempFile("\tMOV EBX, 4\n\tMUL EBX\n");
            writeIntoTempFile("\tPOP EDX\n");
            fetchFromStack = false;

            if (s && s->getStkOffset() > 0)
            {
                writeIntoTempFile("\tMOV EBX, " + to_string(s->getStkOffset()) + "\n");
                writeIntoTempFile("\tSUB EBX, EAX\n");
                writeIntoTempFile("\tNEG EBX\n");
                writeIntoTempFile("\tMOV [EBP+EBX], EDX\n");
            }
            else
            {
                writeIntoTempFile("\tMOV ECX, EAX\n");
                writeIntoTempFile("\tMOV [" + ID + "+ECX], EDX\n");
            }
        }
        else
        {
            string ID = ctx->variable()->getStart()->getText();
            SymbolInfo *s = lookup(ID);

            writeIntoTempFile("\tPOP EDX\n");
            fetchFromStack = false;

            string dst = "";
            if (s && s->getStkOffset() > 0)
                dst = "[EBP-" + to_string(s->getStkOffset()) + "]";
            else if (s && s->getStkOffset() < 0)
                dst = "[EBP+" + to_string(-s->getStkOffset()) + "]";
            else
                dst = "[" + ID + "]";

            writeIntoTempFile("\tMOV " + dst + ", EDX\n");
        }

        writeIntoTempFile("\tPUSH EDX\n");
        fetchFromStack = true;

        return variable + ctx->ASSIGNOP()->getText() + logic_expression;
    }

    any visitLogciRel(CSubset_2205014Parser::LogciRelContext *ctx) override
    {
        exprTypes.put(ctx, exprTypes.get(ctx->rel_expression()));
        return visit(ctx->rel_expression());
    }

    any visitLogicRelRel(CSubset_2205014Parser::LogicRelRelContext *ctx) override
    {
        string rel_expression1 = any_cast<string>(visit(ctx->rel_expression(0)));
        string fetchLeft = "";
        SymbolInfo *lhs = lookup(rel_expression1);
        if (fetchFromStack)
        {
            fetchLeft = "\tPOP EAX\t\t; Line " + to_string(ctx->getStart()->getLine()) + "\n";
            fetchFromStack = false;
        }
        else if (lhs)
        {
            string src = "";
            if (lhs->getStkOffset() > 0)
                src = "[EBP-" + to_string(lhs->getStkOffset()) + "]";
            else if (lhs->getStkOffset() < 0)
                src = "[EBP+" + to_string(-lhs->getStkOffset()) + "]";
            else
                src = "[" + rel_expression1 + "]";

            fetchLeft = "\tMOV EAX, " + src + "\t\t; Line " + to_string(ctx->getStart()->getLine()) + "\n ";
        }
        else
        {
            fetchLeft = "\tMOV EAX, " + rel_expression1 + "\t\t; Line " + to_string(ctx->getStart()->getLine()) + "\n";
        }
        writeIntoTempFile(fetchLeft);

        string LOGICOP = ctx->LOGICOP()->getText();
        int lTrue = ++labelCounter;
        int lFalse = ++labelCounter;
        int lEnd = ++labelCounter;

        if (LOGICOP == "&&")
            writeIntoTempFile("\tCMP EAX, 0\n\tJE .L" + to_string(lFalse) + "\n");
        else if (LOGICOP == "||")
            writeIntoTempFile("\tCMP EAX, 0\n\tJNE .L" + to_string(lTrue) + "\n");

        string rel_expression2 = any_cast<string>(visit(ctx->rel_expression(1)));
        SymbolInfo *rhs = lookup(rel_expression2);
        string fetchRight = "";
        if (fetchFromStack)
        {
            fetchRight = "\tPOP EAX\t\t; Line " + to_string(ctx->getStart()->getLine()) + "\n";
            fetchFromStack = false;
        }
        else if (rhs)
        {
            string src = "";
            if (rhs->getStkOffset() > 0)
                src = "[EBP-" + to_string(rhs->getStkOffset()) + "]";
            else if (rhs->getStkOffset() < 0)
                src = "[EBP+" + to_string(-rhs->getStkOffset()) + "]";
            else
                src = "[" + rel_expression2 + "]";

            fetchRight = "\tMOV EAX, " + src + "\t\t; Line " + to_string(ctx->getStart()->getLine()) + "\n ";
        }
        else
        {
            fetchRight = "\tMOV EAX, " + rel_expression2 + "\t\t; Line " + to_string(ctx->getStart()->getLine()) + "\n";
        }
        writeIntoTempFile(fetchRight);

        if (LOGICOP == "&&")
            writeIntoTempFile("\tCMP EAX, 0\n\tJE .L" + to_string(lFalse) + "\n\tJMP .L" + to_string(lTrue) + "\n");
        else if (LOGICOP == "||")
            writeIntoTempFile("\tCMP EAX, 0\n\tJNE .L" + to_string(lTrue) + "\n\tJMP .L" + to_string(lFalse) + "\n");

        string trueLabel = ".L" + to_string(lTrue) + ":\n\tMOV EAX, 1\t\t; Line " + to_string(ctx->getStart()->getLine()) + "\n\tJMP .L" + to_string(lEnd) + "\n";
        string falseLabel = ".L" + to_string(lFalse) + ":\n\tMOV EAX, 0\t\t; Line " + to_string(ctx->getStart()->getLine()) + "\n";
        string assign = ".L" + to_string(lEnd) + ":\n\tPUSH EAX\n";

        fetchFromStack = true;
        writeIntoTempFile(trueLabel + falseLabel + assign);
        exprTypes.put(ctx, "INT");

        return rel_expression1 + LOGICOP + rel_expression2;
    }

    any visitRelSimple(CSubset_2205014Parser::RelSimpleContext *ctx) override
    {
        exprTypes.put(ctx, exprTypes.get(ctx->simple_expression()));
        return visit(ctx->simple_expression());
    }

    any visitRelSimpleSimple(CSubset_2205014Parser::RelSimpleSimpleContext *ctx) override
    {
        string simple_expression1 = any_cast<string>(visit(ctx->simple_expression(0)));
        string fetchLeft = "";
        SymbolInfo *lhs = lookup(simple_expression1);
        if (fetchFromStack)
        {
            fetchLeft = "\tPOP EAX\t\t; Line " + to_string(ctx->getStart()->getLine()) + "\n";
            fetchFromStack = false;
        }
        else if (lhs)
        {
            string src = "";
            if (lhs->getStkOffset() > 0)
                src = "[EBP-" + to_string(lhs->getStkOffset()) + "]";
            else if (lhs->getStkOffset() < 0)
                src = "[EBP+" + to_string(-lhs->getStkOffset()) + "]";
            else
                src = "[" + simple_expression1 + "]";

            fetchLeft = "\tMOV EAX, " + src + "\t\t; Line " + to_string(ctx->getStart()->getLine()) + "\n ";
        }
        else
        {
            fetchLeft = "\tMOV EAX, " + simple_expression1 + "\t\t; Line " + to_string(ctx->getStart()->getLine()) + "\n";
        }

        string RELOP = ctx->RELOP()->getText();
        string simple_expression2 = any_cast<string>(visit(ctx->simple_expression(1)));

        SymbolInfo *rhs = lookup(simple_expression2);
        string fetchRight;
        if (fetchFromStack)
        {
            fetchRight = "\tPOP EAX\t\t; Line " + to_string(ctx->getStart()->getLine()) + "\n";
            fetchFromStack = false;
        }
        else if (rhs)
        {
            string src = "";
            if (rhs->getStkOffset() > 0)
                src = "[EBP-" + to_string(rhs->getStkOffset()) + "]";
            else if (rhs->getStkOffset() < 0)
                src = "[EBP+" + to_string(-rhs->getStkOffset()) + "]";
            else
                src = "[" + simple_expression2 + "]";

            fetchRight = "\tMOV EAX, " + src + "\t\t; Line " + to_string(ctx->getStart()->getLine()) + "\n ";
        }
        else
        {
            fetchRight = "\tMOV EAX, " + simple_expression2 + "\t\t; Line " + to_string(ctx->getStart()->getLine()) + "\n";
        }
        fetchRight = fetchRight.append("\tMOV EDX, EAX\n");
        string jmpIns = "";
        if (RELOP == "<=")
            jmpIns = "JLE";
        if (RELOP == "==")
            jmpIns = "JE";
        if (RELOP == ">=")
            jmpIns = "JGE";
        if (RELOP == ">")
            jmpIns = "JG";
        if (RELOP == "<")
            jmpIns = "JL";
        if (RELOP == "!=")
            jmpIns = "JNE";

        int tlabel = ++labelCounter;
        int assignlabel = ++labelCounter;
        int flabel = ++labelCounter;
        string operation = "\tCMP EAX, EDX\n\t" + jmpIns + " .L" + to_string(tlabel) + "\n\tJMP .L" + to_string(flabel) + "\n";
        string trueLabel = ".L" + to_string(tlabel) + ":\n\tMOV EAX, 1\t\t; Line " + to_string(ctx->getStart()->getLine()) + "\n\tJMP .L" + to_string(assignlabel) + "\n";
        string falseLabel = ".L" + to_string(flabel) + ":\n\tMOV EAX, 0\t\t; Line " + to_string(ctx->getStart()->getLine()) + "\n";
        string assign = ".L" + to_string(assignlabel) + ":\n\tPUSH EAX\n";

        ++labelCounter;
        string asmCode = fetchRight + fetchLeft + operation + trueLabel + falseLabel + assign;
        fetchFromStack = true;
        writeIntoTempFile(asmCode);

        return simple_expression1 + RELOP + simple_expression2;
    }

    any visitSimpleTerm(CSubset_2205014Parser::SimpleTermContext *ctx) override
    {
        exprTypes.put(ctx, exprTypes.get(ctx->term()));
        return visit(ctx->term());
    }

    any visitSimpleSimpleTerm(CSubset_2205014Parser::SimpleSimpleTermContext *ctx) override
    {
        string simple_expression = any_cast<string>(visit(ctx->simple_expression()));
        string fetchLeft = "";
        SymbolInfo *lhs = lookup(simple_expression);
        if (fetchFromStack)
        {
            fetchLeft = "\tPOP EAX\t\t; Line " + to_string(ctx->getStart()->getLine()) + "\n";
            fetchFromStack = false;
        }
        else if (lhs)
        {
            string src = "";
            if (lhs->getStkOffset() > 0)
                src = "[EBP-" + to_string(lhs->getStkOffset()) + "]";
            else if (lhs->getStkOffset() < 0)
                src = "[EBP+" + to_string(-lhs->getStkOffset()) + "]";
            else
                src = "[" + simple_expression + "]";

            fetchLeft = "\tMOV EAX, " + src + "\t\t; Line " + to_string(ctx->getStart()->getLine()) + "\n ";
        }
        else
        {
            fetchLeft = "\tMOV EAX, " + simple_expression + "\t\t; Line " + to_string(ctx->getStart()->getLine()) + "\n";
        }

        string ADDOP = ctx->ADDOP()->getText();
        string term = any_cast<string>(visit(ctx->term()));

        SymbolInfo *rhs = lookup(term);
        string fetchRight;
        if (fetchFromStack)
        {
            fetchRight = "\tPOP EAX\t\t; Line " + to_string(ctx->getStart()->getLine()) + "\n";
            fetchFromStack = false;
        }
        else if (rhs)
        {
            string src = "";
            if (rhs->getStkOffset() > 0)
                src = "[EBP-" + to_string(rhs->getStkOffset()) + "]";
            else if (rhs->getStkOffset() < 0)
                src = "[EBP+" + to_string(-rhs->getStkOffset()) + "]";
            else
                src = "[" + term + "]";

            fetchRight = "\tMOV EAX, " + src + "\t\t; Line " + to_string(ctx->getStart()->getLine()) + "\n ";
        }
        else
        {
            fetchRight = "\tMOV EAX, " + term + "\t\t; Line " + to_string(ctx->getStart()->getLine()) + "\n";
        }
        fetchRight = fetchRight.append("\tMOV EDX, EAX\n");
        string operation = (ADDOP == "+") ? "\tADD" : "\tSUB";
        operation.append(" EAX, EDX\n");
        string pushEAX = "\tPUSH EAX\n";
        string asmCode = fetchRight + fetchLeft + operation + pushEAX;

        fetchFromStack = true;
        writeIntoTempFile(asmCode);

        string dtype1 = exprTypes.get(ctx->simple_expression());
        string dtype2 = exprTypes.get(ctx->term());
        if (icgEqualsIgnoreCase(dtype1, "float") || icgEqualsIgnoreCase(dtype2, "float"))
            exprTypes.put(ctx, "FLOAT");
        else
            exprTypes.put(ctx, "INT");

        return simple_expression + ADDOP + term;
    }

    any visitTermUnary(CSubset_2205014Parser::TermUnaryContext *ctx) override
    {
        exprTypes.put(ctx, exprTypes.get(ctx->unary_expression()));
        return visit(ctx->unary_expression());
    }

    any visitTermTerm(CSubset_2205014Parser::TermTermContext *ctx) override
    {
        string term = any_cast<string>(visit(ctx->term()));
        string fetchLeft = "";
        SymbolInfo *lhs = lookup(term);
        if (fetchFromStack)
        {
            fetchLeft = "\tPOP EAX\t\t; Line " + to_string(ctx->getStart()->getLine()) + "\n";
            fetchFromStack = false;
        }
        else if (lhs)
        {
            string src = "";
            if (lhs->getStkOffset() > 0)
                src = "[EBP-" + to_string(lhs->getStkOffset()) + "]";
            else if (lhs->getStkOffset() < 0)
                src = "[EBP+" + to_string(-lhs->getStkOffset()) + "]";
            else
                src = "[" + term + "]";

            fetchLeft = "\tMOV EAX, " + src + "\t\t; Line " + to_string(ctx->getStart()->getLine()) + "\n ";
        }
        else
        {
            fetchLeft = "\tMOV EAX, " + term + "\t\t; Line " + to_string(ctx->getStart()->getLine()) + "\n";
        }

        string MULOP = ctx->MULOP()->getText();
        string unary_expression = any_cast<string>(visit(ctx->unary_expression()));

        string dtype1 = exprTypes.get(ctx->term());
        string dtype2 = exprTypes.get(ctx->unary_expression());
        if (MULOP != "%" && (icgEqualsIgnoreCase(dtype1, "float") || icgEqualsIgnoreCase(dtype2, "float")))
            exprTypes.put(ctx, "FLOAT");
        else
            exprTypes.put(ctx, "INT");

        SymbolInfo *rhs = lookup(unary_expression);
        string fetchRight;
        if (fetchFromStack)
        {
            fetchRight = "\tPOP EAX\t\t; Line " + to_string(ctx->getStart()->getLine()) + "\n";
            fetchFromStack = false;
        }
        else if (rhs)
        {
            string src = "";
            if (rhs->getStkOffset() > 0)
                src = "[EBP-" + to_string(rhs->getStkOffset()) + "]";
            else if (rhs->getStkOffset() < 0)
                src = "[EBP+" + to_string(-rhs->getStkOffset()) + "]";
            else
                src = "[" + unary_expression + "]";

            fetchRight = "\tMOV EAX, " + src + "\t\t; Line " + to_string(ctx->getStart()->getLine()) + "\n ";
        }
        else
        {
            fetchRight = "\tMOV EAX, " + unary_expression + "\t\t; Line " + to_string(ctx->getStart()->getLine()) + "\n";
        }
        fetchRight = fetchRight.append("\tMOV ECX, EAX\n");
        string operation = (MULOP == "*") ? "\tIMUL" : "\tCDQ\n\tIDIV";
        operation.append(" ECX\n");
        string pushEAX = (MULOP == "%") ? "\tPUSH EDX\n" : "\tPUSH EAX\n";
        string asmCode = fetchRight + fetchLeft + operation + pushEAX;

        fetchFromStack = true;
        writeIntoTempFile(asmCode);

        return term + MULOP + unary_expression;
    }

    any visitUnaryAdd(CSubset_2205014Parser::UnaryAddContext *ctx) override
    {
        string ADDOP = ctx->ADDOP()->getText();
        string unary_expression = any_cast<string>(visit(ctx->unary_expression()));
        string fetchExprLocal = fetchExpr(unary_expression);

        writeIntoTempFile(fetchExprLocal);
        string operation = (ADDOP == "-") ? "\tNEG EAX\n" : "";
        operation.append("\tPUSH EAX\n");

        fetchFromStack = true;
        writeIntoTempFile(operation);
        return ADDOP + unary_expression;
    }

    any visitUnaryNot(CSubset_2205014Parser::UnaryNotContext *ctx) override
    {
        string NOT = ctx->NOT()->getText();
        string unary_expression = any_cast<string>(visit(ctx->unary_expression()));
        string fetchExprLocal = fetchExpr(unary_expression);

        int lTrue = ++labelCounter;
        int lFalse = ++labelCounter;
        int lEnd = ++labelCounter;
        string cmpOp = "\tCMP EAX, 0\n\tJE .L" + to_string(lTrue) + "\n\tJMP .L" + to_string(lFalse) + "\n";
        string trueLabel = ".L" + to_string(lTrue) + ":\n\tMOV EAX, 1\n\tJMP .L" + to_string(lEnd) + "\n";
        string falseLabel = ".L" + to_string(lFalse) + ":\n\tMOV EAX, 0\n";
        string endLabel = ".L" + to_string(lEnd) + ":\n\tPUSH EAX\n";

        fetchFromStack = true;
        writeIntoTempFile(fetchExprLocal + cmpOp + trueLabel + falseLabel + endLabel);
        return NOT + unary_expression;
    }

    any visitUnaryFactor(CSubset_2205014Parser::UnaryFactorContext *ctx) override
    {
        exprTypes.put(ctx, exprTypes.get(ctx->factor()));
        return visit(ctx->factor());
    }

    any visitFactorVar(CSubset_2205014Parser::FactorVarContext *ctx) override
    {
        string matchStr = any_cast<string>(visit(ctx->variable()));

        if (auto varThird = dynamic_cast<CSubset_2205014Parser::VarThirdContext *>(ctx->variable()))
        {
            string ID = varThird->ID()->getText();
            SymbolInfo *s = lookup(ID);

            writeIntoTempFile("\tPOP EAX\n");
            writeIntoTempFile("\tMOV EBX, 4\n\tMUL EBX\n");

            if (s && s->getStkOffset() > 0)
            {
                writeIntoTempFile("\tMOV EBX, " + to_string(s->getStkOffset()) + "\n");
                writeIntoTempFile("\tSUB EBX, EAX\n");
                writeIntoTempFile("\tNEG EBX\n");
                writeIntoTempFile("\tMOV EAX, [EBP+EBX]\n");
            }
            else
            {
                writeIntoTempFile("\tMOV ECX, EAX\n");
                writeIntoTempFile("\tMOV EAX, [" + ID + "+ECX]\n");
            }
            writeIntoTempFile("\tPUSH EAX\n");
            fetchFromStack = true;
        }

        exprTypes.put(ctx, exprTypes.get(ctx->variable()));
        return matchStr;
    }

    any visitFactorId(CSubset_2205014Parser::FactorIdContext *ctx) override
    {
        string ID = ctx->ID()->getText();
        argTypes.resize(0);
        string argument_list = any_cast<string>(visit(ctx->argument_list()));

        string callLabel = (ID == "main") ? ID : ID + "_START";

        writeIntoTempFile("\tCALL " + callLabel + "\n");
        writeIntoTempFile("\tPUSH EAX\n");
        fetchFromStack = true;

        SymbolInfo *s = lookup(ID);
        if (s)
            exprTypes.put(ctx, s->getDtype());
        return ID + ctx->LPAREN()->getText() + argument_list + ctx->RPAREN()->getText();
    }

    any visitFactorParen(CSubset_2205014Parser::FactorParenContext *ctx) override
    {
        string expression = any_cast<string>(visit(ctx->expression()));
        if (!fetchFromStack)
        {
            string fetchExprLocal = fetchExpr(expression);
            writeIntoTempFile(fetchExprLocal + "\tPUSH EAX\n");
            fetchFromStack = true;
        }
        return ctx->LPAREN()->getText() + expression + ctx->RPAREN()->getText();
    }

    any visitFactorInt(CSubset_2205014Parser::FactorIntContext *ctx) override
    {
        string matchStr = to_string(stoi(ctx->CONST_INT()->getText()));
        exprTypes.put(ctx, "INT");
        return matchStr;
    }

    any visitFactorFloat(CSubset_2205014Parser::FactorFloatContext *ctx) override
    {
        float val = stof(ctx->CONST_FLOAT()->getText());
        stringstream stream;
        stream << fixed << setprecision(2) << val;
        exprTypes.put(ctx, "FLOAT");
        return stream.str();
    }

    any visitFactorIncop(CSubset_2205014Parser::FactorIncopContext *ctx) override
    {
        string variable = any_cast<string>(visit(ctx->variable()));

        if (auto varId = dynamic_cast<CSubset_2205014Parser::VarIdContext *>(ctx->variable()))
        {
            string ID = varId->ID()->getText();
            string src = fetchSrc(ID);
            if (src.empty())
                src = "[" + ID + "]";
            else
                src = "[" + src + "]";

            writeIntoTempFile("\tMOV EAX, " + src + "\n\tPUSH EAX\n\tINC EAX\n\tMOV " + src + ", EAX\n");
            fetchFromStack = true;
        }
        else if (auto varThird = dynamic_cast<CSubset_2205014Parser::VarThirdContext *>(ctx->variable()))
        {
            string ID = varThird->ID()->getText();
            SymbolInfo *s = lookup(ID);

            writeIntoTempFile("\tPOP EAX\n");
            writeIntoTempFile("\tMOV EBX, 4\n\tMUL EBX\n");

            if (s && s->getStkOffset() > 0)
            {
                writeIntoTempFile("\tMOV EBX, " + to_string(s->getStkOffset()) + "\n");
                writeIntoTempFile("\tSUB EBX, EAX\n");
                writeIntoTempFile("\tNEG EBX\n");

                writeIntoTempFile("\tMOV EAX, [EBP+EBX]\n");
                writeIntoTempFile("\tPUSH EAX\n");
                writeIntoTempFile("\tINC EAX\n");
                writeIntoTempFile("\tMOV [EBP+EBX], EAX\n");
            }
            else
            {
                writeIntoTempFile("\tMOV ECX, EAX\n");
                writeIntoTempFile("\tMOV EAX, [" + ID + "+ECX]\n");
                writeIntoTempFile("\tPUSH EAX\n");
                writeIntoTempFile("\tINC EAX\n");
                writeIntoTempFile("\tMOV [" + ID + "+ECX], EAX\n");
            }
            fetchFromStack = true;
        }

        return variable + ctx->INCOP()->getText();
    }

    any visitFactorDecop(CSubset_2205014Parser::FactorDecopContext *ctx) override
    {
        string variable = any_cast<string>(visit(ctx->variable()));

        if (auto varId = dynamic_cast<CSubset_2205014Parser::VarIdContext *>(ctx->variable()))
        {
            string ID = varId->ID()->getText();
            string src = fetchSrc(ID);
            if (src.empty())
                src = "[" + ID + "]";
            else
                src = "[" + src + "]";

            writeIntoTempFile("\tMOV EAX, " + src + "\n\tPUSH EAX\n\tDEC EAX\n\tMOV " + src + ", EAX\n");
            fetchFromStack = true;
        }
        else if (auto varThird = dynamic_cast<CSubset_2205014Parser::VarThirdContext *>(ctx->variable()))
        {
            string ID = varThird->ID()->getText();
            SymbolInfo *s = lookup(ID);

            writeIntoTempFile("\tPOP EAX\n");
            writeIntoTempFile("\tMOV EBX, 4\n\tMUL EBX\n");

            if (s && s->getStkOffset() > 0)
            {
                writeIntoTempFile("\tMOV EBX, " + to_string(s->getStkOffset()) + "\n");
                writeIntoTempFile("\tSUB EBX, EAX\n");
                writeIntoTempFile("\tNEG EBX\n");

                writeIntoTempFile("\tMOV EAX, [EBP+EBX]\n");
                writeIntoTempFile("\tPUSH EAX\n");
                writeIntoTempFile("\tDEC EAX\n");
                writeIntoTempFile("\tMOV [EBP+EBX], EAX\n");
            }
            else
            {
                writeIntoTempFile("\tMOV ECX, EAX\n");
                writeIntoTempFile("\tMOV EAX, [" + ID + "+ECX]\n");
                writeIntoTempFile("\tPUSH EAX\n");
                writeIntoTempFile("\tDEC EAX\n");
                writeIntoTempFile("\tMOV [" + ID + "+ECX], EAX\n");
            }
            fetchFromStack = true;
        }

        return variable + ctx->DECOP()->getText();
    }

    any visitArgument_list(CSubset_2205014Parser::Argument_listContext *ctx) override
    {
        if (ctx->arguments())
            return visit(ctx->arguments());
        return string("");
    }

    any visitArgsArgs(CSubset_2205014Parser::ArgsArgsContext *ctx) override
    {
        string arguments = any_cast<string>(visit(ctx->arguments()));
        string logic_expression = any_cast<string>(visit(ctx->logic_expression()));
        argTypes.push_back(exprTypes.get(ctx->logic_expression()));

        writeIntoTempFile(fetchExpr(logic_expression));
        writeIntoTempFile("\tPUSH EAX\n");

        return arguments + ctx->COMMA()->getText() + logic_expression;
    }

    any visitArgsLogic(CSubset_2205014Parser::ArgsLogicContext *ctx) override
    {
        string logic_expression = any_cast<string>(visit(ctx->logic_expression()));
        argTypes.push_back(exprTypes.get(ctx->logic_expression()));

        writeIntoTempFile(fetchExpr(logic_expression));
        writeIntoTempFile("\tPUSH EAX\n");

        return logic_expression;
    }

    any visitStmtIf(CSubset_2205014Parser::StmtIfContext *ctx) override
    {
        string expression = any_cast<string>(visit(ctx->expression()));

        writeIntoTempFile(fetchExpr(expression));
        int lTrue = ++labelCounter;
        int lEnd = ++labelCounter;

        writeIntoTempFile("\tCMP EAX, 0\n\tJNE .L" + to_string(lTrue) + "\n\tJMP .L" + to_string(lEnd) + "\n.L" + to_string(lTrue) + ":\n");

        string statement = any_cast<string>(visit(ctx->statement()));

        writeIntoTempFile(".L" + to_string(lEnd) + ":\n");

        return ctx->IF()->getText() + " " + ctx->LPAREN()->getText() + expression + ctx->RPAREN()->getText() + statement;
    }

    any visitStmtFor(CSubset_2205014Parser::StmtForContext *ctx) override
    {
        string expr_stmt1 = any_cast<string>(visit(ctx->expression_statement(0)));

        int lCond = ++labelCounter;
        int lBody = ++labelCounter;
        int lEnd = ++labelCounter;
        int lUpdate = ++labelCounter;

        writeIntoTempFile(".L" + to_string(lCond) + ":\n");

        string expr_stmt2 = any_cast<string>(visit(ctx->expression_statement(1)));

        // Safety fix: If the condition is perfectly empty (for(;;)), artificially force true into EAX
        if (expr_stmt2 == ";")
        {
            writeIntoTempFile("\tMOV EAX, 1\n");
        }

        writeIntoTempFile("\tCMP EAX, 0\n\tJNE .L" + to_string(lBody) + "\n\tJMP .L" + to_string(lEnd) + "\n");
        writeIntoTempFile(".L" + to_string(lUpdate) + ":\n");

        string expression = any_cast<string>(visit(ctx->expression()));
        writeIntoTempFile(fetchExpr(expression));

        writeIntoTempFile("\tJMP .L" + to_string(lCond) + "\n");
        writeIntoTempFile(".L" + to_string(lBody) + ":\n");

        string statement = any_cast<string>(visit(ctx->statement()));
        writeIntoTempFile("\tJMP .L" + to_string(lUpdate) + "\n");

        writeIntoTempFile(".L" + to_string(lEnd) + ":\n");

        return ctx->FOR()->getText() + ctx->LPAREN()->getText() + expr_stmt1 + expr_stmt2 + expression + ctx->RPAREN()->getText() + statement;
    }

    any visitStmtCmpd_stmt(CSubset_2205014Parser::StmtCmpd_stmtContext *ctx) override
    {
        table->enterScope();
        return visit(ctx->compound_statement());
    }

    any visitUniParamAddOp(CSubset_2205014Parser::UniParamAddOpContext *ctx) override
    {
        paramTypes.push_back("#");
        return visit(ctx->type_specifier());
    }

    any visitSimpleSimpleAdd(CSubset_2205014Parser::SimpleSimpleAddContext *ctx) override
    {
        return visit(ctx->simple_expression());
    }

    any visitDec_lstIDAddOpID(CSubset_2205014Parser::Dec_lstIDAddOpIDContext *ctx) override
    {
        string ID1 = ctx->ID(0)->getText();
        table->insert(ID1, "ID", decLstType);
        return ID1;
    }

    any visitMultiParamADDOP(CSubset_2205014Parser::MultiParamADDOPContext *ctx) override
    {
        string parameter_list = any_cast<string>(visit(ctx->parameter_list()));
        string type_specifier = any_cast<string>(visit(ctx->type_specifier()));
        paramTypes.push_back("#");
        return parameter_list + ctx->COMMA()->getText() + type_specifier;
    }

    any visitDec_lstCOMMAIDAddopID(CSubset_2205014Parser::Dec_lstCOMMAIDAddopIDContext *ctx) override
    {
        string declaration_list = any_cast<string>(visit(ctx->declaration_list()));
        string ID1 = ctx->ID(0)->getText();
        table->insert(ID1, "ID", decLstType);
        return declaration_list + ctx->COMMA()->getText() + ID1;
    }

    any visitTermTermMulAssign(CSubset_2205014Parser::TermTermMulAssignContext *ctx) override
    {
        return visit(ctx->term());
    }

    any visitRelSimpleRelAssign(CSubset_2205014Parser::RelSimpleRelAssignContext *ctx) override
    {
        return visit(ctx->simple_expression());
    }

    any visitLogicRelAssign(CSubset_2205014Parser::LogicRelAssignContext *ctx) override
    {
        return visit(ctx->rel_expression());
    }

    any visitStmtReturnErr(CSubset_2205014Parser::StmtReturnErrContext *ctx) override
    {
        return ctx->RETURN()->getText() + " " + any_cast<string>(visit(ctx->expression()));
    }

    any visitStmtPrintErr(CSubset_2205014Parser::StmtPrintErrContext *ctx) override
    {
        return ctx->PRINTLN()->getText() + ctx->LPAREN()->getText() + ctx->ID()->getText() + ctx->RPAREN()->getText();
    }
};