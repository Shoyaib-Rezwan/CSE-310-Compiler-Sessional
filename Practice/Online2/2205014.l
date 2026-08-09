%option noyywrap

%x CONST_CHAR_TOKENIZER
%x STRING_TOKENIZER
%x SINGLE_LINE_COMMENT_TOKENIZER
%x MULTI_LINE_COMMENT_TOKENIZER
%x DEFINE_TOKENIZER
%x INCLUDE_TOKENIZER

%{
#include "temp.cpp"

%}

WHITESPACE  [ \t\v\f\r]+

KEYWORD     "if"|"else"|"goto"|"for"|"while"|"long"|"do"|"break"|"short"|"int"|"char"|"static"|"float"|"double"|"unsigned"|"void"|"return"|"switch"|"case"|"default"|"continue"

INCOP       "++"|"--"

ADDOP       "+"|"-"

MULOP       "*"|"/"|"%"

RELOP       "<="|">="|"<"|">"|"=="|"!="

ASSIGNOP    "="

LOGICOP     "&&"|"||"

NOT         "!"

LPAREN      "("

RPAREN      ")"

LCURL       "{"

RCURL       "}"

LTHIRD      "["

RTHIRD      "]"

COMMA       ","

SEMICOLON   ";"

ID          [_a-zA-Z][_a-zA-Z0-9]*

OCTAL 0[0-7]+

HEXADECIMAL 0[Xx]([0-9A-Fa-f]+_?)*[0-9A-Fa-f]

HEXADECIMAL_FLOAT 0[Xx](([0-9A-Fa-f]+_?)*[0-9A-Fa-f])*\.([0-9A-Fa-f]+_?)+([Pp][+-]?{CONST_INT})?

HEXADECIMAL_ESCAPE \\x[0-9A-Fa_f]{2}

CONST_INT   ([0-9]+_?)*[0-9]

CONST_FLOAT {CONST_INT}*\.{CONST_INT}(E[+-]?{CONST_INT})?|{CONST_INT}E[+-]?{CONST_INT}

MULTI_DECIMAL_POINT [0-9]*(\.[0-9]*){2,}(E[+-]?[0-9]+)?

ILL_FORMED_NUMBER (([0-9]+)|([0-9]*\.[0-9]+))E[+-]?[0-9]*\.[0-9]+

INVALID_ID_SUFFIX ({CONST_INT}|{CONST_FLOAT}){ID}

ESCAPE_CHARACTERS "\\n"|"\\t"|"\\\\"|"\\a"|"\\f"|"\\r"|"\\b"|"\\v"|"\\0"|"\\'"|"\\\""

RAW_STRING R\"\(.*\)\"

SINGLE_QUOTE "\'"

DOUBLE_QUOTE "\""

DOUBLE_FORWARD_SLASH "//"

FORWARD_SLASH_STAR "/*"

STAR_FORWARD_SLASH "*/"

IGNORE_ESCAPES "\\"|"\n"

MULTI_CHAR_CONSTANT '([^\n\\]|{ESCAPE_CHARACTERS}){2,}'

EMPTY_CHAR  ''

BITOP "&"|"^"|"~"|"<<"|">>"|"|"

COMPOUND_ASSIGN "+="|"-="|"*="|"/="|"%="|"&="|"<<="|">>="

DEFINE "#define"

INCLUDE "#include"
%%
{WHITESPACE} {} 

{KEYWORD} {handleFileWriting(generateKEYWORDToken(yytext));}

{INCOP} {handleFileWriting(new TokenDetails("INCOP", yytext));}

{ADDOP} {handleFileWriting(new TokenDetails("ADDOP", yytext));}

{MULOP} {handleFileWriting(new TokenDetails("MULOP", yytext));}

{RELOP} {handleFileWriting(new TokenDetails("RELOP", yytext));}

{ASSIGNOP} {handleFileWriting(new TokenDetails("ASSIGNOP", yytext));}

{LOGICOP} {handleFileWriting(new TokenDetails("LOGICOP", yytext));}

{NOT} {handleFileWriting(new TokenDetails("NOT", yytext));}

{LPAREN} {countParen++; handleFileWriting(new TokenDetails("LPAREN", yytext));}

