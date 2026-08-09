lexer grammar Lexer;

INT : [0-9]+ ;

WHITESPACE : [ \t\r\n]+ -> skip ;

PLUS : '+' ;

TIMES : '*' ;

LPAREN : '(' ;

RPAREN : ')' ;
