// #pragma once

// #include "CSubsetBaseVisitor.h"
// #include <fstream>
// #include <iostream>
// #include <sstream>
// #include "headers/2205014_symbol_table.hpp"
// #include <iomanip>

// using namespace std;

// extern ofstream logFile;
// extern ofstream errorFile;
// extern SymbolTable *table;

// void writeIntoLogFile(const std::string &message)
// {
//     if (!logFile.is_open())
//     {
//         logFile.open("logFile.txt", std::ios::app);
//         if (!logFile)
//         {
//             std::cerr << "Error opening logFile.txt" << std::endl;
//             return;
//         }
//     }
//     logFile << message;
//     logFile.flush();
// }

// void writeIntoErrorFile(const std::string &message)
// {
//     if (!errorFile.is_open())
//     {
//         errorFile.open("errorFile.txt", std::ios::app);
//         if (!errorFile)
//         {
//             std::cerr << "Error opening errorFile.txt" << std::endl;
//             return;
//         }
//     }
//     errorFile << message;
//     errorFile.flush();
// }

// class CSubset : public CSubsetVisitor
// {
//     int errorCnt = 0;

// public:
//     any visitStart(CSubsetParser::StartContext *ctx) override
//     {
//         any returnVal = visit(ctx->program());
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": start : program\n\n";
//         writeIntoLogFile(message);
//         table->printAllScopes2(logFile);
//         table->exitScope();
//         logFile << "\n\n\n"
//                 << "Total lines: " << ctx->getStop()->getLine();
//         logFile << "\n"
//                 << "Total errors: " << 0;
//         return returnVal;
//     }

//     any visitProgProgUnit(CSubsetParser::ProgProgUnitContext *ctx) override
//     {
//         string program = any_cast<string>(visit(ctx->program()));
//         string unit = any_cast<string>(visit(ctx->unit()));
//         string matchStr = program + "\n" + unit;
//         string message = "Line " + to_string(ctx->unit()->getStart()->getLine()) + ": program : program unit\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);
//         return matchStr;
//     }

//     any visitProgUnit(CSubsetParser::ProgUnitContext *ctx) override
//     {
//         string matchStr = any_cast<string>(visit(ctx->unit()));
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": program : unit\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);
//         return matchStr;
//     }

//     any visitUnitVarDec(CSubsetParser::UnitVarDecContext *ctx) override
//     {
//         string matchStr = any_cast<string>(visit(ctx->var_declaration()));
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": unit : var_declaration\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);
//         return matchStr;
//     }

//     any visitUnitFuncDec(CSubsetParser::UnitFuncDecContext *ctx) override
//     {
//         string matchStr = any_cast<string>(visit(ctx->func_declaration()));
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": unit : func_declaration\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);
//         return matchStr;
//     }

//     any visitUnitFuncDef(CSubsetParser::UnitFuncDefContext *ctx) override
//     {
//         string matchStr = any_cast<string>(visit(ctx->func_definition()));
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": unit : func_definition\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);
//         return matchStr;
//     }

//     any visitFuncDecParam(CSubsetParser::FuncDecParamContext *ctx) override
//     {
//         string type_specifier = any_cast<string>(visit(ctx->type_specifier()));
//         string ID = ctx->ID()->getText();
//         if (!table->insert(ID, "ID"))
//         {
//             errorFile << "Error at line " << to_string(ctx->getStart()->getLine()) << ": Multiple declaration of " << ID << "\n\n";
//             errorCnt++;
//         }
//         string LPAREN = ctx->LPAREN()->getText();
//         // create a new scope
//         table->enterScope();
//         string parameter_list = any_cast<string>(visit(ctx->parameter_list()));
//         string RPAREN = ctx->RPAREN()->getText();
//         string SEMICOLON = ctx->SEMICOLON()->getText();
//         string matchStr = type_specifier + " " + ID + LPAREN + parameter_list + RPAREN + SEMICOLON;
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": func_declaration : type_specifier ID LPAREN parameter_list RPAREN SEMICOLON\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);
//         // exit the scope but don't print it
//         table->exitScope();
//         return matchStr;
//     }

