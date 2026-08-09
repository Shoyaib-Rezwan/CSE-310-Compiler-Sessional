#pragma once

#include "calculatorBaseVisitor.h"

using namespace std;

class calculator : public calculatorBaseVisitor
{
    any visitStart(calculatorParser::StartContext *ctx) override
    {
        return visit(ctx->expression());
    }

    any visitExprTerm(calculatorParser::ExprTermContext *ctx) override
    {
        return visit(ctx->term());
    }

    any visitPlus(calculatorParser::PlusContext *ctx) override
    {
        int expr = any_cast<int>(visit(ctx->expression()));
        int term = any_cast<int>(visit(ctx->term()));
        return expr + term;
    }

    any visitTermFactor(calculatorParser::TermFactorContext *ctx) override
    {
        return visit(ctx->factor());
    }

    any visitTimes(calculatorParser::TimesContext *ctx) override
    {
        int factor = any_cast<int>(visit(ctx->factor()));
        int term = any_cast<int>(visit(ctx->term()));
        return factor * term;
    }

    any visitParen(calculatorParser::ParenContext *ctx) override
    {
        return visit(ctx->expression());
    }

    any visitFactorInt(calculatorParser::FactorIntContext *ctx) override
    {
        string lexeme = ctx->INT()->getText();
        int value = stoi(lexeme);
        return value;
    }
};