{RPAREN} {
    cout<<countParen;
    countParen--;
    if(countParen<0)
    {handleErrorLogging("Unmatched closing parenthesis or Unmatched closing brace", yytext, 1);
    countParen=0;
    }
    else
    handleFileWriting(new TokenDetails("RPAREN", yytext));
}

{LCURL} {countCurly++; handleFileWriting(generateLCURLToken());}

{RCURL} {
    countCurly--;
    if(countCurly<0)
    {handleErrorLogging("Unmatched closing parenthesis or Unmatched closing brace", yytext, 1);
    countCurly=0;
    }
    else
    handleFileWriting(generateRCURLToken());
    }

{LTHIRD} {handleFileWriting(new TokenDetails("LTHIRD", yytext));}

{RTHIRD} {handleFileWriting(new TokenDetails("RTHIRD", yytext));}

{COMMA} {handleFileWriting(new TokenDetails("COMMA", yytext));}

{SEMICOLON} {handleFileWriting(new TokenDetails("SEMICOLON", yytext));}

{HEXADECIMAL} {handleFileWriting(generateHEXADECIMALToken(yytext));}

{CONST_INT}|{OCTAL} {handleFileWriting(generateIDCONSTToken("CONST_INT",yytext));}

{CONST_FLOAT}|{HEXADECIMAL_FLOAT} {handleFileWriting(generateIDCONSTToken("CONST_FLOAT",yytext));}

{ID}  {
    if(strlen(yytext)>31)
    {
        handleErrorLogging("Identifier length exceed!", yytext, 1);
    }
    else
    handleFileWriting(generateIDCONSTToken("ID",yytext));
}

{RAW_STRING} {
    string str=yytext;
    handleFileWriting(new TokenDetails("STRING", str.substr(3, str.size()-5)));
    }

{DEFINE} {
    curr_scanned_str="";
    BEGIN DEFINE_TOKENIZER;
}

<DEFINE_TOKENIZER>{
\n { handleFileWriting(new TokenDetails("DEFINE", curr_scanned_str));
lineCount++;
BEGIN INITIAL;
}
<<EOF>> {handleFileWriting(new TokenDetails("DEFINE", curr_scanned_str));
BEGIN INITIAL;}
. {curr_scanned_str+=yytext;}

}
{INCLUDE} {
    BEGIN INCLUDE_TOKENIZER;
}
<INCLUDE_TOKENIZER>
{
WHITESPACE {}
"<"[^>\n]+">" {
    handleFileWriting(generateINCLUDEToken(yytext));
    BEGIN INITIAL;    
}

}
{SINGLE_QUOTE} {
curr_char_str="";
BEGIN CONST_CHAR_TOKENIZER;
}

<CONST_CHAR_TOKENIZER>{
   
{SINGLE_QUOTE} {
if(validEscape==true)
handleFileWriting(generateCONST_CHARToken());
else
handleErrorLogging("Invalid escape character", "\'"+curr_char_str+"\'",2);
validEscape=true;
BEGIN INITIAL;}

{HEXADECIMAL_ESCAPE} {
    curr_char_str+=yytext;
}

{ESCAPE_CHARACTERS} {
    curr_char_str+=yytext;
}

\n {
    handleErrorLogging(errMsg5, "\'"+curr_char_str, 2);
    lineCount++;
    BEGIN INITIAL;
}

\\. {
    curr_char_str+=yytext;
    validEscape=false;
}

<<EOF>> {
    handleErrorLogging(errMsg5, "\'"+curr_char_str, 2);
    BEGIN INITIAL;
}

. {curr_char_str+=yytext;}
}

{DOUBLE_QUOTE} {
    tokenLineCount=1;
    curr_scanned_str="\"";
    curr_replaced_str="";
    BEGIN STRING_TOKENIZER;
}

<STRING_TOKENIZER>{

{DOUBLE_QUOTE} {
    curr_scanned_str+=yytext;
    tokenLineCount=0;
    handleFileWriting(generateSTRINGToken());
    BEGIN INITIAL;
}

\\\n {
    tokenLineCount++;
    curr_scanned_str+=yytext;
    lineCount++;
}

\\\"\n {
    curr_scanned_str+="\\\"";
    handleErrorLogging(errMsg9, curr_scanned_str, 1);
    lineCount++;
    tokenLineCount=0;
    BEGIN INITIAL;
}

