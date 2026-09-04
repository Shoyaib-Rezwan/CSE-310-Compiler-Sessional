
// Generated from CSubset_2205014.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "CSubset_2205014Parser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by CSubset_2205014Parser.
 */
class  CSubset_2205014Visitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by CSubset_2205014Parser.
   */
    virtual std::any visitStart(CSubset_2205014Parser::StartContext *context) = 0;

    virtual std::any visitProgProgUnit(CSubset_2205014Parser::ProgProgUnitContext *context) = 0;

    virtual std::any visitProgUnit(CSubset_2205014Parser::ProgUnitContext *context) = 0;

    virtual std::any visitUnitVarDec(CSubset_2205014Parser::UnitVarDecContext *context) = 0;

    virtual std::any visitUnitFuncDec(CSubset_2205014Parser::UnitFuncDecContext *context) = 0;

    virtual std::any visitUnitFuncDef(CSubset_2205014Parser::UnitFuncDefContext *context) = 0;

    virtual std::any visitFuncDecParam(CSubset_2205014Parser::FuncDecParamContext *context) = 0;

    virtual std::any visitFuncDecNoParam(CSubset_2205014Parser::FuncDecNoParamContext *context) = 0;

    virtual std::any visitFuncDefParam(CSubset_2205014Parser::FuncDefParamContext *context) = 0;

    virtual std::any visitFuncDefNoParam(CSubset_2205014Parser::FuncDefNoParamContext *context) = 0;

    virtual std::any visitUniParamDef(CSubset_2205014Parser::UniParamDefContext *context) = 0;

    virtual std::any visitMultiParamDec(CSubset_2205014Parser::MultiParamDecContext *context) = 0;

    virtual std::any visitMultiParamADDOP(CSubset_2205014Parser::MultiParamADDOPContext *context) = 0;

    virtual std::any visitMultiParamDef(CSubset_2205014Parser::MultiParamDefContext *context) = 0;

    virtual std::any visitUniParamDec(CSubset_2205014Parser::UniParamDecContext *context) = 0;

    virtual std::any visitUniParamAddOp(CSubset_2205014Parser::UniParamAddOpContext *context) = 0;

    virtual std::any visitCmpd_stmtStmts(CSubset_2205014Parser::Cmpd_stmtStmtsContext *context) = 0;

    virtual std::any visitCmpd_stmtParen(CSubset_2205014Parser::Cmpd_stmtParenContext *context) = 0;

    virtual std::any visitVar_declaration(CSubset_2205014Parser::Var_declarationContext *context) = 0;

    virtual std::any visitTypeInt(CSubset_2205014Parser::TypeIntContext *context) = 0;

    virtual std::any visitTypeFloat(CSubset_2205014Parser::TypeFloatContext *context) = 0;

    virtual std::any visitTypeVoid(CSubset_2205014Parser::TypeVoidContext *context) = 0;

    virtual std::any visitDec_lstThird(CSubset_2205014Parser::Dec_lstThirdContext *context) = 0;

    virtual std::any visitDec_lstCOMMAIDAddopID(CSubset_2205014Parser::Dec_lstCOMMAIDAddopIDContext *context) = 0;

    virtual std::any visitDec_lstCommaThird(CSubset_2205014Parser::Dec_lstCommaThirdContext *context) = 0;

    virtual std::any visitDec_lstID(CSubset_2205014Parser::Dec_lstIDContext *context) = 0;

    virtual std::any visitDec_lstCommaID(CSubset_2205014Parser::Dec_lstCommaIDContext *context) = 0;

    virtual std::any visitDec_lstIDAddOpID(CSubset_2205014Parser::Dec_lstIDAddOpIDContext *context) = 0;

    virtual std::any visitStmtsStmt(CSubset_2205014Parser::StmtsStmtContext *context) = 0;

    virtual std::any visitStmtsStmtsStmt(CSubset_2205014Parser::StmtsStmtsStmtContext *context) = 0;

    virtual std::any visitStmtVar_dec(CSubset_2205014Parser::StmtVar_decContext *context) = 0;

    virtual std::any visitStmtExpr_stmt(CSubset_2205014Parser::StmtExpr_stmtContext *context) = 0;

    virtual std::any visitStmtIfElse(CSubset_2205014Parser::StmtIfElseContext *context) = 0;

    virtual std::any visitStmtWhile(CSubset_2205014Parser::StmtWhileContext *context) = 0;

    virtual std::any visitStmtPrint(CSubset_2205014Parser::StmtPrintContext *context) = 0;

    virtual std::any visitStmtReturn(CSubset_2205014Parser::StmtReturnContext *context) = 0;

    virtual std::any visitStmtCmpd_stmt(CSubset_2205014Parser::StmtCmpd_stmtContext *context) = 0;

    virtual std::any visitStmtFor(CSubset_2205014Parser::StmtForContext *context) = 0;

    virtual std::any visitStmtIf(CSubset_2205014Parser::StmtIfContext *context) = 0;

    virtual std::any visitStmtPrintErr(CSubset_2205014Parser::StmtPrintErrContext *context) = 0;

    virtual std::any visitStmtReturnErr(CSubset_2205014Parser::StmtReturnErrContext *context) = 0;

    virtual std::any visitStmtGoto(CSubset_2205014Parser::StmtGotoContext *context) = 0;

    virtual std::any visitStmtId(CSubset_2205014Parser::StmtIdContext *context) = 0;

    virtual std::any visitExpr_stmtSemicolon(CSubset_2205014Parser::Expr_stmtSemicolonContext *context) = 0;

    virtual std::any visitExpr_stmtExprSemicolon(CSubset_2205014Parser::Expr_stmtExprSemicolonContext *context) = 0;

    virtual std::any visitExpr_stmtExpr(CSubset_2205014Parser::Expr_stmtExprContext *context) = 0;

    virtual std::any visitVarId(CSubset_2205014Parser::VarIdContext *context) = 0;

    virtual std::any visitVarThird(CSubset_2205014Parser::VarThirdContext *context) = 0;

    virtual std::any visitExprLogic(CSubset_2205014Parser::ExprLogicContext *context) = 0;

    virtual std::any visitExprVar(CSubset_2205014Parser::ExprVarContext *context) = 0;

    virtual std::any visitLogciRel(CSubset_2205014Parser::LogciRelContext *context) = 0;

    virtual std::any visitLogicRelRel(CSubset_2205014Parser::LogicRelRelContext *context) = 0;

    virtual std::any visitLogicRelAssign(CSubset_2205014Parser::LogicRelAssignContext *context) = 0;

    virtual std::any visitRelSimple(CSubset_2205014Parser::RelSimpleContext *context) = 0;

    virtual std::any visitRelSimpleSimple(CSubset_2205014Parser::RelSimpleSimpleContext *context) = 0;

    virtual std::any visitRelSimpleRelAssign(CSubset_2205014Parser::RelSimpleRelAssignContext *context) = 0;

    virtual std::any visitSimpleTerm(CSubset_2205014Parser::SimpleTermContext *context) = 0;

    virtual std::any visitSimpleSimpleTerm(CSubset_2205014Parser::SimpleSimpleTermContext *context) = 0;

    virtual std::any visitSimpleSimpleAdd(CSubset_2205014Parser::SimpleSimpleAddContext *context) = 0;

    virtual std::any visitTermUnary(CSubset_2205014Parser::TermUnaryContext *context) = 0;

    virtual std::any visitTermTerm(CSubset_2205014Parser::TermTermContext *context) = 0;

    virtual std::any visitTermTermMulAssign(CSubset_2205014Parser::TermTermMulAssignContext *context) = 0;

    virtual std::any visitUnaryAdd(CSubset_2205014Parser::UnaryAddContext *context) = 0;

    virtual std::any visitUnaryNot(CSubset_2205014Parser::UnaryNotContext *context) = 0;

    virtual std::any visitUnaryFactor(CSubset_2205014Parser::UnaryFactorContext *context) = 0;

    virtual std::any visitFactorVar(CSubset_2205014Parser::FactorVarContext *context) = 0;

    virtual std::any visitFactorId(CSubset_2205014Parser::FactorIdContext *context) = 0;

    virtual std::any visitFactorParen(CSubset_2205014Parser::FactorParenContext *context) = 0;

    virtual std::any visitFactorInt(CSubset_2205014Parser::FactorIntContext *context) = 0;

    virtual std::any visitFactorFloat(CSubset_2205014Parser::FactorFloatContext *context) = 0;

    virtual std::any visitFactorIncop(CSubset_2205014Parser::FactorIncopContext *context) = 0;

    virtual std::any visitFactorDecop(CSubset_2205014Parser::FactorDecopContext *context) = 0;

    virtual std::any visitArgument_list(CSubset_2205014Parser::Argument_listContext *context) = 0;

    virtual std::any visitArgsArgs(CSubset_2205014Parser::ArgsArgsContext *context) = 0;

    virtual std::any visitArgsLogic(CSubset_2205014Parser::ArgsLogicContext *context) = 0;


};

