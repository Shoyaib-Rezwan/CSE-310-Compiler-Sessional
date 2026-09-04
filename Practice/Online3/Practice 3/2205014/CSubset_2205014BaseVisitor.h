
// Generated from CSubset_2205014.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "CSubset_2205014Visitor.h"


/**
 * This class provides an empty implementation of CSubset_2205014Visitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  CSubset_2205014BaseVisitor : public CSubset_2205014Visitor {
public:

  virtual std::any visitStart(CSubset_2205014Parser::StartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProgProgUnit(CSubset_2205014Parser::ProgProgUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProgUnit(CSubset_2205014Parser::ProgUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnitVarDec(CSubset_2205014Parser::UnitVarDecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnitFuncDec(CSubset_2205014Parser::UnitFuncDecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnitFuncDef(CSubset_2205014Parser::UnitFuncDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncDecParam(CSubset_2205014Parser::FuncDecParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncDecNoParam(CSubset_2205014Parser::FuncDecNoParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncDefParam(CSubset_2205014Parser::FuncDefParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncDefNoParam(CSubset_2205014Parser::FuncDefNoParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUniParamDef(CSubset_2205014Parser::UniParamDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiParamDec(CSubset_2205014Parser::MultiParamDecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiParamADDOP(CSubset_2205014Parser::MultiParamADDOPContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiParamDef(CSubset_2205014Parser::MultiParamDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUniParamDec(CSubset_2205014Parser::UniParamDecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUniParamAddOp(CSubset_2205014Parser::UniParamAddOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCmpd_stmtStmts(CSubset_2205014Parser::Cmpd_stmtStmtsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCmpd_stmtParen(CSubset_2205014Parser::Cmpd_stmtParenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVar_declaration(CSubset_2205014Parser::Var_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeInt(CSubset_2205014Parser::TypeIntContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeFloat(CSubset_2205014Parser::TypeFloatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeVoid(CSubset_2205014Parser::TypeVoidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDec_lstThird(CSubset_2205014Parser::Dec_lstThirdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDec_lstCOMMAIDAddopID(CSubset_2205014Parser::Dec_lstCOMMAIDAddopIDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDec_lstCommaThird(CSubset_2205014Parser::Dec_lstCommaThirdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDec_lstID(CSubset_2205014Parser::Dec_lstIDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDec_lstCommaID(CSubset_2205014Parser::Dec_lstCommaIDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDec_lstIDAddOpID(CSubset_2205014Parser::Dec_lstIDAddOpIDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmtsStmt(CSubset_2205014Parser::StmtsStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmtsStmtsStmt(CSubset_2205014Parser::StmtsStmtsStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmtVar_dec(CSubset_2205014Parser::StmtVar_decContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmtExpr_stmt(CSubset_2205014Parser::StmtExpr_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmtIfElse(CSubset_2205014Parser::StmtIfElseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmtWhile(CSubset_2205014Parser::StmtWhileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmtPrint(CSubset_2205014Parser::StmtPrintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmtReturn(CSubset_2205014Parser::StmtReturnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmtCmpd_stmt(CSubset_2205014Parser::StmtCmpd_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmtFor(CSubset_2205014Parser::StmtForContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmtIf(CSubset_2205014Parser::StmtIfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmtPrintErr(CSubset_2205014Parser::StmtPrintErrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmtReturnErr(CSubset_2205014Parser::StmtReturnErrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmtGoto(CSubset_2205014Parser::StmtGotoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmtId(CSubset_2205014Parser::StmtIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr_stmtSemicolon(CSubset_2205014Parser::Expr_stmtSemicolonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr_stmtExprSemicolon(CSubset_2205014Parser::Expr_stmtExprSemicolonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr_stmtExpr(CSubset_2205014Parser::Expr_stmtExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarId(CSubset_2205014Parser::VarIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarThird(CSubset_2205014Parser::VarThirdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExprLogic(CSubset_2205014Parser::ExprLogicContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExprVar(CSubset_2205014Parser::ExprVarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogciRel(CSubset_2205014Parser::LogciRelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicRelRel(CSubset_2205014Parser::LogicRelRelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicRelAssign(CSubset_2205014Parser::LogicRelAssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelSimple(CSubset_2205014Parser::RelSimpleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelSimpleSimple(CSubset_2205014Parser::RelSimpleSimpleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelSimpleRelAssign(CSubset_2205014Parser::RelSimpleRelAssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleTerm(CSubset_2205014Parser::SimpleTermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleSimpleTerm(CSubset_2205014Parser::SimpleSimpleTermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleSimpleAdd(CSubset_2205014Parser::SimpleSimpleAddContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTermUnary(CSubset_2205014Parser::TermUnaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTermTerm(CSubset_2205014Parser::TermTermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTermTermMulAssign(CSubset_2205014Parser::TermTermMulAssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryAdd(CSubset_2205014Parser::UnaryAddContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryNot(CSubset_2205014Parser::UnaryNotContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryFactor(CSubset_2205014Parser::UnaryFactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFactorVar(CSubset_2205014Parser::FactorVarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFactorId(CSubset_2205014Parser::FactorIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFactorParen(CSubset_2205014Parser::FactorParenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFactorInt(CSubset_2205014Parser::FactorIntContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFactorFloat(CSubset_2205014Parser::FactorFloatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFactorIncop(CSubset_2205014Parser::FactorIncopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFactorDecop(CSubset_2205014Parser::FactorDecopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgument_list(CSubset_2205014Parser::Argument_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgsArgs(CSubset_2205014Parser::ArgsArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgsLogic(CSubset_2205014Parser::ArgsLogicContext *ctx) override {
    return visitChildren(ctx);
  }


};

