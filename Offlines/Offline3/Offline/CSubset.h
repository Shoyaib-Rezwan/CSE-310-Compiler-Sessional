#pragma once

#include "CSubsetBaseVisitor.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include "headers/2205014_symbol_table.hpp"
#include <iomanip>
#include "tree/ParseTreeProperty.h"

using namespace std;
using namespace antlr4;
using namespace tree;

extern ofstream logFile;
extern ofstream errorFile;
extern SymbolTable *table;

bool equalsIgnoreCase(string a, string b)
{
    if (a.size() != b.size())
    {
        return false;
    }
    for (int i = 0; i < a.size(); i++)
    {
        if (tolower(a[i]) != tolower(b[i]))
        {
            return false;
        }
    }
    return true;
}

void writeIntoLogFile(const std::string &message)
{
    if (!logFile.is_open())
    {
        logFile.open("logFile.txt", std::ios::app);
        if (!logFile)
        {
            std::cerr << "Error opening logFile.txt" << std::endl;
            return;
        }
    }
    logFile << message;
    logFile.flush();
}

void writeIntoErrorFile(const std::string &message)
{
    if (!errorFile.is_open())
    {
        errorFile.open("errorFile.txt", std::ios::app);
        if (!errorFile)
        {
            std::cerr << "Error opening errorFile.txt" << std::endl;
            return;
        }
    }
    errorFile << message;
    errorFile.flush();
}

class CSubset : public CSubsetVisitor
{
    int errorCnt = 0;
    ParseTreeProperty<string> exprTypes;
    string decLstType;         // stores data type for declaration list
    vector<string> paramTypes; // stores the types of the parameters of a function
    vector<string> argTypes;   // stores the types of the arguments of a function

public:
    // looks for symbol info pointer
    SymbolInfo *lookup(string key)
    {
        unsigned int bucket;
        int position, uniqueNumber;
        string scopeNo;
        return table->lookUp2(key, bucket, position, uniqueNumber, scopeNo);
    }

    any visitStart(CSubsetParser::StartContext *ctx) override
    {
        any returnVal = visit(ctx->program());
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": start : program\n";
        writeIntoLogFile(message);
        table->printAllScopes2(logFile);
        table->exitScope();
        logFile << "\n\n"
                << "Total lines: " << ctx->getStop()->getLine();
        logFile << "\n"
                << "Total errors: " << errorCnt << "\n\n";
        return returnVal;
    }

    any visitProgProgUnit(CSubsetParser::ProgProgUnitContext *ctx) override
    {
        string program = any_cast<string>(visit(ctx->program()));
        string unit = any_cast<string>(visit(ctx->unit()));
        string matchStr = program + "\n" + unit;
        string message = "Line " + to_string(ctx->unit()->getStart()->getLine()) + ": program : program unit\n\n";
        message = message + matchStr + "\n\n\n";
        writeIntoLogFile(message);
        return matchStr;
    }

    any visitProgUnit(CSubsetParser::ProgUnitContext *ctx) override
    {
        string matchStr = any_cast<string>(visit(ctx->unit()));
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": program : unit\n\n";
        message = message + matchStr + "\n\n\n";
        writeIntoLogFile(message);
        return matchStr;
    }

    any visitUnitVarDec(CSubsetParser::UnitVarDecContext *ctx) override
    {
        string matchStr = any_cast<string>(visit(ctx->var_declaration()));
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": unit : var_declaration\n\n";
        message = message + matchStr + "\n\n\n";
        writeIntoLogFile(message);
        return matchStr;
    }

    any visitUnitFuncDec(CSubsetParser::UnitFuncDecContext *ctx) override
    {
        string matchStr = any_cast<string>(visit(ctx->func_declaration()));
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": unit : func_declaration\n\n";
        message = message + matchStr + "\n\n\n";
        writeIntoLogFile(message);
        return matchStr;
    }

    any visitUnitFuncDef(CSubsetParser::UnitFuncDefContext *ctx) override
    {
        string matchStr = any_cast<string>(visit(ctx->func_definition()));
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": unit : func_definition\n\n";
        message = message + matchStr + "\n\n\n";
        writeIntoLogFile(message);
        return matchStr;
    }

    any visitFuncDecParam(CSubsetParser::FuncDecParamContext *ctx) override
    {
        string type_specifier = any_cast<string>(visit(ctx->type_specifier()));
        string ID = ctx->ID()->getText();
        if (!table->insert(ID, "ID", type_specifier, false, false))
        {
            string errMsg = "Error at line " + to_string(ctx->getStart()->getLine()) + ": Multiple declaration of " + ID + "\n\n";
            errorFile << errMsg;
            logFile << errMsg;
            errorCnt++;
        }

        string LPAREN = ctx->LPAREN()->getText();
        // create a new scope
        table->enterScope();

        // initialize the vector to store parameter data types
        paramTypes.resize(0);

        string parameter_list = any_cast<string>(visit(ctx->parameter_list()));

        // as have got the parameters, just store them inside the symbol Info
        SymbolInfo *s = lookup(ID);

        s->setParamTypes(paramTypes);

        string RPAREN = ctx->RPAREN()->getText();
        string SEMICOLON = ctx->SEMICOLON()->getText();
        string matchStr = type_specifier + " " + ID + LPAREN + parameter_list + RPAREN + SEMICOLON;
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": func_declaration : type_specifier ID LPAREN parameter_list RPAREN SEMICOLON\n\n";
        message = message + matchStr + "\n\n\n";
        writeIntoLogFile(message);
        // exit the scope but don't print it
        table->exitScope();
        return matchStr;
    }

    any visitFuncDecNoParam(CSubsetParser::FuncDecNoParamContext *ctx) override
    {
        string type_specifier = any_cast<string>(visit(ctx->type_specifier()));
        string ID = ctx->ID()->getText();
        if (!table->insert(ID, "ID", type_specifier, false, false))
        {
            string errMsg = "Error at line " + to_string(ctx->getStart()->getLine()) + ": Multiple declaration of " + ID + "\n\n";
            errorFile << errMsg;
            logFile << errMsg;
            errorCnt++;
        }
        string LPAREN = ctx->LPAREN()->getText();
        // create a new scope
        table->enterScope();
        string RPAREN = ctx->RPAREN()->getText();
        string SEMICOLON = ctx->SEMICOLON()->getText();
        string matchStr = type_specifier + " " + ID + LPAREN + RPAREN + SEMICOLON;
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": func_declaration : type_specifier ID LPAREN RPAREN SEMICOLON\n\n";
        message = message + matchStr + "\n\n\n";
        writeIntoLogFile(message);
        // exit the scope but don't print it
        table->exitScope();
        return matchStr;
    }