//     any visitFuncDecNoParam(CSubsetParser::FuncDecNoParamContext *ctx) override
//     {
//         string type_specifier = any_cast<string>(visit(ctx->type_specifier()));
//         string ID = ctx->ID()->getText();
//         if (!table->insert(ID, "ID"))
//         {
//             errorFile << "Error at line " << to_string(ctx->getStart()->getLine()) << ": Multiple declaration of " << ID << "\n\n";
//             errorCnt++;
//         }
//         string LPAREN = ctx->LPAREN()->getText();
//         // create a new scope
//         table->enterScope();
//         string RPAREN = ctx->RPAREN()->getText();
//         string SEMICOLON = ctx->SEMICOLON()->getText();
//         string matchStr = type_specifier + " " + ID + LPAREN + RPAREN + SEMICOLON;
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": func_declaration : type_specifier ID LPAREN RPAREN SEMICOLON\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);
//         // exit the scope but don't print it
//         table->exitScope();
//         return matchStr;
//     }

//     any visitFuncDefParam(CSubsetParser::FuncDefParamContext *ctx) override
//     {
//         string type_specifier = any_cast<string>(visit(ctx->type_specifier()));
//         string ID = ctx->ID()->getText();
//         if (!table->insert(ID, "ID"))
//         {
//             errorFile << "Error at line " << to_string(ctx->getStart()->getLine()) << ": Multiple declaration of " << ID << "\n\n";
//             errorCnt++;
//         }
//         string LPAREN = ctx->LPAREN()->getText();
//         // create a new scope
//         table->enterScope();
//         string parameter_list = any_cast<string>(visit(ctx->parameter_list()));
//         string RPAREN = ctx->RPAREN()->getText();
//         string compound_statement = any_cast<string>(visit(ctx->compound_statement()));
//         string matchStr = type_specifier + " " + ID + LPAREN + parameter_list + RPAREN + compound_statement;
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": func_definition : type_specifier ID LPAREN parameter_list RPAREN compound_statement\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);
//         return matchStr;
//     }

//     any visitFuncDefNoParam(CSubsetParser::FuncDefNoParamContext *ctx) override
//     {
//         string type_specifier = any_cast<string>(visit(ctx->type_specifier()));
//         string ID = ctx->ID()->getText();
//         if (!table->insert(ID, "ID"))
//         {
//             errorFile << "Error at line " << to_string(ctx->getStart()->getLine()) << ": Multiple declaration of " << ID << "\n\n";
//             errorCnt++;
//         }
//         string LPAREN = ctx->LPAREN()->getText();
//         // create a new scope
//         table->enterScope();
//         string RPAREN = ctx->RPAREN()->getText();
//         string compound_statement = any_cast<string>(visit(ctx->compound_statement()));
//         string matchStr = type_specifier + " " + ID + LPAREN + RPAREN + compound_statement;
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": func_definition : type_specifier ID LPAREN RPAREN compound_statement\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);
//         return matchStr;
//     }

//     any visitUniParamDef(CSubsetParser::UniParamDefContext *ctx) override
//     {
//         string type_specifier = any_cast<string>(visit(ctx->type_specifier()));
//         string ID = ctx->ID()->getText();
//         if (!table->insert(ID, "ID"))
//         {
//             errorFile << "Error at line " << to_string(ctx->getStart()->getLine()) << ": Multiple declaration of " << ID << "\n\n";
//             errorCnt++;
//         }
//         string matchStr = type_specifier + " " + ID;
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": parameter_list : type_specifier ID\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);
//         return matchStr;
//     }

