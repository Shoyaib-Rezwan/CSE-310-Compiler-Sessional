
// Generated from CSubset.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "CSubsetParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by CSubsetParser.
 */
class  CSubsetVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by CSubsetParser.
   */
    virtual std::any visitStart(CSubsetParser::StartContext *context) = 0;

    virtual std::any visitProgProgUnit(CSubsetParser::ProgProgUnitContext *context) = 0;

    virtual std::any visitProgUnit(CSubsetParser::ProgUnitContext *context) = 0;

    virtual std::any visitUnitVarDec(CSubsetParser::UnitVarDecContext *context) = 0;

    virtual std::any visitUnitFuncDec(CSubsetParser::UnitFuncDecContext *context) = 0;

    virtual std::any visitUnitFuncDef(CSubsetParser::UnitFuncDefContext *context) = 0;

    virtual std::any visitFuncDecParam(CSubsetParser::FuncDecParamContext *context) = 0;

    virtual std::any visitFuncDecNoParam(CSubsetParser::FuncDecNoParamContext *context) = 0;

    virtual std::any visitFuncDefParam(CSubsetParser::FuncDefParamContext *context) = 0;

    virtual std::any visitFuncDefNoParam(CSubsetParser::FuncDefNoParamContext *context) = 0;

    virtual std::any visitUniParamDef(CSubsetParser::UniParamDefContext *context) = 0;

    virtual std::any visitMultiParamDec(CSubsetParser::MultiParamDecContext *context) = 0;

    virtual std::any visitMultiParamDef(CSubsetParser::MultiParamDefContext *context) = 0;

    virtual std::any visitUniParamDec(CSubsetParser::UniParamDecContext *context) = 0;

    virtual std::any visitUniParamAddOp(CSubsetParser::UniParamAddOpContext *context) = 0;

    virtual std::any visitCmpd_stmtStmts(CSubsetParser::Cmpd_stmtStmtsContext *context) = 0;

    virtual std::any visitCmpd_stmtParen(CSubsetParser::Cmpd_stmtParenContext *context) = 0;

    virtual std::any visitVar_declaration(CSubsetParser::Var_declarationContext *context) = 0;

    virtual std::any visitTypeInt(CSubsetParser::TypeIntContext *context) = 0;

    virtual std::any visitTypeFloat(CSubsetParser::TypeFloatContext *context) = 0;

    virtual std::any visitTypeVoid(CSubsetParser::TypeVoidContext *context) = 0;

    virtual std::any visitDec_lstThird(CSubsetParser::Dec_lstThirdContext *context) = 0;

    virtual std::any visitDec_lstCommaThird(CSubsetParser::Dec_lstCommaThirdContext *context) = 0;

    virtual std::any visitDec_lstID(CSubsetParser::Dec_lstIDContext *context) = 0;

    virtual std::any visitDec_lstCommaID(CSubsetParser::Dec_lstCommaIDContext *context) = 0;

    virtual std::any visitDec_lstIDAddOpID(CSubsetParser::Dec_lstIDAddOpIDContext *context) = 0;

    virtual std::any visitStmtsStmt(CSubsetParser::StmtsStmtContext *context) = 0;

    virtual std::any visitStmtsStmtsStmt(CSubsetParser::StmtsStmtsStmtContext *context) = 0;

    virtual std::any visitStmtVar_dec(CSubsetParser::StmtVar_decContext *context) = 0;

    virtual std::any visitStmtExpr_stmt(CSubsetParser::StmtExpr_stmtContext *context) = 0;

    virtual std::any visitStmtIfElse(CSubsetParser::StmtIfElseContext *context) = 0;

    virtual std::any visitStmtWhile(CSubsetParser::StmtWhileContext *context) = 0;

    virtual std::any visitStmtPrint(CSubsetParser::StmtPrintContext *context) = 0;

    virtual std::any visitStmtReturn(CSubsetParser::StmtReturnContext *context) = 0;

    virtual std::any visitStmtCmpd_stmt(CSubsetParser::StmtCmpd_stmtContext *context) = 0;

    virtual std::any visitStmtFor(CSubsetParser::StmtForContext *context) = 0;

    virtual std::any visitStmtIf(CSubsetParser::StmtIfContext *context) = 0;

    virtual std::any visitExpr_stmtSemicolon(CSubsetParser::Expr_stmtSemicolonContext *context) = 0;

    virtual std::any visitExpr_stmtExprSemicolon(CSubsetParser::Expr_stmtExprSemicolonContext *context) = 0;

    virtual std::any visitExpr_stmtExpr(CSubsetParser::Expr_stmtExprContext *context) = 0;

    virtual std::any visitVarId(CSubsetParser::VarIdContext *context) = 0;

    virtual std::any visitVarThird(CSubsetParser::VarThirdContext *context) = 0;

    virtual std::any visitExprLogic(CSubsetParser::ExprLogicContext *context) = 0;

    virtual std::any visitExprVar(CSubsetParser::ExprVarContext *context) = 0;

    virtual std::any visitLogciRel(CSubsetParser::LogciRelContext *context) = 0;

    virtual std::any visitLogicRelRel(CSubsetParser::LogicRelRelContext *context) = 0;

    virtual std::any visitRelSimple(CSubsetParser::RelSimpleContext *context) = 0;

    virtual std::any visitRelSimpleSimple(CSubsetParser::RelSimpleSimpleContext *context) = 0;

    virtual std::any visitSimpleTerm(CSubsetParser::SimpleTermContext *context) = 0;

    virtual std::any visitSimpleSimpleTerm(CSubsetParser::SimpleSimpleTermContext *context) = 0;

    virtual std::any visitSimpleSimpleAdd(CSubsetParser::SimpleSimpleAddContext *context) = 0;

    virtual std::any visitTermUnary(CSubsetParser::TermUnaryContext *context) = 0;

    virtual std::any visitTermTerm(CSubsetParser::TermTermContext *context) = 0;

    virtual std::any visitUnaryAdd(CSubsetParser::UnaryAddContext *context) = 0;

    virtual std::any visitUnaryNot(CSubsetParser::UnaryNotContext *context) = 0;

    virtual std::any visitUnaryFactor(CSubsetParser::UnaryFactorContext *context) = 0;

    virtual std::any visitFactorVar(CSubsetParser::FactorVarContext *context) = 0;

    virtual std::any visitFactorId(CSubsetParser::FactorIdContext *context) = 0;

    virtual std::any visitFactorParen(CSubsetParser::FactorParenContext *context) = 0;

    virtual std::any visitFactorInt(CSubsetParser::FactorIntContext *context) = 0;

    virtual std::any visitFactorFloat(CSubsetParser::FactorFloatContext *context) = 0;

    virtual std::any visitFactorIncop(CSubsetParser::FactorIncopContext *context) = 0;

    virtual std::any visitFactorDecop(CSubsetParser::FactorDecopContext *context) = 0;

    virtual std::any visitArgument_list(CSubsetParser::Argument_listContext *context) = 0;

    virtual std::any visitArgsArgs(CSubsetParser::ArgsArgsContext *context) = 0;

    virtual std::any visitArgsLogic(CSubsetParser::ArgsLogicContext *context) = 0;


};