    any visitFuncDefParam(CSubsetParser::FuncDefParamContext *ctx) override
    {
        string type_specifier = any_cast<string>(visit(ctx->type_specifier()));
        string ID = ctx->ID()->getText();

        string errMsg = "";
        bool checkParamNumbers = false; // this declaration has potential for causing param number error
        if (!table->insert(ID, "ID", type_specifier))
        {
            // check whether it is previously defined or not
            unsigned int bucket;
            int position, uniqueNumber;
            string scopeNo;
            SymbolInfo *s = table->lookUp2(ID, bucket, position, uniqueNumber, scopeNo);
            if (s->getIsDefined())
            {
                errMsg = "Error at line " + to_string(ctx->getStart()->getLine()) + ": Multiple declaration of " + ID + "\n\n";
                errorCnt++;
            }
            // now handle return type mismatch between definition and declaration
            if (!s->getIsDefined() && s->getDtype() != type_specifier)
            {
                errMsg = "Error at line " + to_string(ctx->getStart()->getLine()) + ": Return type mismatch with function declaration in function " + ID + "\n\n";
                errorCnt++;
            }
            // handle argument number mismatch
            if (!s->getIsDefined())
            {
                vector<string> params = s->getParamTypes();
                checkParamNumbers = true;
            }
            s->setIsDefined(true);
        }

        string LPAREN = ctx->LPAREN()->getText();
        // create a new scope
        table->enterScope();

        paramTypes.resize(0);
        string parameter_list = any_cast<string>(visit(ctx->parameter_list()));
        // print errors here ---- as per sample I/O
        if (!errMsg.empty())
        {
            errorFile << errMsg;
            logFile << errMsg;
        }

        // as have got the parameters, just store them inside the symbol Info
        SymbolInfo *s = lookup(ID);
        // check param Number mismatch error
        vector<string> params = s->getParamTypes();
        if (checkParamNumbers && params.size() != paramTypes.size())
        {
            errMsg = "Error at line " + to_string(ctx->getStart()->getLine()) + ": Total number of arguments mismatch with declaration in function " + ID + "\n\n";
            errorFile << errMsg;
            logFile << errMsg;
            errorCnt++;
        }
        s->setParamTypes(paramTypes);

        string RPAREN = ctx->RPAREN()->getText();
        // handle errors where param types are not given
        for (int i = 0; i < paramTypes.size(); i++)
        {
            if (paramTypes[i] == "#")
            {
                errMsg = "Error at line " + to_string(ctx->getStart()->getLine()) + ": " + to_string(i + 1) + "th parameter's name not given in function definition of var\n\n";
                errorFile << errMsg;
                logFile << errMsg;
                errorCnt++;
            }
        }
        string compound_statement = any_cast<string>(visit(ctx->compound_statement()));
        string matchStr = type_specifier + " " + ID + LPAREN + parameter_list + RPAREN + compound_statement + "\n";
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": func_definition : type_specifier ID LPAREN parameter_list RPAREN compound_statement\n\n";
        message = message + matchStr + "\n\n";
        writeIntoLogFile(message);
        return matchStr;
    }

    any visitFuncDefNoParam(CSubsetParser::FuncDefNoParamContext *ctx) override
    {
        string type_specifier = any_cast<string>(visit(ctx->type_specifier()));
        string ID = ctx->ID()->getText();

        string errMsg = "";
        bool checkParamNumbers = false; // this declaration has potential for causing param number error
        if (!table->insert(ID, "ID", type_specifier))
        {
            // check whether it is previously defined or not
            unsigned int bucket;
            int position, uniqueNumber;
            string scopeNo;
            SymbolInfo *s = table->lookUp2(ID, bucket, position, uniqueNumber, scopeNo);
            if (s->getIsDefined())
            {
                errMsg = "Error at line " + to_string(ctx->getStart()->getLine()) + ": Multiple declaration of " + ID + "\n\n";
                errorCnt++;
            }
            // now handle return type mismatch between definition and declaration
            if (!s->getIsDefined() && s->getDtype() != type_specifier)
            {
                errMsg = "Error at line " + to_string(ctx->getStart()->getLine()) + ": Return type mismatch with function declaration in function " + ID + "\n\n";
                errorCnt++;
            }
            // handle argument number mismatch
            if (!s->getIsDefined())
            {
                vector<string> params = s->getParamTypes();
                checkParamNumbers = true;
            }
            s->setIsDefined(true);
            errorFile << errMsg;
            logFile << errMsg;
        }

        string LPAREN = ctx->LPAREN()->getText();
        // create a new scope
        table->enterScope();
        // as have got the parameters, just store them inside the symbol Info
        SymbolInfo *s = lookup(ID);
        // check param Number mismatch error
        vector<string> params = s->getParamTypes();
        if (checkParamNumbers && params.size() != 0) // cause this definition doesn't have parameters
        {
            errMsg = "Error at line " + to_string(ctx->getStart()->getLine()) + ": Total number of arguments mismatch with declaration in function " + ID + "\n\n";
            errorFile << errMsg;
            logFile << errMsg;
            errorCnt++;
        }

        string RPAREN = ctx->RPAREN()->getText();
        string compound_statement = any_cast<string>(visit(ctx->compound_statement()));
        string matchStr = type_specifier + " " + ID + LPAREN + RPAREN + compound_statement + "\n";
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": func_definition : type_specifier ID LPAREN RPAREN compound_statement\n\n";
        message = message + matchStr + "\n\n";
        writeIntoLogFile(message);
        return matchStr;
    }