//     any visitMultiParamDec(CSubsetParser::MultiParamDecContext *ctx) override
//     {
//         string parameter_list = any_cast<string>(visit(ctx->parameter_list()));
//         string COMMA = ctx->COMMA()->getText();
//         string type_specifier = any_cast<string>(visit(ctx->type_specifier()));
//         string matchStr = parameter_list + COMMA + type_specifier;
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": parameter_list : parameter_list COMMA type_specifier\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);
//         return matchStr;
//     }

//     any visitMultiParamDef(CSubsetParser::MultiParamDefContext *ctx) override
//     {
//         string parameter_list = any_cast<string>(visit(ctx->parameter_list()));
//         string COMMA = ctx->COMMA()->getText();
//         string type_specifier = any_cast<string>(visit(ctx->type_specifier()));
//         string ID = ctx->ID()->getText();
//         if (!table->insert(ID, "ID"))
//         {
//             errorFile << "Error at line " << to_string(ctx->getStart()->getLine()) << ": Multiple declaration of " << ID << "\n\n";
//             errorCnt++;
//         }
//         string matchStr = parameter_list + COMMA + type_specifier + " " + ID;
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": parameter_list : parameter_list COMMA type_specifier ID\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);
//         return matchStr;
//     }

//     any visitUniParamDec(CSubsetParser::UniParamDecContext *ctx) override
//     {
//         string type_specifier = any_cast<string>(visit(ctx->type_specifier()));
//         string matchStr = type_specifier;
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": parameter_list : type_specifier\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);
//         return matchStr;
//     }

//     any visitCmpd_stmtStmts(CSubsetParser::Cmpd_stmtStmtsContext *ctx) override
//     {
//         string LCURL = ctx->LCURL()->getText();
//         string statements = any_cast<string>(visit(ctx->statements()));
//         string RCURL = ctx->RCURL()->getText();
//         string matchStr = LCURL + "\n" + statements + "\n" + RCURL;
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": compound_statement : LCURL statements RCURL\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);
//         table->printAllScopes2(logFile);
//         table->exitScope();
//         return matchStr;
//     }

//     any visitCmpd_stmtParen(CSubsetParser::Cmpd_stmtParenContext *ctx) override
//     {
//         string LCURL = ctx->LCURL()->getText();
//         string RCURL = ctx->RCURL()->getText();
//         string matchStr = LCURL + "\n" + RCURL;
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": compound_statement : LCURL RCURL\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);
//         table->printAllScopes2(logFile);
//         table->exitScope();
//         return matchStr;
//     }

//     any visitVar_declaration(CSubsetParser::Var_declarationContext *ctx) override
//     {
//         string type_specifier = any_cast<string>(visit(ctx->type_specifier()));
//         string declaration_list = any_cast<string>(visit(ctx->declaration_list()));
//         string SEMICOLON = ctx->SEMICOLON()->getText();
//         string matchStr = type_specifier + " " + declaration_list + SEMICOLON;

//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": var_declaration : type_specifier declaration_list SEMICOLON\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);

//         return matchStr;
//     }

//     any visitTypeInt(CSubsetParser::TypeIntContext *ctx) override
//     {
//         string matchStr = ctx->INT()->getText();
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": type_specifier : INT\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);

//         return matchStr;
//     }

//     any visitTypeFloat(CSubsetParser::TypeFloatContext *ctx) override
//     {
//         string matchStr = ctx->FLOAT()->getText();
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": type_specifier : FLOAT\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);

//         return matchStr;
//     }

//     any visitTypeVoid(CSubsetParser::TypeVoidContext *ctx) override
//     {
//         string matchStr = ctx->VOID()->getText();
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": type_specifier : VOID\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);

//         return matchStr;
//     }

//     any visitDec_lstThird(CSubsetParser::Dec_lstThirdContext *ctx) override
//     {
//         string ID = ctx->ID()->getText();
//         if (!table->insert(ID, "ID"))
//         {
//             errorFile << "Error at line " << to_string(ctx->getStart()->getLine()) << ": Multiple declaration of " << ID << "\n\n";
//             errorCnt++;
//         }
//         string LTHIRD = ctx->LTHIRD()->getText();
//         string CONST_INT = ctx->CONST_INT()->getText();
//         string RTHIRD = ctx->RTHIRD()->getText();
//         string matchStr = ID + LTHIRD + CONST_INT + RTHIRD;
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": declaration_list : ID LTHIRD CONST_INT RTHIRD\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);
//         return matchStr;
//     }

