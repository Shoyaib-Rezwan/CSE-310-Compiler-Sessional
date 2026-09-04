
// Generated from CSubset_2205014.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  CSubset_2205014Parser : public antlr4::Parser {
public:
  enum {
    LINE_COMMENT = 1, BLOCK_COMMENT = 2, STRING = 3, WS = 4, IF = 5, ELSE = 6, 
    FOR = 7, WHILE = 8, PRINTLN = 9, RETURN = 10, INT = 11, FLOAT = 12, 
    VOID = 13, LPAREN = 14, RPAREN = 15, LCURL = 16, RCURL = 17, LTHIRD = 18, 
    RTHIRD = 19, SEMICOLON = 20, COMMA = 21, COLON = 22, GOTO = 23, ADDOP = 24, 
    MULOP = 25, INCOP = 26, DECOP = 27, NOT = 28, RELOP = 29, LOGICOP = 30, 
    ASSIGNOP = 31, ID = 32, CONST_INT = 33, CONST_FLOAT = 34
  };

  enum {
    RuleStart = 0, RuleProgram = 1, RuleUnit = 2, RuleFunc_declaration = 3, 
    RuleFunc_definition = 4, RuleParameter_list = 5, RuleCompound_statement = 6, 
    RuleVar_declaration = 7, RuleType_specifier = 8, RuleDeclaration_list = 9, 
    RuleStatements = 10, RuleStatement = 11, RuleExpression_statement = 12, 
    RuleVariable = 13, RuleExpression = 14, RuleLogic_expression = 15, RuleRel_expression = 16, 
    RuleSimple_expression = 17, RuleTerm = 18, RuleUnary_expression = 19, 
    RuleFactor = 20, RuleArgument_list = 21, RuleArguments = 22
  };

  explicit CSubset_2205014Parser(antlr4::TokenStream *input);

  CSubset_2205014Parser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~CSubset_2205014Parser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class StartContext;
  class ProgramContext;
  class UnitContext;
  class Func_declarationContext;
  class Func_definitionContext;
  class Parameter_listContext;
  class Compound_statementContext;
  class Var_declarationContext;
  class Type_specifierContext;
  class Declaration_listContext;
  class StatementsContext;
  class StatementContext;
  class Expression_statementContext;
  class VariableContext;
  class ExpressionContext;
  class Logic_expressionContext;
  class Rel_expressionContext;
  class Simple_expressionContext;
  class TermContext;
  class Unary_expressionContext;
  class FactorContext;
  class Argument_listContext;
  class ArgumentsContext; 

  class  StartContext : public antlr4::ParserRuleContext {
  public:
    StartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ProgramContext *program();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StartContext* start();

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ProgramContext() = default;
    void copyFrom(ProgramContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ProgProgUnitContext : public ProgramContext {
  public:
    ProgProgUnitContext(ProgramContext *ctx);

    ProgramContext *program();
    UnitContext *unit();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ProgUnitContext : public ProgramContext {
  public:
    ProgUnitContext(ProgramContext *ctx);

    UnitContext *unit();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ProgramContext* program();
  ProgramContext* program(int precedence);
  class  UnitContext : public antlr4::ParserRuleContext {
  public:
    UnitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    UnitContext() = default;
    void copyFrom(UnitContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  UnitFuncDefContext : public UnitContext {
  public:
    UnitFuncDefContext(UnitContext *ctx);

    Func_definitionContext *func_definition();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnitFuncDecContext : public UnitContext {
  public:
    UnitFuncDecContext(UnitContext *ctx);

    Func_declarationContext *func_declaration();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnitVarDecContext : public UnitContext {
  public:
    UnitVarDecContext(UnitContext *ctx);

    Var_declarationContext *var_declaration();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  UnitContext* unit();

  class  Func_declarationContext : public antlr4::ParserRuleContext {
  public:
    Func_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Func_declarationContext() = default;
    void copyFrom(Func_declarationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  FuncDecNoParamContext : public Func_declarationContext {
  public:
    FuncDecNoParamContext(Func_declarationContext *ctx);

    Type_specifierContext *type_specifier();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FuncDecParamContext : public Func_declarationContext {
  public:
    FuncDecParamContext(Func_declarationContext *ctx);

    Type_specifierContext *type_specifier();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LPAREN();
    Parameter_listContext *parameter_list();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Func_declarationContext* func_declaration();

  class  Func_definitionContext : public antlr4::ParserRuleContext {
  public:
    Func_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Func_definitionContext() = default;
    void copyFrom(Func_definitionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  FuncDefNoParamContext : public Func_definitionContext {
  public:
    FuncDefNoParamContext(Func_definitionContext *ctx);

    Type_specifierContext *type_specifier();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    Compound_statementContext *compound_statement();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FuncDefParamContext : public Func_definitionContext {
  public:
    FuncDefParamContext(Func_definitionContext *ctx);

    Type_specifierContext *type_specifier();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LPAREN();
    Parameter_listContext *parameter_list();
    antlr4::tree::TerminalNode *RPAREN();
    Compound_statementContext *compound_statement();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Func_definitionContext* func_definition();

  class  Parameter_listContext : public antlr4::ParserRuleContext {
  public:
    Parameter_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Parameter_listContext() = default;
    void copyFrom(Parameter_listContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  UniParamDefContext : public Parameter_listContext {
  public:
    UniParamDefContext(Parameter_listContext *ctx);

    Type_specifierContext *type_specifier();
    antlr4::tree::TerminalNode *ID();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MultiParamDecContext : public Parameter_listContext {
  public:
    MultiParamDecContext(Parameter_listContext *ctx);

    Parameter_listContext *parameter_list();
    antlr4::tree::TerminalNode *COMMA();
    Type_specifierContext *type_specifier();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MultiParamADDOPContext : public Parameter_listContext {
  public:
    MultiParamADDOPContext(Parameter_listContext *ctx);

    antlr4::Token *op = nullptr;
    Parameter_listContext *parameter_list();
    antlr4::tree::TerminalNode *COMMA();
    Type_specifierContext *type_specifier();
    antlr4::tree::TerminalNode *ADDOP();
    antlr4::tree::TerminalNode *MULOP();
    antlr4::tree::TerminalNode *RELOP();
    antlr4::tree::TerminalNode *LOGICOP();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MultiParamDefContext : public Parameter_listContext {
  public:
    MultiParamDefContext(Parameter_listContext *ctx);

    Parameter_listContext *parameter_list();
    antlr4::tree::TerminalNode *COMMA();
    Type_specifierContext *type_specifier();
    antlr4::tree::TerminalNode *ID();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UniParamDecContext : public Parameter_listContext {
  public:
    UniParamDecContext(Parameter_listContext *ctx);

    Type_specifierContext *type_specifier();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UniParamAddOpContext : public Parameter_listContext {
  public:
    UniParamAddOpContext(Parameter_listContext *ctx);

    antlr4::Token *op = nullptr;
    Type_specifierContext *type_specifier();
    antlr4::tree::TerminalNode *ADDOP();
    antlr4::tree::TerminalNode *MULOP();
    antlr4::tree::TerminalNode *RELOP();
    antlr4::tree::TerminalNode *LOGICOP();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Parameter_listContext* parameter_list();
  Parameter_listContext* parameter_list(int precedence);
  class  Compound_statementContext : public antlr4::ParserRuleContext {
  public:
    Compound_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Compound_statementContext() = default;
    void copyFrom(Compound_statementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Cmpd_stmtParenContext : public Compound_statementContext {
  public:
    Cmpd_stmtParenContext(Compound_statementContext *ctx);

    antlr4::tree::TerminalNode *LCURL();
    antlr4::tree::TerminalNode *RCURL();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Cmpd_stmtStmtsContext : public Compound_statementContext {
  public:
    Cmpd_stmtStmtsContext(Compound_statementContext *ctx);

    antlr4::tree::TerminalNode *LCURL();
    StatementsContext *statements();
    antlr4::tree::TerminalNode *RCURL();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Compound_statementContext* compound_statement();

  class  Var_declarationContext : public antlr4::ParserRuleContext {
  public:
    Var_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_specifierContext *type_specifier();
    Declaration_listContext *declaration_list();
    antlr4::tree::TerminalNode *SEMICOLON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Var_declarationContext* var_declaration();

  class  Type_specifierContext : public antlr4::ParserRuleContext {
  public:
    Type_specifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Type_specifierContext() = default;
    void copyFrom(Type_specifierContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TypeFloatContext : public Type_specifierContext {
  public:
    TypeFloatContext(Type_specifierContext *ctx);

    antlr4::tree::TerminalNode *FLOAT();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TypeVoidContext : public Type_specifierContext {
  public:
    TypeVoidContext(Type_specifierContext *ctx);

    antlr4::tree::TerminalNode *VOID();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TypeIntContext : public Type_specifierContext {
  public:
    TypeIntContext(Type_specifierContext *ctx);

    antlr4::tree::TerminalNode *INT();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Type_specifierContext* type_specifier();

  class  Declaration_listContext : public antlr4::ParserRuleContext {
  public:
    Declaration_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Declaration_listContext() = default;
    void copyFrom(Declaration_listContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Dec_lstThirdContext : public Declaration_listContext {
  public:
    Dec_lstThirdContext(Declaration_listContext *ctx);

    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LTHIRD();
    antlr4::tree::TerminalNode *CONST_INT();
    antlr4::tree::TerminalNode *RTHIRD();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Dec_lstCOMMAIDAddopIDContext : public Declaration_listContext {
  public:
    Dec_lstCOMMAIDAddopIDContext(Declaration_listContext *ctx);

    antlr4::Token *op = nullptr;
    Declaration_listContext *declaration_list();
    antlr4::tree::TerminalNode *COMMA();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    antlr4::tree::TerminalNode *ADDOP();
    antlr4::tree::TerminalNode *MULOP();
    antlr4::tree::TerminalNode *RELOP();
    antlr4::tree::TerminalNode *LOGICOP();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Dec_lstCommaThirdContext : public Declaration_listContext {
  public:
    Dec_lstCommaThirdContext(Declaration_listContext *ctx);

    Declaration_listContext *declaration_list();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LTHIRD();
    antlr4::tree::TerminalNode *CONST_INT();
    antlr4::tree::TerminalNode *RTHIRD();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Dec_lstIDContext : public Declaration_listContext {
  public:
    Dec_lstIDContext(Declaration_listContext *ctx);

    antlr4::tree::TerminalNode *ID();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Dec_lstCommaIDContext : public Declaration_listContext {
  public:
    Dec_lstCommaIDContext(Declaration_listContext *ctx);

    Declaration_listContext *declaration_list();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *ID();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Dec_lstIDAddOpIDContext : public Declaration_listContext {
  public:
    Dec_lstIDAddOpIDContext(Declaration_listContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    antlr4::tree::TerminalNode *ADDOP();
    antlr4::tree::TerminalNode *MULOP();
    antlr4::tree::TerminalNode *RELOP();
    antlr4::tree::TerminalNode *LOGICOP();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Declaration_listContext* declaration_list();
  Declaration_listContext* declaration_list(int precedence);
  class  StatementsContext : public antlr4::ParserRuleContext {
  public:
    StatementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StatementsContext() = default;
    void copyFrom(StatementsContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  StmtsStmtContext : public StatementsContext {
  public:
    StmtsStmtContext(StatementsContext *ctx);

    StatementContext *statement();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtsStmtsStmtContext : public StatementsContext {
  public:
    StmtsStmtsStmtContext(StatementsContext *ctx);

    StatementsContext *statements();
    StatementContext *statement();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StatementsContext* statements();
  StatementsContext* statements(int precedence);
  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StatementContext() = default;
    void copyFrom(StatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  StmtReturnContext : public StatementContext {
  public:
    StmtReturnContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *RETURN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtWhileContext : public StatementContext {
  public:
    StmtWhileContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    StatementContext *statement();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtPrintErrContext : public StatementContext {
  public:
    StmtPrintErrContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *PRINTLN();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *RPAREN();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtVar_decContext : public StatementContext {
  public:
    StmtVar_decContext(StatementContext *ctx);

    Var_declarationContext *var_declaration();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtIfElseContext : public StatementContext {
  public:
    StmtIfElseContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    antlr4::tree::TerminalNode *ELSE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtPrintContext : public StatementContext {
  public:
    StmtPrintContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *PRINTLN();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtForContext : public StatementContext {
  public:
    StmtForContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<Expression_statementContext *> expression_statement();
    Expression_statementContext* expression_statement(size_t i);
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    StatementContext *statement();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtIdContext : public StatementContext {
  public:
    StmtIdContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *COLON();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtGotoContext : public StatementContext {
  public:
    StmtGotoContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *GOTO();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtCmpd_stmtContext : public StatementContext {
  public:
    StmtCmpd_stmtContext(StatementContext *ctx);

    Compound_statementContext *compound_statement();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtExpr_stmtContext : public StatementContext {
  public:
    StmtExpr_stmtContext(StatementContext *ctx);

    Expression_statementContext *expression_statement();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtReturnErrContext : public StatementContext {
  public:
    StmtReturnErrContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *RETURN();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StmtIfContext : public StatementContext {
  public:
    StmtIfContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    StatementContext *statement();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StatementContext* statement();

  class  Expression_statementContext : public antlr4::ParserRuleContext {
  public:
    Expression_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Expression_statementContext() = default;
    void copyFrom(Expression_statementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Expr_stmtSemicolonContext : public Expression_statementContext {
  public:
    Expr_stmtSemicolonContext(Expression_statementContext *ctx);

    antlr4::tree::TerminalNode *SEMICOLON();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_stmtExprSemicolonContext : public Expression_statementContext {
  public:
    Expr_stmtExprSemicolonContext(Expression_statementContext *ctx);

    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_stmtExprContext : public Expression_statementContext {
  public:
    Expr_stmtExprContext(Expression_statementContext *ctx);

    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Expression_statementContext* expression_statement();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    VariableContext() = default;
    void copyFrom(VariableContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  VarThirdContext : public VariableContext {
  public:
    VarThirdContext(VariableContext *ctx);

    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LTHIRD();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RTHIRD();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VarIdContext : public VariableContext {
  public:
    VarIdContext(VariableContext *ctx);

    antlr4::tree::TerminalNode *ID();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  VariableContext* variable();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpressionContext() = default;
    void copyFrom(ExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ExprVarContext : public ExpressionContext {
  public:
    ExprVarContext(ExpressionContext *ctx);

    VariableContext *variable();
    antlr4::tree::TerminalNode *ASSIGNOP();
    Logic_expressionContext *logic_expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprLogicContext : public ExpressionContext {
  public:
    ExprLogicContext(ExpressionContext *ctx);

    Logic_expressionContext *logic_expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExpressionContext* expression();

  class  Logic_expressionContext : public antlr4::ParserRuleContext {
  public:
    Logic_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Logic_expressionContext() = default;
    void copyFrom(Logic_expressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  LogicRelRelContext : public Logic_expressionContext {
  public:
    LogicRelRelContext(Logic_expressionContext *ctx);

    std::vector<Rel_expressionContext *> rel_expression();
    Rel_expressionContext* rel_expression(size_t i);
    antlr4::tree::TerminalNode *LOGICOP();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LogicRelAssignContext : public Logic_expressionContext {
  public:
    LogicRelAssignContext(Logic_expressionContext *ctx);

    Rel_expressionContext *rel_expression();
    antlr4::tree::TerminalNode *LOGICOP();
    antlr4::tree::TerminalNode *ASSIGNOP();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LogciRelContext : public Logic_expressionContext {
  public:
    LogciRelContext(Logic_expressionContext *ctx);

    Rel_expressionContext *rel_expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Logic_expressionContext* logic_expression();

  class  Rel_expressionContext : public antlr4::ParserRuleContext {
  public:
    Rel_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Rel_expressionContext() = default;
    void copyFrom(Rel_expressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  RelSimpleSimpleContext : public Rel_expressionContext {
  public:
    RelSimpleSimpleContext(Rel_expressionContext *ctx);

    std::vector<Simple_expressionContext *> simple_expression();
    Simple_expressionContext* simple_expression(size_t i);
    antlr4::tree::TerminalNode *RELOP();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RelSimpleContext : public Rel_expressionContext {
  public:
    RelSimpleContext(Rel_expressionContext *ctx);

    Simple_expressionContext *simple_expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RelSimpleRelAssignContext : public Rel_expressionContext {
  public:
    RelSimpleRelAssignContext(Rel_expressionContext *ctx);

    Simple_expressionContext *simple_expression();
    antlr4::tree::TerminalNode *RELOP();
    antlr4::tree::TerminalNode *ASSIGNOP();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Rel_expressionContext* rel_expression();

  class  Simple_expressionContext : public antlr4::ParserRuleContext {
  public:
    Simple_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Simple_expressionContext() = default;
    void copyFrom(Simple_expressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SimpleTermContext : public Simple_expressionContext {
  public:
    SimpleTermContext(Simple_expressionContext *ctx);

    TermContext *term();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleSimpleTermContext : public Simple_expressionContext {
  public:
    SimpleSimpleTermContext(Simple_expressionContext *ctx);

    Simple_expressionContext *simple_expression();
    antlr4::tree::TerminalNode *ADDOP();
    TermContext *term();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleSimpleAddContext : public Simple_expressionContext {
  public:
    SimpleSimpleAddContext(Simple_expressionContext *ctx);

    Simple_expressionContext *simple_expression();
    antlr4::tree::TerminalNode *ADDOP();
    antlr4::tree::TerminalNode *ASSIGNOP();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Simple_expressionContext* simple_expression();
  Simple_expressionContext* simple_expression(int precedence);
  class  TermContext : public antlr4::ParserRuleContext {
  public:
    TermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TermContext() = default;
    void copyFrom(TermContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TermUnaryContext : public TermContext {
  public:
    TermUnaryContext(TermContext *ctx);

    Unary_expressionContext *unary_expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TermTermContext : public TermContext {
  public:
    TermTermContext(TermContext *ctx);

    TermContext *term();
    antlr4::tree::TerminalNode *MULOP();
    Unary_expressionContext *unary_expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TermTermMulAssignContext : public TermContext {
  public:
    TermTermMulAssignContext(TermContext *ctx);

    TermContext *term();
    antlr4::tree::TerminalNode *MULOP();
    antlr4::tree::TerminalNode *ASSIGNOP();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  TermContext* term();
  TermContext* term(int precedence);
  class  Unary_expressionContext : public antlr4::ParserRuleContext {
  public:
    Unary_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Unary_expressionContext() = default;
    void copyFrom(Unary_expressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  UnaryNotContext : public Unary_expressionContext {
  public:
    UnaryNotContext(Unary_expressionContext *ctx);

    antlr4::tree::TerminalNode *NOT();
    Unary_expressionContext *unary_expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnaryFactorContext : public Unary_expressionContext {
  public:
    UnaryFactorContext(Unary_expressionContext *ctx);

    FactorContext *factor();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnaryAddContext : public Unary_expressionContext {
  public:
    UnaryAddContext(Unary_expressionContext *ctx);

    antlr4::tree::TerminalNode *ADDOP();
    Unary_expressionContext *unary_expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Unary_expressionContext* unary_expression();

  class  FactorContext : public antlr4::ParserRuleContext {
  public:
    FactorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FactorContext() = default;
    void copyFrom(FactorContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  FactorIncopContext : public FactorContext {
  public:
    FactorIncopContext(FactorContext *ctx);

    VariableContext *variable();
    antlr4::tree::TerminalNode *INCOP();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FactorDecopContext : public FactorContext {
  public:
    FactorDecopContext(FactorContext *ctx);

    VariableContext *variable();
    antlr4::tree::TerminalNode *DECOP();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FactorIntContext : public FactorContext {
  public:
    FactorIntContext(FactorContext *ctx);

    antlr4::tree::TerminalNode *CONST_INT();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FactorParenContext : public FactorContext {
  public:
    FactorParenContext(FactorContext *ctx);

    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FactorFloatContext : public FactorContext {
  public:
    FactorFloatContext(FactorContext *ctx);

    antlr4::tree::TerminalNode *CONST_FLOAT();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FactorVarContext : public FactorContext {
  public:
    FactorVarContext(FactorContext *ctx);

    VariableContext *variable();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FactorIdContext : public FactorContext {
  public:
    FactorIdContext(FactorContext *ctx);

    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LPAREN();
    Argument_listContext *argument_list();
    antlr4::tree::TerminalNode *RPAREN();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FactorContext* factor();

  class  Argument_listContext : public antlr4::ParserRuleContext {
  public:
    Argument_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ArgumentsContext *arguments();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Argument_listContext* argument_list();

  class  ArgumentsContext : public antlr4::ParserRuleContext {
  public:
    ArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ArgumentsContext() = default;
    void copyFrom(ArgumentsContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ArgsArgsContext : public ArgumentsContext {
  public:
    ArgsArgsContext(ArgumentsContext *ctx);

    ArgumentsContext *arguments();
    antlr4::tree::TerminalNode *COMMA();
    Logic_expressionContext *logic_expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArgsLogicContext : public ArgumentsContext {
  public:
    ArgsLogicContext(ArgumentsContext *ctx);

    Logic_expressionContext *logic_expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ArgumentsContext* arguments();
  ArgumentsContext* arguments(int precedence);

  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool programSempred(ProgramContext *_localctx, size_t predicateIndex);
  bool parameter_listSempred(Parameter_listContext *_localctx, size_t predicateIndex);
  bool declaration_listSempred(Declaration_listContext *_localctx, size_t predicateIndex);
  bool statementsSempred(StatementsContext *_localctx, size_t predicateIndex);
  bool simple_expressionSempred(Simple_expressionContext *_localctx, size_t predicateIndex);
  bool termSempred(TermContext *_localctx, size_t predicateIndex);
  bool argumentsSempred(ArgumentsContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

