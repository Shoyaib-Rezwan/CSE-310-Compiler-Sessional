
// Generated from CSubset.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "CSubsetVisitor.h"


/**
 * This class provides an empty implementation of CSubsetVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  CSubsetBaseVisitor : public CSubsetVisitor {
public:

  virtual std::any visitStart(CSubsetParser::StartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProgProgUnit(CSubsetParser::ProgProgUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProgUnit(CSubsetParser::ProgUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnitVarDec(CSubsetParser::UnitVarDecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnitFuncDec(CSubsetParser::UnitFuncDecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnitFuncDef(CSubsetParser::UnitFuncDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncDecParam(CSubsetParser::FuncDecParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncDecNoParam(CSubsetParser::FuncDecNoParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncDefParam(CSubsetParser::FuncDefParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncDefNoParam(CSubsetParser::FuncDefNoParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUniParamDef(CSubsetParser::UniParamDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiParamDec(CSubsetParser::MultiParamDecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiParamDef(CSubsetParser::MultiParamDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUniParamDec(CSubsetParser::UniParamDecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCmpd_stmtStmts(CSubsetParser::Cmpd_stmtStmtsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCmpd_stmtParen(CSubsetParser::Cmpd_stmtParenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVar_declaration(CSubsetParser::Var_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeInt(CSubsetParser::TypeIntContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeFloat(CSubsetParser::TypeFloatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeVoid(CSubsetParser::TypeVoidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDec_lstThird(CSubsetParser::Dec_lstThirdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDec_lstCommaThird(CSubsetParser::Dec_lstCommaThirdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDec_lstID(CSubsetParser::Dec_lstIDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDec_lstCommaID(CSubsetParser::Dec_lstCommaIDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmtsStmt(CSubsetParser::StmtsStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmtsStmtsStmt(CSubsetParser::StmtsStmtsStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmtVar_dec(CSubsetParser::StmtVar_decContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmtExpr_stmt(CSubsetParser::StmtExpr_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmtIf(CSubsetParser::StmtIfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmtWhile(CSubsetParser::StmtWhileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmtPrint(CSubsetParser::StmtPrintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmtReturn(CSubsetParser::StmtReturnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr_stmtSemicolon(CSubsetParser::Expr_stmtSemicolonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr_stmtExprSemicolon(CSubsetParser::Expr_stmtExprSemicolonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarId(CSubsetParser::VarIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarThird(CSubsetParser::VarThirdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExprLogic(CSubsetParser::ExprLogicContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExprVar(CSubsetParser::ExprVarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogciRel(CSubsetParser::LogciRelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicRelRel(CSubsetParser::LogicRelRelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelSimple(CSubsetParser::RelSimpleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelSimpleSimple(CSubsetParser::RelSimpleSimpleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleTerm(CSubsetParser::SimpleTermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleSimpleTerm(CSubsetParser::SimpleSimpleTermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTermUnary(CSubsetParser::TermUnaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTermTerm(CSubsetParser::TermTermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryAdd(CSubsetParser::UnaryAddContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryNot(CSubsetParser::UnaryNotContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryFactor(CSubsetParser::UnaryFactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFactorVar(CSubsetParser::FactorVarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFactorId(CSubsetParser::FactorIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFactorParen(CSubsetParser::FactorParenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFactorInt(CSubsetParser::FactorIntContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFactorFloat(CSubsetParser::FactorFloatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFactorIncop(CSubsetParser::FactorIncopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFactorDecop(CSubsetParser::FactorDecopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgument_list(CSubsetParser::Argument_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgsArgs(CSubsetParser::ArgsArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgsLogic(CSubsetParser::ArgsLogicContext *ctx) override {
    return visitChildren(ctx);
  }


};