    any visitUniParamDef(CSubsetParser::UniParamDefContext *ctx) override
    {
        string type_specifier = any_cast<string>(visit(ctx->type_specifier()));
        // store the type
        paramTypes.push_back(type_specifier);

        string ID = ctx->ID()->getText();
        if (!table->insert(ID, "ID", exprTypes.get(ctx->type_specifier())))
        {
            string errMsg = "Error at line " + to_string(ctx->getStart()->getLine()) + ": Multiple declaration of " + ID + " in parameter\n\n ";
            errorFile << errMsg;
            logFile << errMsg;
            errorCnt++;
        }
        string matchStr = type_specifier + " " + ID;
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": parameter_list : type_specifier ID\n\n";
        message = message + matchStr + "\n\n";
        writeIntoLogFile(message);
        return matchStr;
    }

    any visitMultiParamDec(CSubsetParser::MultiParamDecContext *ctx) override
    {
        string parameter_list = any_cast<string>(visit(ctx->parameter_list()));
        string COMMA = ctx->COMMA()->getText();
        string type_specifier = any_cast<string>(visit(ctx->type_specifier()));
        // store the type
        paramTypes.push_back(type_specifier);

        string matchStr = parameter_list + COMMA + type_specifier;
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": parameter_list : parameter_list COMMA type_specifier\n\n";
        message = message + matchStr + "\n\n";
        writeIntoLogFile(message);
        return matchStr;
    }

    any visitMultiParamDef(CSubsetParser::MultiParamDefContext *ctx) override
    {
        string parameter_list = any_cast<string>(visit(ctx->parameter_list()));
        string COMMA = ctx->COMMA()->getText();
        string type_specifier = any_cast<string>(visit(ctx->type_specifier()));
        // store the type
        paramTypes.push_back(type_specifier);

        string ID = ctx->ID()->getText();
        if (!table->insert(ID, "ID", exprTypes.get(ctx->type_specifier())))
        {
            string errMsg = "Error at line " + to_string(ctx->getStart()->getLine()) + ": Multiple declaration of " + ID + " in parameter\n\n";
            errorFile << errMsg;
            logFile << errMsg;
            errorCnt++;
        }
        string matchStr = parameter_list + COMMA + type_specifier + " " + ID;
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": parameter_list : parameter_list COMMA type_specifier ID\n\n";
        message = message + matchStr + "\n\n";
        writeIntoLogFile(message);
        return matchStr;
    }

    any visitUniParamDec(CSubsetParser::UniParamDecContext *ctx) override
    {
        string type_specifier = any_cast<string>(visit(ctx->type_specifier()));
        // store the type
        paramTypes.push_back(type_specifier);

        string matchStr = type_specifier;
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": parameter_list : type_specifier\n\n";
        message = message + matchStr + "\n\n";
        writeIntoLogFile(message);
        return matchStr;
    }

    any visitCmpd_stmtStmts(CSubsetParser::Cmpd_stmtStmtsContext *ctx) override
    {
        string LCURL = ctx->LCURL()->getText();
        string statements = any_cast<string>(visit(ctx->statements()));
        string RCURL = ctx->RCURL()->getText();
        string matchStr = LCURL + "\n" + statements + "\n" + RCURL;
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": compound_statement : LCURL statements RCURL\n\n";
        message = message + matchStr + "\n\n";
        writeIntoLogFile(message);
        table->printAllScopes2(logFile);
        logFile << "\n\n";
        table->exitScope();
        return matchStr;
    }

    any visitCmpd_stmtParen(CSubsetParser::Cmpd_stmtParenContext *ctx) override
    {
        string LCURL = ctx->LCURL()->getText();
        string RCURL = ctx->RCURL()->getText();
        string matchStr = LCURL + RCURL;
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": compound_statement : LCURL RCURL\n\n";
        message = message + matchStr + "\n";
        writeIntoLogFile(message);
        table->printAllScopes2(logFile);
        logFile << "\n\n";
        table->exitScope();
        return matchStr;
    }

    any visitVar_declaration(CSubsetParser::Var_declarationContext *ctx) override
    {
        string type_specifier = any_cast<string>(visit(ctx->type_specifier()));
        // store the type of the declaration list into a global variable
        decLstType = type_specifier;
        string declaration_list = any_cast<string>(visit(ctx->declaration_list()));
        string SEMICOLON = ctx->SEMICOLON()->getText();
        string matchStr = type_specifier + " " + declaration_list + SEMICOLON;

        // variable can't be void
        if (equalsIgnoreCase(type_specifier, "void"))
        {
            string errMsg = "Error at line " + to_string(ctx->getStart()->getLine()) + ": Variable type cannot be void\n\n";
            errorFile << errMsg;
            logFile << errMsg;
            errorCnt++;
        }

        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": var_declaration : type_specifier declaration_list SEMICOLON\n\n";
        message = message + matchStr + "\n\n";
        writeIntoLogFile(message);

        return matchStr;
    }

    any visitTypeInt(CSubsetParser::TypeIntContext *ctx) override
    {
        string matchStr = ctx->INT()->getText();
        exprTypes.put(ctx, "INT");
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": type_specifier : INT\n\n";
        message = message + matchStr + "\n\n";
        writeIntoLogFile(message);

        return matchStr;
    }

    any visitTypeFloat(CSubsetParser::TypeFloatContext *ctx) override
    {
        string matchStr = ctx->FLOAT()->getText();
        exprTypes.put(ctx, "FLOAT");
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": type_specifier : FLOAT\n\n";
        message = message + matchStr + "\n\n";
        writeIntoLogFile(message);

        return matchStr;
    }

    any visitTypeVoid(CSubsetParser::TypeVoidContext *ctx) override
    {
        string matchStr = ctx->VOID()->getText();
        exprTypes.put(ctx, "VOID");
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": type_specifier : VOID\n\n";
        message = message + matchStr + "\n\n";
        writeIntoLogFile(message);

        return matchStr;
    }

