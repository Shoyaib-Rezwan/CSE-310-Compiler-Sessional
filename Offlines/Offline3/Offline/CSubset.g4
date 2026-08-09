grammar CSubset;
import Lexer;

start : program ;

program
    : program unit  # ProgProgUnit
    | unit          # ProgUnit
    ;

unit
    : var_declaration   # UnitVarDec
    | func_declaration  # UnitFuncDec
    | func_definition   # UnitFuncDef
    ;

func_declaration
    : type_specifier ID LPAREN parameter_list RPAREN SEMICOLON  # FuncDecParam
    | type_specifier ID LPAREN RPAREN SEMICOLON                 # FuncDecNoParam
    ;

func_definition
    : type_specifier ID LPAREN parameter_list RPAREN compound_statement # FuncDefParam
    | type_specifier ID LPAREN RPAREN compound_statement                # FuncDefNoParam
    ;

parameter_list
    : parameter_list COMMA type_specifier ID    # MultiParamDef
    | parameter_list COMMA type_specifier       # MultiParamDec
    | type_specifier ID                         # UniParamDef
    | type_specifier                            # UniParamDec
    ;

compound_statement
    : LCURL statements RCURL    # Cmpd_stmtStmts
    | LCURL RCURL               # Cmpd_stmtParen
    ;

var_declaration
    : type_specifier declaration_list SEMICOLON ;   

type_specifier
    : INT       # TypeInt
    | FLOAT     # TypeFloat
    | VOID      # TypeVoid
    ;

declaration_list
    : declaration_list COMMA ID                         # Dec_lstCommaID
    | declaration_list COMMA ID LTHIRD CONST_INT RTHIRD # Dec_lstCommaThird
    | ID                                                # Dec_lstID   
    | ID LTHIRD CONST_INT RTHIRD                        # Dec_lstThird
    ;

statements
    : statement                                         # StmtsStmt
    | statements statement                              # StmtsStmtsStmt
    ;

statement
    : var_declaration                                        # StmtVar_dec
    | expression_statement                                   # StmtExpr_stmt
    | IF LPAREN expression RPAREN statement ELSE statement   # StmtIf
    | WHILE LPAREN expression RPAREN statement               # StmtWhile
    | PRINTLN LPAREN ID RPAREN SEMICOLON                     # StmtPrint
    | RETURN expression SEMICOLON                            # StmtReturn
    ;

expression_statement
    : SEMICOLON             # Expr_stmtSemicolon                                                        
    | expression SEMICOLON  # Expr_stmtExprSemicolon
    ;

variable
    : ID                            # VarId
    | ID LTHIRD expression RTHIRD   # VarThird
    ;

expression
    : logic_expression                      # ExprLogic
    | variable ASSIGNOP logic_expression    # ExprVar
    ;

logic_expression
    : rel_expression                        # LogciRel
    | rel_expression LOGICOP rel_expression # LogicRelRel
    ;

rel_expression
    : simple_expression                         # RelSimple
    | simple_expression RELOP simple_expression # RelSimpleSimple
    ;

simple_expression
    : term                          # SimpleTerm
    | simple_expression ADDOP term  # SimpleSimpleTerm
    ;

term
    : unary_expression              # TermUnary
    | term MULOP unary_expression   # TermTerm
    ;

unary_expression
    : ADDOP unary_expression        # UnaryAdd
    | NOT unary_expression          # UnaryNot
    | factor                        # UnaryFactor
    ;

factor
    : variable                          # FactorVar
    | ID LPAREN argument_list RPAREN    # FactorId
    | LPAREN expression RPAREN          # FactorParen
    | CONST_INT                         # FactorInt
    | CONST_FLOAT                       # FactorFloat
    | variable INCOP                    # FactorIncop
    | variable DECOP                    # FactorDecop
    ;

argument_list
    : arguments
    |
    ;

arguments
    : arguments COMMA logic_expression  # ArgsArgs
    | logic_expression                  # ArgsLogic
    ;