<<EOF>> {
    handleErrorLogging(errMsg9, curr_scanned_str, 1);
    tokenLineCount=0;
    BEGIN INITIAL;
}

\n {
    handleErrorLogging(errMsg9, curr_scanned_str, 1);
    lineCount++;
    tokenLineCount=0;
    BEGIN INITIAL;
}

{HEXADECIMAL_ESCAPE} {
    curr_scanned_str+=yytext;
    curr_replaced_str+=getActualCharacter(yytext);
}

{ESCAPE_CHARACTERS}  {curr_scanned_str+=yytext;
    curr_replaced_str+= getActualCharacter(yytext);
}


. {curr_scanned_str+=yytext; curr_replaced_str+=yytext;}
}

{DOUBLE_FORWARD_SLASH} {
    back_slash_encounter=false;
    curr_scanned_str="//";
    BEGIN SINGLE_LINE_COMMENT_TOKENIZER;
} 

<SINGLE_LINE_COMMENT_TOKENIZER>{

"\\" {back_slash_encounter=true;curr_scanned_str+=yytext;}

"\n" {
    if(back_slash_encounter)
    {
        curr_scanned_str+=yytext;
        lineCount++;
        back_slash_encounter=false;
    }
    else{
        handleFileWriting(new TokenDetails("COMMENT", curr_scanned_str));
        lineCount++;
        BEGIN INITIAL;
    }
}
. {curr_scanned_str+=yytext; back_slash_encounter=false;}

<<EOF>> {handleFileWriting(new TokenDetails("COMMENT", curr_scanned_str));
BEGIN INITIAL;}
}

{FORWARD_SLASH_STAR} {
    tokenLineCount=1;
    curr_scanned_str="/*";
    commentNest=0;
    BEGIN MULTI_LINE_COMMENT_TOKENIZER;
}

<MULTI_LINE_COMMENT_TOKENIZER>{

{STAR_FORWARD_SLASH} { curr_scanned_str+=yytext; if(commentNest==0){ 
handleFileWriting(new TokenDetails("COMMENT", curr_scanned_str));
tokenLineCount=0;
BEGIN INITIAL;}
else{
    commentNest--;
}
}

{FORWARD_SLASH_STAR} {curr_scanned_str+=yytext; commentNest++;}

\n {
    tokenLineCount++;
    curr_scanned_str+="\n";
    lineCount++;
}

<<EOF>> {
    handleErrorLogging(errMsg8, curr_scanned_str, 1);
    tokenLineCount=0;
    BEGIN INITIAL;
}

. {curr_scanned_str+=yytext;}

}

{MULTI_DECIMAL_POINT} {handleErrorLogging(errMsg1, yytext, 2);}

{ILL_FORMED_NUMBER} {handleErrorLogging(errMsg2, yytext, 2);}

{INVALID_ID_SUFFIX} {handleErrorLogging(errMsg3, yytext, 1);}

{MULTI_CHAR_CONSTANT} {handleErrorLogging(errMsg4, yytext, 2);}

{EMPTY_CHAR} {handleErrorLogging(errMsg6, yytext, 2);}

{BITOP} {handleFileWriting(new TokenDetails("BITOP", yytext));}

{COMPOUND_ASSIGN} {handleFileWriting(new TokenDetails("COMPOUND_ASSIGN", yytext));}

[\n] {lineCount++;}

. {handleErrorLogging(errMsg7, yytext, 1);}

%%

int main(int argc, char *argv[])
{

    if (argc < 2)
    {
        cout << "Please provide the name of the input file as argument\n";
        return 0;
    }

    FILE *fin;

    fin = fopen(argv[1], "r");

    if (fin == NULL)
    {
        cout << "The input file cannot be opened.\n";
        return -1;
    }

    symbolTable=new SymbolTable(7);
    symbolTable->enterScope(); // root scope
    yyin = fin;
    yylex();

    // printing all scope tables after lexical analysis is complete
    symbolTable->printAllScopes2(logofs);
    logofs<<endl;

    // printing line, error and warning counts
    logofs << "Total lines: " << lineCount << endl;
    logofs << "Total errors: " << errorCount << endl;
    // logout << "Total warnings: " << warning_count << endl;

    fclose(yyin);
    tokenofs.close();
    logofs.close();

    return 0;
}