    any visitDec_lstThird(CSubsetParser::Dec_lstThirdContext *ctx) override
    {
        string ID = ctx->ID()->getText();
        if (!equalsIgnoreCase(decLstType, "void") && !table->insert(ID, "ID", decLstType, true))
        {
            string errMsg = "Error at line " + to_string(ctx->getStart()->getLine()) + ": Multiple declaration of " + ID + "\n\n";
            errorFile << errMsg;
            logFile << errMsg;
            errorCnt++;
        }
        string LTHIRD = ctx->LTHIRD()->getText();
        string CONST_INT = ctx->CONST_INT()->getText();
        string RTHIRD = ctx->RTHIRD()->getText();
        string matchStr = ID + LTHIRD + CONST_INT + RTHIRD;
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": declaration_list : ID LTHIRD CONST_INT RTHIRD\n\n";
        message = message + matchStr + "\n\n";
        writeIntoLogFile(message);
        return matchStr;
    }

    any visitDec_lstCommaThird(CSubsetParser::Dec_lstCommaThirdContext *ctx) override
    {
        string declaration_list = any_cast<string>(visit(ctx->declaration_list()));
        string COMMA = ctx->COMMA()->getText();
        string ID = ctx->ID()->getText();
        if (!equalsIgnoreCase(decLstType, "void") && !table->insert(ID, "ID", decLstType, true))
        {
            string errMsg = "Error at line " + to_string(ctx->getStart()->getLine()) + ": Multiple declaration of " + ID + "\n\n";
            errorFile << errMsg;
            logFile << errMsg;
            errorCnt++;
        }
        string LTHIRD = ctx->LTHIRD()->getText();
        string CONST_INT = ctx->CONST_INT()->getText();
        string RTHIRD = ctx->RTHIRD()->getText();
        string matchStr = declaration_list + COMMA + ID + LTHIRD + CONST_INT + RTHIRD;
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": declaration_list : declaration_list COMMA ID LTHIRD CONST_INT RTHIRD\n\n";
        message = message + matchStr + "\n\n";
        writeIntoLogFile(message);
        return matchStr;
    }

    any visitDec_lstID(CSubsetParser::Dec_lstIDContext *ctx) override
    {
        string matchStr = ctx->ID()->getText();
        if (!equalsIgnoreCase(decLstType, "void") && !table->insert(matchStr, "ID", decLstType))
        {
            string errMsg = "Error at line " + to_string(ctx->getStart()->getLine()) + ": Multiple declaration of " + matchStr + "\n\n";
            errorFile << errMsg;
            logFile << errMsg;
            errorCnt++;
        }
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": declaration_list : ID\n\n";
        message = message + matchStr + "\n\n";
        writeIntoLogFile(message);

        return matchStr;
    }

    any visitDec_lstCommaID(CSubsetParser::Dec_lstCommaIDContext *ctx) override
    {
        string declaration_list = any_cast<string>(visit(ctx->declaration_list()));
        string COMMA = ctx->COMMA()->getText();
        string ID = ctx->ID()->getText();
        if (!equalsIgnoreCase(decLstType, "void") && !table->insert(ID, "ID", decLstType))
        {
            string errMsg = "Error at line " + to_string(ctx->getStart()->getLine()) + ": Multiple declaration of " + ID + "\n\n";
            errorFile << errMsg;
            logFile << errMsg;
            errorCnt++;
        }
        string matchStr = declaration_list + COMMA + ID;
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": declaration_list : declaration_list COMMA ID\n\n";
        message = message + matchStr + "\n\n";
        writeIntoLogFile(message);

        return matchStr;
    }

    any visitStmtsStmt(CSubsetParser::StmtsStmtContext *ctx) override
    {
        string matchStr = any_cast<string>(visit(ctx->statement()));
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": statements : statement\n\n";
        message = message + matchStr + "\n\n\n";
        writeIntoLogFile(message);

        return matchStr;
    }

    any visitStmtsStmtsStmt(CSubsetParser::StmtsStmtsStmtContext *ctx) override
    {
        string statements = any_cast<string>(visit(ctx->statements()));
        string statement = any_cast<string>(visit(ctx->statement()));
        string matchStr = statements + "\n" + statement;
        string message = "Line " + to_string(ctx->statement()->getStart()->getLine()) + ": statements : statements statement\n\n";
        message = message + matchStr + "\n\n\n";
        writeIntoLogFile(message);

        return matchStr;
    }

    any visitStmtVar_dec(CSubsetParser::StmtVar_decContext *ctx) override
    {
        string matchStr = any_cast<string>(visit(ctx->var_declaration()));
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": statement : var_declaration\n\n";
        message = message + matchStr + "\n\n\n";
        writeIntoLogFile(message);
        return matchStr;
    }

    any visitStmtExpr_stmt(CSubsetParser::StmtExpr_stmtContext *ctx) override
    {
        string matchStr = any_cast<string>(visit(ctx->expression_statement()));
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": statement : expression_statement\n\n";
        message = message + matchStr + "\n\n\n";
        writeIntoLogFile(message);

        return matchStr;
    }

    any visitStmtIfElse(CSubsetParser::StmtIfElseContext *ctx) override
    {
        string IF = ctx->IF()->getText();
        string LPAREN = ctx->LPAREN()->getText();
        string expression = any_cast<string>(visit(ctx->expression()));
        string RPAREN = ctx->RPAREN()->getText();
        string statement1 = any_cast<string>(visit(ctx->statement(0)));
        string ELSE = ctx->ELSE()->getText();
        string statement2 = any_cast<string>(visit(ctx->statement(1)));
        string matchStr = IF + " " + LPAREN + expression + RPAREN + statement1 + "\n" + ELSE + "\n" + statement2;
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": statement : IF LPAREN expression RPAREN statement ELSE statement\n\n";
        message = message + matchStr + "\n\n\n";
        writeIntoLogFile(message);
        return matchStr;
    }

    any visitStmtWhile(CSubsetParser::StmtWhileContext *ctx) override
    {
        string WHILE = ctx->WHILE()->getText();
        string LPAREN = ctx->LPAREN()->getText();
        string expression = any_cast<string>(visit(ctx->expression()));
        string RPAREN = ctx->RPAREN()->getText();
        string statement = any_cast<string>(visit(ctx->statement()));
        string matchStr = WHILE + " " + LPAREN + expression + RPAREN + statement;
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": statement : WHILE LPAREN expression RPAREN statement\n\n";
        message = message + matchStr + "\n\n\n";
        writeIntoLogFile(message);
        return matchStr;
    }

