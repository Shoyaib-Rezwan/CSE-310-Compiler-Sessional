grammar calculator;
import Lexer;

start : expression ;

expression : expression PLUS term  # Plus
	   | term                     # ExprTerm
           ;

term : term TIMES factor           # Times
| factor                           # TermFactor
     ;

factor : LPAREN expression RPAREN  # Paren
       | INT                       # FactorInt
       ;
 
