
// Generated from calculator.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "calculatorVisitor.h"


/**
 * This class provides an empty implementation of calculatorVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  calculatorBaseVisitor : public calculatorVisitor {
public:

  virtual std::any visitStart(calculatorParser::StartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExprTerm(calculatorParser::ExprTermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlus(calculatorParser::PlusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTermFactor(calculatorParser::TermFactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTimes(calculatorParser::TimesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParen(calculatorParser::ParenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFactorInt(calculatorParser::FactorIntContext *ctx) override {
    return visitChildren(ctx);
  }


};