    any visitStmtPrint(CSubsetParser::StmtPrintContext *ctx) override
    {
        string PRINTLN = ctx->PRINTLN()->getText();
        string LPAREN = ctx->LPAREN()->getText();
        string ID = ctx->ID()->getText();
        string RPAREN = ctx->RPAREN()->getText();
        string SEMICOLON = ctx->SEMICOLON()->getText();
        string matchStr = PRINTLN + LPAREN + ID + RPAREN + SEMICOLON;

        // undeclared variable
        SymbolInfo *s = lookup(ID);
        if (s == nullptr)
        {
            string errMsg = "Error at line " + to_string(ctx->getStart()->getLine()) + ": Undeclared variable " + ID + "\n\n";
            errorFile << errMsg;
            logFile << errMsg;
            errorCnt++;
        }

        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": statement : PRINTLN LPAREN ID RPAREN SEMICOLON\n\n";
        message = message + matchStr + "\n\n\n";
        writeIntoLogFile(message);
        return matchStr;
    }

    any visitStmtReturn(CSubsetParser::StmtReturnContext *ctx) override
    {
        string RETURN = ctx->RETURN()->getText();
        string expression = any_cast<string>(visit(ctx->expression()));
        string SEMICOLON = ctx->SEMICOLON()->getText();
        string matchStr = RETURN + " " + expression + SEMICOLON;
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": statement : RETURN expression SEMICOLON\n\n";
        message = message + matchStr + "\n\n\n";
        writeIntoLogFile(message);

        return matchStr;
    }

    any visitExpr_stmtSemicolon(CSubsetParser::Expr_stmtSemicolonContext *ctx) override
    {
        string matchStr = ctx->SEMICOLON()->getText();
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": expression_statement : SEMICOLON\n\n";
        message = message + matchStr + "\n\n";
        writeIntoLogFile(message);
        return matchStr;
    }

    any visitExpr_stmtExprSemicolon(CSubsetParser::Expr_stmtExprSemicolonContext *ctx) override
    {
        string expression = any_cast<string>(visit(ctx->expression()));
        string SEMICOLON = ctx->SEMICOLON()->getText();
        string matchStr = expression + SEMICOLON;
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": expression_statement : expression SEMICOLON\n\n";
        message = message + matchStr + "\n\n";
        writeIntoLogFile(message);

        return matchStr;
    }

    any visitVarId(CSubsetParser::VarIdContext *ctx) override
    {
        string matchStr = ctx->ID()->getText();

        // this rule is not suitable for fetching array types. so check type mismatch for array here
        unsigned int bucket;
        int position, uniqueNumber;
        string scopeNo;
        SymbolInfo *s = table->lookUp2(matchStr, bucket, position, uniqueNumber, scopeNo);
        if (s != nullptr && s->getIsArray())
        {
            string errMsg = "Error at line " + to_string(ctx->getStart()->getLine()) + ": Type mismatch, " + matchStr + " is an array\n\n";
            errorFile << errMsg;
            logFile << errMsg;
            errorCnt++;
        }
        // also handle undeclared variable error
        // handle undeclared variable
        else if (s == nullptr)
        {
            string errMsg = "Error at line " + to_string(ctx->getStart()->getLine()) + ": Undeclared variable " + matchStr + "\n\n";
            errorFile << errMsg;
            logFile << errMsg;
            errorCnt++;
        }

        // get the type and push it in the parse tree
        if (s)
        {
            string dtype = s->getDtype();
            exprTypes.put(ctx, dtype);
        }
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": variable : ID\n\n";
        message = message + matchStr + "\n\n";
        writeIntoLogFile(message);

        return matchStr;
    }

    any visitVarThird(CSubsetParser::VarThirdContext *ctx) override
    {
        string ID = ctx->ID()->getText();
        string LTHIRD = ctx->LTHIRD()->getText();
        string expression = any_cast<string>(visit(ctx->expression()));
        string RTHIRD = ctx->RTHIRD()->getText();
        string exprType = exprTypes.get(ctx->expression());
        if (exprType != "INT")
        {
            string errMsg = "Error at line " + to_string(ctx->getStart()->getLine()) + ": Expression inside third brackets not an integer\n\n";
            errorFile << errMsg;
            logFile << errMsg;
            errorCnt++;
        }
        // not an array
        unsigned int bucket;
        int position, uniqueNumber;
        string scopeNo;
        SymbolInfo *s = table->lookUp2(ID, bucket, position, uniqueNumber, scopeNo);
        if (s && !s->getIsArray())
        {
            string errMsg = "Error at line " + to_string(ctx->getStart()->getLine()) + ": " + ID + " not an array\n\n";
            errorFile << errMsg;
            logFile << errMsg;
            errorCnt++;
        }

        // put the type in the parse tree
        if (s)
        {
            string dtype = s->getDtype();
            exprTypes.put(ctx, dtype);
        }
        string matchStr = ID + LTHIRD + expression + RTHIRD;
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": variable : ID LTHIRD expression RTHIRD\n\n";
        message = message + matchStr + "\n\n";
        writeIntoLogFile(message);
        return matchStr;
    }

    any visitExprLogic(CSubsetParser::ExprLogicContext *ctx) override
    {
        string matchStr = any_cast<string>(visit(ctx->logic_expression()));
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": expression : logic expression\n\n";
        message = message + matchStr + "\n\n";
        writeIntoLogFile(message);

        // buuble up the type
        exprTypes.put(ctx, exprTypes.get(ctx->logic_expression()));
        return matchStr;
    }