//     any visitDec_lstCommaThird(CSubsetParser::Dec_lstCommaThirdContext *ctx) override
//     {
//         string declaration_list = any_cast<string>(visit(ctx->declaration_list()));
//         string COMMA = ctx->COMMA()->getText();
//         string ID = ctx->ID()->getText();
//         if (!table->insert(ID, "ID"))
//         {
//             errorFile << "Error at line " << to_string(ctx->getStart()->getLine()) << ": Multiple declaration of " << ID << "\n\n";
//             errorCnt++;
//         }
//         string LTHIRD = ctx->LTHIRD()->getText();
//         string CONST_INT = ctx->CONST_INT()->getText();
//         string RTHIRD = ctx->RTHIRD()->getText();
//         string matchStr = declaration_list + COMMA + ID + LTHIRD + CONST_INT + RTHIRD;
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": declaration_list : declaration_list COMMA ID LTHIRD CONST_INT RTHIRD\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);
//         return matchStr;
//     }

//     any visitDec_lstID(CSubsetParser::Dec_lstIDContext *ctx) override
//     {
//         string matchStr = ctx->ID()->getText();
//         if (!table->insert(matchStr, "ID"))
//         {
//             errorFile << "Error at line " << to_string(ctx->getStart()->getLine()) << ": Multiple declaration of " << matchStr << "\n\n";
//             errorCnt++;
//         }
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": declaration_list : ID\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);

//         return matchStr;
//     }

//     any visitDec_lstCommaID(CSubsetParser::Dec_lstCommaIDContext *ctx) override
//     {
//         string declaration_list = any_cast<string>(visit(ctx->declaration_list()));
//         string COMMA = ctx->COMMA()->getText();
//         string ID = ctx->ID()->getText();
//         if (!table->insert(ID, "ID"))
//         {
//             errorFile << "Error at line " << to_string(ctx->getStart()->getLine()) << ": Multiple declaration of " << ID << "\n\n";
//             errorCnt++;
//         }
//         string matchStr = declaration_list + COMMA + ID;
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": declaration_list : declaration_list COMMA ID\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);

//         return matchStr;
//     }

//     any visitStmtsStmt(CSubsetParser::StmtsStmtContext *ctx) override
//     {
//         string matchStr = any_cast<string>(visit(ctx->statement()));
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": statements : statement\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);

//         return matchStr;
//     }

//     any visitStmtsStmtsStmt(CSubsetParser::StmtsStmtsStmtContext *ctx) override
//     {
//         string statements = any_cast<string>(visit(ctx->statements()));
//         string statement = any_cast<string>(visit(ctx->statement()));
//         string matchStr = statements + "\n" + statement;
//         string message = "Line " + to_string(ctx->statement()->getStart()->getLine()) + ": statements : statements statement\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);

//         return matchStr;
//     }

//     any visitStmtVar_dec(CSubsetParser::StmtVar_decContext *ctx) override
//     {
//         string matchStr = any_cast<string>(visit(ctx->var_declaration()));
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": statement : var_declaration\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);
//         return matchStr;
//     }

//     any visitStmtExpr_stmt(CSubsetParser::StmtExpr_stmtContext *ctx) override
//     {
//         string matchStr = any_cast<string>(visit(ctx->expression_statement()));
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": statement : expression_statement\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);

//         return matchStr;
//     }

