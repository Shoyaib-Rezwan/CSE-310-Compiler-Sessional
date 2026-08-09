
// Generated from calculator.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "calculatorParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by calculatorParser.
 */
class  calculatorVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by calculatorParser.
   */
    virtual std::any visitStart(calculatorParser::StartContext *context) = 0;

    virtual std::any visitExprTerm(calculatorParser::ExprTermContext *context) = 0;

    virtual std::any visitPlus(calculatorParser::PlusContext *context) = 0;

    virtual std::any visitTermFactor(calculatorParser::TermFactorContext *context) = 0;

    virtual std::any visitTimes(calculatorParser::TimesContext *context) = 0;

    virtual std::any visitParen(calculatorParser::ParenContext *context) = 0;

    virtual std::any visitFactorInt(calculatorParser::FactorIntContext *context) = 0;


};