    any visitExprVar(CSubsetParser::ExprVarContext *ctx) override
    {
        string variable = any_cast<string>(visit(ctx->variable()));
        string ASSIGNOP = ctx->ASSIGNOP()->getText();
        string logic_expression = any_cast<string>(visit(ctx->logic_expression()));
        string matchStr = variable + ASSIGNOP + logic_expression;

        // compare the data types
        string ID = ctx->variable()->getStart()->getText();
        unsigned int bucket;
        int position, uniqueNumber;
        string scopeNo;
        SymbolInfo *s = table->lookUp2(ID, bucket, position, uniqueNumber, scopeNo);
        // handle the type mismatch error
        if (s != nullptr)
        {
            string varDtype = s->getDtype();
            string numDtype = exprTypes.get(ctx->logic_expression());
            if (varDtype == "int" && numDtype == "FLOAT")
            {
                string errMsg = "Error at line " + to_string(ctx->getStart()->getLine()) + ": Type Mismatch\n\n";
                errorFile << errMsg;
                logFile << errMsg;
                errorCnt++;
            }
        }

        // handle void function in expression
        string exprType = exprTypes.get(ctx->logic_expression());
        if (equalsIgnoreCase(exprType, "void"))
        {
            string errMsg = "Error at line " + to_string(ctx->getStart()->getLine()) + ": Void function used in expression\n\n";
            errorFile << errMsg;
            logFile << errMsg;
            errorCnt++;
        }
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": expression : variable ASSIGNOP logic_expression\n\n";
        message = message + matchStr + "\n\n";
        writeIntoLogFile(message);

        return matchStr;
    }

    any visitLogciRel(CSubsetParser::LogciRelContext *ctx) override
    {
        string matchStr = any_cast<string>(visit(ctx->rel_expression()));
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": logic_expression : rel_expression\n\n";
        message = message + matchStr + "\n\n";
        writeIntoLogFile(message);

        // buuble up the type
        exprTypes.put(ctx, exprTypes.get(ctx->rel_expression()));
        return matchStr;
    }

    any visitLogicRelRel(CSubsetParser::LogicRelRelContext *ctx) override
    {
        string rel_expression1 = any_cast<string>(visit(ctx->rel_expression(0)));
        string LOGICOP = ctx->LOGICOP()->getText();
        string rel_expression2 = any_cast<string>(visit(ctx->rel_expression(1)));
        string matchStr = rel_expression1 + LOGICOP + rel_expression2;
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": logic_expression : rel_expression LOGICOP rel_expression\n\n";
        message = message + matchStr + "\n\n";
        writeIntoLogFile(message);
        return matchStr;
    }

    any visitRelSimple(CSubsetParser::RelSimpleContext *ctx) override
    {
        string matchStr = any_cast<string>(visit(ctx->simple_expression()));
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": rel_expression : simple_expression\n\n";
        message = message + matchStr + "\n\n";
        writeIntoLogFile(message);

        // buuble up the type
        exprTypes.put(ctx, exprTypes.get(ctx->simple_expression()));
        return matchStr;
    }

    any visitRelSimpleSimple(CSubsetParser::RelSimpleSimpleContext *ctx) override
    {
        string simple_expression1 = any_cast<string>(visit(ctx->simple_expression(0)));
        string RELOP = ctx->RELOP()->getText();
        string simple_expression2 = any_cast<string>(visit(ctx->simple_expression(1)));
        string matchStr = simple_expression1 + RELOP + simple_expression2;
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": rel_expression : simple_expression RELOP simple_expression\n\n";
        message = message + matchStr + "\n\n";
        writeIntoLogFile(message);
        return matchStr;
    }

    any visitSimpleTerm(CSubsetParser::SimpleTermContext *ctx) override
    {
        string matchStr = any_cast<string>(visit(ctx->term()));
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": simple_expression : term\n\n";
        message = message + matchStr + "\n\n";
        writeIntoLogFile(message);

        // buuble up the type
        exprTypes.put(ctx, exprTypes.get(ctx->term()));
        return matchStr;
    }

    any visitSimpleSimpleTerm(CSubsetParser::SimpleSimpleTermContext *ctx) override
    {
        string simple_expression = any_cast<string>(visit(ctx->simple_expression()));
        string ADDOP = ctx->ADDOP()->getText();
        string term = any_cast<string>(visit(ctx->term()));
        string matchStr = simple_expression + ADDOP + term;
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": simple_expression : simple_expression ADDOP term\n\n";
        message = message + matchStr + "\n\n";
        writeIntoLogFile(message);

        return matchStr;
    }

    any visitTermUnary(CSubsetParser::TermUnaryContext *ctx) override
    {
        string matchStr = any_cast<string>(visit(ctx->unary_expression()));
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": term : unary_expression\n\n";
        message = message + matchStr + "\n\n";
        writeIntoLogFile(message);

        // bubble up the term
        exprTypes.put(ctx, exprTypes.get(ctx->unary_expression()));
        return matchStr;
    }

    any visitTermTerm(CSubsetParser::TermTermContext *ctx) override
    {
        string term = any_cast<string>(visit(ctx->term()));
        string MULOP = ctx->MULOP()->getText();
        string unary_expression = any_cast<string>(visit(ctx->unary_expression()));
        string matchStr = term + MULOP + unary_expression;

        // handle non negative modular operand error
        string operand1Type = exprTypes.get(ctx->term());
        string operand2Type = exprTypes.get(ctx->unary_expression());
        // non integer operand
        if (MULOP == "%" && (operand1Type != "INT" || operand2Type != "INT"))
        {
            string errMsg = "Error at line " + to_string(ctx->getStart()->getLine()) + ": Non-Integer operand on modulus operator\n\n";
            errorFile << errMsg;
            logFile << errMsg;
            errorCnt++;
        }

        // mod by zero
        if (MULOP == "%" && unary_expression == "0")
        {
            string errMsg = "Error at line " + to_string(ctx->getStart()->getLine()) + ": Modulus by Zero\n\n";
            errorFile << errMsg;
            logFile << errMsg;
            errorCnt++;
        }

        // handle void function in expression
        string unaryExprType = exprTypes.get(ctx->unary_expression());
        if (equalsIgnoreCase(unaryExprType, "void"))
        {
            string errMsg = "Error at line " + to_string(ctx->getStart()->getLine()) + ": Void function used in expression\n\n";
            errorFile << errMsg;
            logFile << errMsg;
            errorCnt++;
        }

        // put the dtype of this term
        string dtype1 = exprTypes.get(ctx->term());
        string dtype2 = exprTypes.get(ctx->unary_expression());

        if (MULOP != "%" && (equalsIgnoreCase(dtype1, "float") || equalsIgnoreCase(dtype2, "float")))
        {
            exprTypes.put(ctx, "FLOAT"); // assume % only return integer
        }
        else
        {
            exprTypes.put(ctx, "INT");
        }

        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": term : term MULOP unary_expression\n\n";
        message = message + matchStr + "\n\n";
        writeIntoLogFile(message);

        return matchStr;
    }