//     any visitStmtIf(CSubsetParser::StmtIfContext *ctx) override
//     {
//         string IF = ctx->IF()->getText();
//         string LPAREN = ctx->LPAREN()->getText();
//         string expression = any_cast<string>(visit(ctx->expression()));
//         string RPAREN = ctx->RPAREN()->getText();
//         string statement1 = any_cast<string>(visit(ctx->statement(0)));
//         string ELSE = ctx->ELSE()->getText();
//         string statement2 = any_cast<string>(visit(ctx->statement(1)));
//         string matchStr = IF + LPAREN + expression + RPAREN + statement1 + ELSE + statement2;
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": statement : IF LPAREN expression RPAREN statement ELSE statement\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);
//         return matchStr;
//     }

//     any visitStmtWhile(CSubsetParser::StmtWhileContext *ctx) override
//     {
//         string WHILE = ctx->WHILE()->getText();
//         string LPAREN = ctx->LPAREN()->getText();
//         string expression = any_cast<string>(visit(ctx->expression()));
//         string RPAREN = ctx->RPAREN()->getText();
//         string statement = any_cast<string>(visit(ctx->statement()));
//         string matchStr = WHILE + LPAREN + expression + RPAREN + statement;
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": statement : WHILE LPAREN expression RPAREN statement\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);
//         return matchStr;
//     }

//     any visitStmtPrint(CSubsetParser::StmtPrintContext *ctx) override
//     {
//         string PRINTLN = ctx->PRINTLN()->getText();
//         string LPAREN = ctx->LPAREN()->getText();
//         string ID = ctx->ID()->getText();
//         string RPAREN = ctx->RPAREN()->getText();
//         string SEMICOLON = ctx->SEMICOLON()->getText();
//         string matchStr = PRINTLN + LPAREN + ID + RPAREN + SEMICOLON;
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": statement : PRINTLN LPAREN ID RPAREN SEMICOLON\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);
//         return matchStr;
//     }

//     any visitStmtReturn(CSubsetParser::StmtReturnContext *ctx) override
//     {
//         string RETURN = ctx->RETURN()->getText();
//         string expression = any_cast<string>(visit(ctx->expression()));
//         string SEMICOLON = ctx->SEMICOLON()->getText();
//         string matchStr = RETURN + " " + expression + SEMICOLON;
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": statement : RETURN expression SEMICOLON\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);

//         return matchStr;
//     }

//     any visitExpr_stmtSemicolon(CSubsetParser::Expr_stmtSemicolonContext *ctx) override
//     {
//         string matchStr = ctx->SEMICOLON()->getText();
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": expression_statement : SEMICOLON\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);
//         return matchStr;
//     }

//     any visitExpr_stmtExprSemicolon(CSubsetParser::Expr_stmtExprSemicolonContext *ctx) override
//     {
//         string expression = any_cast<string>(visit(ctx->expression()));
//         string SEMICOLON = ctx->SEMICOLON()->getText();
//         string matchStr = expression + SEMICOLON;
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": expression_statement : expression SEMICOLON\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);

//         return matchStr;
//     }

//     any visitVarId(CSubsetParser::VarIdContext *ctx) override
//     {
//         string matchStr = ctx->ID()->getText();
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": variable : ID\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);

//         return matchStr;
//     }

//     any visitVarThird(CSubsetParser::VarThirdContext *ctx) override
//     {
//         string ID = ctx->ID()->getText();
//         string LTHIRD = ctx->LTHIRD()->getText();
//         string expression = any_cast<string>(visit(ctx->expression()));
//         string RTHIRD = ctx->RTHIRD()->getText();
//         string matchStr = ID + LTHIRD + expression + RTHIRD;
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": variable : ID LTHIRD expression RTHIRD\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);
//         return matchStr;
//     }

//     any visitExprLogic(CSubsetParser::ExprLogicContext *ctx) override
//     {
//         string matchStr = any_cast<string>(visit(ctx->logic_expression()));
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": expression : logic expression\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);

//         return matchStr;
//     }