    any visitUnaryAdd(CSubsetParser::UnaryAddContext *ctx) override
    {
        string ADDOP = ctx->ADDOP()->getText();
        string unary_expression = any_cast<string>(visit(ctx->unary_expression()));
        string matchStr = ADDOP + unary_expression;
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": unary_expression : ADDOP unary_expression\n\n";
        message = message + matchStr + "\n\n";
        writeIntoLogFile(message);
        return matchStr;
    }

    any visitUnaryNot(CSubsetParser::UnaryNotContext *ctx) override
    {
        string NOT = ctx->NOT()->getText();
        string unary_expression = any_cast<string>(visit(ctx->unary_expression()));
        string matchStr = NOT + unary_expression;
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": unary_expression : NOT unary expression\n\n";
        message = message + matchStr + "\n\n";
        writeIntoLogFile(message);
        return matchStr;
    }

    any visitUnaryFactor(CSubsetParser::UnaryFactorContext *ctx) override
    {
        string matchStr = any_cast<string>(visit(ctx->factor()));
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": unary_expression : factor\n\n";
        message = message + matchStr + "\n\n";
        writeIntoLogFile(message);

        // buuble up the type
        exprTypes.put(ctx, exprTypes.get(ctx->factor()));
        return matchStr;
    }

    any visitFactorVar(CSubsetParser::FactorVarContext *ctx) override
    {
        string matchStr = any_cast<string>(visit(ctx->variable()));
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": factor : variable\n\n";
        message = message + matchStr + "\n\n";
        writeIntoLogFile(message);

        // buuble up the type
        exprTypes.put(ctx, exprTypes.get(ctx->variable()));
        return matchStr;
    }

    any visitFactorId(CSubsetParser::FactorIdContext *ctx) override
    {
        string ID = ctx->ID()->getText();
        string LPAREN = ctx->LPAREN()->getText();
        argTypes.resize(0);
        string argument_list = any_cast<string>(visit(ctx->argument_list()));
        string RPAREN = ctx->RPAREN()->getText();
        string matchStr = ID + LPAREN + argument_list + RPAREN;

        // undeclared function
        SymbolInfo *s = lookup(ID);
        if (!s)
        {
            string errMsg = "Error at line " + to_string(ctx->getStart()->getLine()) + ": Undeclared function " + ID + "\n\n";
            errorFile << errMsg;
            logFile << errMsg;
            errorCnt++;
        }

        // argument mismatch
        if (s)
        {
            vector<string> params = s->getParamTypes();
            if (params.size() != argTypes.size())
            {
                string errMsg = "Error at line " + to_string(ctx->getStart()->getLine()) + ": Total number of arguments mismatch in function " + ID + "\n\n";
                errorFile << errMsg;
                logFile << errMsg;
                errorCnt++;
            }
            // argument type mismatch
            else
            {
                int i;
                for (i = 0; i < params.size(); i++)
                {
                    if (!(equalsIgnoreCase(params[i], "float") && equalsIgnoreCase(argTypes[i], "int")) && !equalsIgnoreCase(params[i], argTypes[i]))
                    {
                        string errMsg = "Error at line " + to_string(ctx->getStart()->getLine()) + ": " + to_string(i + 1) + "th argument mismatch in function " + ID + "\n\n";
                        errorFile << errMsg;
                        logFile << errMsg;
                        errorCnt++;
                        break;
                    }
                }
            }
        }

        // put the dtype into the tree
        if (s)
            exprTypes.put(ctx, s->getDtype());

        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": factor : ID LPAREN argument_list RPAREN\n\n";
        message = message + matchStr + "\n\n";
        writeIntoLogFile(message);

        return matchStr;
    }

    any visitFactorParen(CSubsetParser::FactorParenContext *ctx) override
    {
        string LPAREN = ctx->LPAREN()->getText();
        string expression = any_cast<string>(visit(ctx->expression()));
        string RPAREN = ctx->RPAREN()->getText();
        string matchStr = LPAREN + expression + RPAREN;
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": factor : LPAREN expression RPAREN\n\n";
        message = message + matchStr + "\n\n";
        writeIntoLogFile(message);
        return matchStr;
    }

    any visitFactorInt(CSubsetParser::FactorIntContext *ctx) override
    {
        string matchStr = ctx->CONST_INT()->getText();

        exprTypes.put(ctx, "INT");
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": factor : CONST_INT\n\n";
        message = message + matchStr + "\n\n";
        writeIntoLogFile(message);

        return matchStr;
    }

    any visitFactorFloat(CSubsetParser::FactorFloatContext *ctx) override
    {
        float val = stof(ctx->CONST_FLOAT()->getText());
        stringstream stream;
        stream << fixed << setprecision(2) << val;
        string matchStr = stream.str();
        exprTypes.put(ctx, "FLOAT");

        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": factor : CONST_FLOAT\n\n";
        message = message + matchStr + "\n\n";
        writeIntoLogFile(message);
        return matchStr;
    }

    any visitFactorIncop(CSubsetParser::FactorIncopContext *ctx) override
    {
        string variable = any_cast<string>(visit(ctx->variable()));
        string INCOP = ctx->INCOP()->getText();
        string matchStr = variable + INCOP;
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": factor : variable INCOP\n\n";
        message = message + matchStr + "\n\n";
        writeIntoLogFile(message);
        return matchStr;
    }

    any visitFactorDecop(CSubsetParser::FactorDecopContext *ctx) override
    {
        string variable = any_cast<string>(visit(ctx->variable()));
        string DECOP = ctx->DECOP()->getText();
        string matchStr = variable + DECOP;
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": factor : variable DECOP\n\n";
        message = message + matchStr + "\n\n";
        writeIntoLogFile(message);
        return matchStr;
    }

    any visitArgument_list(CSubsetParser::Argument_listContext *ctx) override
    {
        if (ctx->arguments())
        {
            string matchStr = any_cast<string>(visit(ctx->arguments()));
            string message = "Line " + to_string(ctx->getStart()->getLine()) + ": argument_list : arguments\n\n";
            message = message + matchStr + "\n\n";
            writeIntoLogFile(message);
            return matchStr;
        }
        return string("");
    }