//     any visitExprVar(CSubsetParser::ExprVarContext *ctx) override
//     {
//         string variable = any_cast<string>(visit(ctx->variable()));
//         string ASSIGNOP = ctx->ASSIGNOP()->getText();
//         string logic_expression = any_cast<string>(visit(ctx->logic_expression()));
//         string matchStr = variable + ASSIGNOP + logic_expression;
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": expression : variable ASSIGNOP logic_expression\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);

//         return matchStr;
//     }

//     any visitLogciRel(CSubsetParser::LogciRelContext *ctx) override
//     {
//         string matchStr = any_cast<string>(visit(ctx->rel_expression()));
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": logic_expression : rel_expression\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);

//         return matchStr;
//     }

//     any visitLogicRelRel(CSubsetParser::LogicRelRelContext *ctx) override
//     {
//         string rel_expression1 = any_cast<string>(visit(ctx->rel_expression(0)));
//         string LOGICOP = ctx->LOGICOP()->getText();
//         string rel_expression2 = any_cast<string>(visit(ctx->rel_expression(1)));
//         string matchStr = rel_expression1 + LOGICOP + rel_expression2;
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": logic_expression : rel_expression LOGICOP rel_expression\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);
//         return matchStr;
//     }

//     any visitRelSimple(CSubsetParser::RelSimpleContext *ctx) override
//     {
//         string matchStr = any_cast<string>(visit(ctx->simple_expression()));
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": rel_expression : simple_expression\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);

//         return matchStr;
//     }

//     any visitRelSimpleSimple(CSubsetParser::RelSimpleSimpleContext *ctx) override
//     {
//         string simple_expression1 = any_cast<string>(visit(ctx->simple_expression(0)));
//         string RELOP = ctx->RELOP()->getText();
//         string simple_expression2 = any_cast<string>(visit(ctx->simple_expression(1)));
//         string matchStr = simple_expression1 + RELOP + simple_expression2;
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": rel_expression : simple_expression RELOP simple_expression\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);
//         return matchStr;
//     }

//     any visitSimpleTerm(CSubsetParser::SimpleTermContext *ctx) override
//     {
//         string matchStr = any_cast<string>(visit(ctx->term()));
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": simple_expression : term\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);
//         return matchStr;
//     }

//     any visitSimpleSimpleTerm(CSubsetParser::SimpleSimpleTermContext *ctx) override
//     {
//         string simple_expression = any_cast<string>(visit(ctx->simple_expression()));
//         string ADDOP = ctx->ADDOP()->getText();
//         string term = any_cast<string>(visit(ctx->term()));
//         string matchStr = simple_expression + ADDOP + term;
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": simple_expression : simple_expression ADDOP term\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);

//         return matchStr;
//     }

//     any visitTermUnary(CSubsetParser::TermUnaryContext *ctx) override
//     {
//         string matchStr = any_cast<string>(visit(ctx->unary_expression()));
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": term : unary_expression\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);

//         return matchStr;
//     }

//     any visitTermTerm(CSubsetParser::TermTermContext *ctx) override
//     {
//         string term = any_cast<string>(visit(ctx->term()));
//         string MULOP = ctx->MULOP()->getText();
//         string unary_expression = any_cast<string>(visit(ctx->unary_expression()));
//         string matchStr = term + MULOP + unary_expression;
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": term : term MULOP unary_expression\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);
//         return matchStr;
//     }

//     any visitUnaryAdd(CSubsetParser::UnaryAddContext *ctx) override
//     {
//         string ADDOP = ctx->ADDOP()->getText();
//         string unary_expression = any_cast<string>(visit(ctx->unary_expression()));
//         string matchStr = ADDOP + unary_expression;
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": unary_expression : ADDOP unary_expression\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);
//         return matchStr;
//     }

//     any visitUnaryNot(CSubsetParser::UnaryNotContext *ctx) override
//     {
//         string NOT = ctx->NOT()->getText();
//         string unary_expression = any_cast<string>(visit(ctx->unary_expression()));
//         string matchStr = NOT + unary_expression;
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": unary_expression : NOT unary_expression\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);
//         return matchStr;
//     }

//     any visitUnaryFactor(CSubsetParser::UnaryFactorContext *ctx) override
//     {
//         string matchStr = any_cast<string>(visit(ctx->factor()));
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": unary_expression : factor\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);

//         return matchStr;
//     }

//     any visitFactorVar(CSubsetParser::FactorVarContext *ctx) override
//     {
//         string matchStr = any_cast<string>(visit(ctx->variable()));
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": factor : variable\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);

//         return matchStr;
//     }

//     any visitFactorId(CSubsetParser::FactorIdContext *ctx) override
//     {
//         string ID = ctx->ID()->getText();
//         string LPAREN = ctx->LPAREN()->getText();
//         string argument_list = any_cast<string>(visit(ctx->argument_list()));
//         string RPAREN = ctx->RPAREN()->getText();
//         string matchStr = ID + LPAREN + argument_list + RPAREN;
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": factor : ID LPAREN argument_list RPAREN\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);

//         return matchStr;
//     }

//     any visitFactorParen(CSubsetParser::FactorParenContext *ctx) override
//     {
//         string LPAREN = ctx->LPAREN()->getText();
//         string expression = any_cast<string>(visit(ctx->expression()));
//         string RPAREN = ctx->RPAREN()->getText();
//         string matchStr = LPAREN + expression + RPAREN;
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": factor : LPAREN expression RPAREN\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);
//         return matchStr;
//     }

//     any visitFactorInt(CSubsetParser::FactorIntContext *ctx) override
//     {
//         string matchStr = ctx->CONST_INT()->getText();
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": factor : CONST_INT\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);

//         return matchStr;
//     }

//     any visitFactorFloat(CSubsetParser::FactorFloatContext *ctx) override
//     {
//         float val = stof(ctx->CONST_FLOAT()->getText());
//         stringstream stream;
//         stream << fixed << setprecision(2) << val;
//         string matchStr = stream.str();
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": factor : CONST_FLOAT\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);
//         return matchStr;
//     }

//     any visitFactorIncop(CSubsetParser::FactorIncopContext *ctx) override
//     {
//         string variable = any_cast<string>(visit(ctx->variable()));
//         string INCOP = ctx->INCOP()->getText();
//         string matchStr = variable + INCOP;
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": factor : variable INCOP\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);
//         return matchStr;
//     }

//     any visitFactorDecop(CSubsetParser::FactorDecopContext *ctx) override
//     {
//         string variable = any_cast<string>(visit(ctx->variable()));
//         string DECOP = ctx->DECOP()->getText();
//         string matchStr = variable + DECOP;
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": factor : variable DECOP\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);
//         return matchStr;
//     }

//     any visitArgument_list(CSubsetParser::Argument_listContext *ctx) override
//     {
//         if (ctx->arguments())
//         {
//             string matchStr = any_cast<string>(visit(ctx->arguments()));
//             string message = "Line " + to_string(ctx->getStart()->getLine()) + ": argument_list : arguments\n\n";
//             message = message + matchStr + "\n\n";
//             writeIntoLogFile(message);
//             return matchStr;
//         }
//         return string("");
//     }

//     any visitArgsArgs(CSubsetParser::ArgsArgsContext *ctx) override
//     {
//         string arguments = any_cast<string>(visit(ctx->arguments()));
//         string COMMA = ctx->COMMA()->getText();
//         string logic_expression = any_cast<string>(visit(ctx->logic_expression()));
//         string matchStr = arguments + COMMA + logic_expression;
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": arguments : arguments COMMA logic_expression\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);
//         return matchStr;
//     }

//     any visitArgsLogic(CSubsetParser::ArgsLogicContext *ctx) override
//     {
//         string matchStr = any_cast<string>(visit(ctx->logic_expression()));
//         string message = "Line " + to_string(ctx->getStart()->getLine()) + ": arguments : logic_expression\n\n";
//         message = message + matchStr + "\n\n";
//         writeIntoLogFile(message);
//         return matchStr;
//     }
// };