    any visitArgsArgs(CSubsetParser::ArgsArgsContext *ctx) override
    {
        string arguments = any_cast<string>(visit(ctx->arguments()));
        string COMMA = ctx->COMMA()->getText();
        string logic_expression = any_cast<string>(visit(ctx->logic_expression()));
        // push the dtype of logic expression
        argTypes.push_back(exprTypes.get(ctx->logic_expression()));

        string matchStr = arguments + COMMA + logic_expression;
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": arguments : arguments COMMA logic_expression\n\n";
        message = message + matchStr + "\n\n";
        writeIntoLogFile(message);
        return matchStr;
    }

    any visitArgsLogic(CSubsetParser::ArgsLogicContext *ctx) override
    {
        string matchStr = any_cast<string>(visit(ctx->logic_expression()));
        // push the dtype of logic expression
        argTypes.push_back(exprTypes.get(ctx->logic_expression()));

        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": arguments : logic_expression\n\n";
        message = message + matchStr + "\n\n";
        writeIntoLogFile(message);
        return matchStr;
    }

    any visitStmtIf(CSubsetParser::StmtIfContext *ctx) override
    {
        string IF = ctx->IF()->getText();
        string LPAREN = ctx->LPAREN()->getText();
        string expression = any_cast<string>(visit(ctx->expression()));
        string RPAREN = ctx->RPAREN()->getText();
        string statement = any_cast<string>(visit(ctx->statement()));

        // Added a space after IF to match target log output "if (c<a[0]){"
        string matchStr = IF + " " + LPAREN + expression + RPAREN + statement;
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": statement : IF LPAREN expression RPAREN statement\n\n";
        message = message + matchStr + "\n\n\n";
        writeIntoLogFile(message);

        return matchStr;
    }

    any visitStmtFor(CSubsetParser::StmtForContext *ctx) override
    {
        string FOR = ctx->FOR()->getText();
        string LPAREN = ctx->LPAREN()->getText();
        // A FOR loop has two expression statements and one normal expression inside the parameters
        string expr_stmt1 = any_cast<string>(visit(ctx->expression_statement(0)));
        string expr_stmt2 = any_cast<string>(visit(ctx->expression_statement(1)));
        string expression = any_cast<string>(visit(ctx->expression()));
        string RPAREN = ctx->RPAREN()->getText();
        string statement = any_cast<string>(visit(ctx->statement()));

        string matchStr = FOR + LPAREN + expr_stmt1 + expr_stmt2 + expression + RPAREN + statement;
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": statement : FOR LPAREN expression_statement expression_statement expression RPAREN statement\n\n";
        message = message + matchStr + "\n\n\n";
        writeIntoLogFile(message);

        return matchStr;
    }

    any visitStmtCmpd_stmt(CSubsetParser::StmtCmpd_stmtContext *ctx) override
    {
        // this rule is only applied when one is creating a new non function block
        // so create a scope here
        table->enterScope();
        string matchStr = any_cast<string>(visit(ctx->compound_statement()));
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": statement : compound_statement\n\n";
        message = message + matchStr + "\n\n\n";
        writeIntoLogFile(message);

        return matchStr;
    }

    // added rules for syntax analysis
    any visitUniParamAddOp(CSubsetParser::UniParamAddOpContext *ctx) override
    {
        string type_specifier = any_cast<string>(visit(ctx->type_specifier()));
        string ADDOP = ctx->ADDOP()->getText();

        string matchStr = type_specifier;
        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": parameter_list : type_specifier\n\n" + matchStr + "\n\n";
        writeIntoLogFile(message);

        string errMsg1 = "Error at line " + to_string(ctx->getStart()->getLine()) + ": syntax error, unexpected token(s) '" + ADDOP + "' before ')'\n\n";

        errorFile << errMsg1;
        logFile << errMsg1;
        errorCnt++;

        // In the parameter list, just push # as type specifier
        paramTypes.push_back("#");

        return matchStr;
    }

    any visitSimpleSimpleAdd(CSubsetParser::SimpleSimpleAddContext *ctx) override
    {
        string simple_expression = any_cast<string>(visit(ctx->simple_expression()));
        string ADDOP = ctx->ADDOP()->getText();
        string ASSIGNOP = ctx->ASSIGNOP()->getText();
        string errMsg = "Error at line " + to_string(ctx->getStart()->getLine()) + ": syntax error, invalid operand '" + ASSIGNOP + "' after '" + ADDOP + "'\n\n";
        errorFile << errMsg;
        logFile << errMsg;
        errorCnt++;

        return simple_expression;
    }

    any visitExpr_stmtExpr(CSubsetParser::Expr_stmtExprContext *ctx) override
    {
        string expression = any_cast<string>(visit(ctx->expression()));

        string errMsg = "Error at line " + to_string(ctx->getStart()->getLine()) + ": syntax error, missing ';' after expression '" + expression + "'\n\n";
        errorFile << errMsg;
        logFile << errMsg;
        errorCnt++;

        string message = "Line " + to_string(ctx->getStart()->getLine()) + ": expression_statement : expression (missing SEMICOLON)\n\n";
        message = message + expression + "\n\n";
        writeIntoLogFile(message);

        return expression;
    }
    any visitDec_lstIDAddOpID(CSubsetParser::Dec_lstIDAddOpIDContext *ctx) override
    {
        string ID1 = ctx->ID(0)->getText();

        // push only the first valid ID
        table->insert(ID1, "ID", decLstType);

        logFile << "Line " << to_string(ctx->getStart()->getLine()) << ": declaration_list : ID\n\n"
                << ID1 << "\n\n";

        string unexpectedTokens = ctx->ADDOP()->getText() + " " + ctx->ID(1)->getText();

        string errMsg = "Error at line " + to_string(ctx->getStart()->getLine()) + ": syntax error, unexpected token(s) '" + unexpectedTokens + "' in declaration list\n\n";

        errorCnt++;
        errorFile << errMsg;
        logFile << errMsg;

        return ID1;
    }
};
