%option noyywrap

%x CONST_CHAR_TOKENIZER
%x STRING_TOKENIZER
%x SINGLE_LINE_COMMENT_TOKENIZER
%X MULTI_LINE_COMMENT_TOKENIZER

%{
#include "headers/2205014_symbol_table.hpp"
using namespace std;

unsigned int lineCount = 1, errorCount = 0;
unsigned int tokenLineCount = 0; // counts lines of multiline string and comment
ofstream tokenofs("2205014_token.txt");
ofstream logofs("2205014_log.txt");
SymbolTable *symbolTable;
string curr_char_str;
string curr_scanned_str;
string curr_replaced_str;
bool back_slash_encounter;

// error messages
string errMsg1 = "Too many decimal points";
string errMsg2 = "Ill formed number";
string errMsg3 = "Invalid prefix on ID or invalid suffix on Number";
string errMsg4 = "Multi character constant error";
string errMsg5 = "Unterminated character";
string errMsg6 = "Empty character constant error";
string errMsg7 = "Unrecognized character";
string errMsg8 = "Unterminated comment";
string errMsg9 = "Unterminated string";
struct TokenDetails
{
    string tokenName, lexeme, token;
    bool lexemeExist; // this flag will be true if the lexeme already exists in symboltable
    TokenDetails(string tokenName = "", string lexeme = "")
    {
        this->tokenName = tokenName;
        this->lexeme = lexeme;
        token = "<" + tokenName + ", " + lexeme + ">";
        lexemeExist = false;
    }
};

string capitalize(string str)
{
    int len = str.size();
    string capitalStr;
    capitalStr.resize(len);
    for (int i = 0; i < len; i++)
    {
        capitalStr[i] = toupper(str[i]);
    }
    return capitalStr;
}

TokenDetails *generateKEYWORDToken(string lexeme)
{
    string tokenName = capitalize(lexeme);
    TokenDetails *tokenDetails = new TokenDetails(tokenName, lexeme);
    tokenDetails->token = "<" + tokenName + ">";
    return tokenDetails;
}

TokenDetails *generateLCURLToken()
{
    symbolTable->enterScope();
    return new TokenDetails("LCURL", "{");
}

TokenDetails *generateRCURLToken()
{
    symbolTable->exitScope();
    return new TokenDetails("RCURL", "}");
}

TokenDetails *generateIDCONSTToken(string tokenName, string lexeme)
{
    TokenDetails *tokenDetails = new TokenDetails(tokenName, lexeme);
    if (!symbolTable->insert(lexeme, tokenName))
    {
        tokenDetails->lexemeExist = true;
    }
    return tokenDetails;
}

char getActualCharacter(string str = curr_char_str)
{
    if (str == "\\n")
        return '\n';
    if (str == "\\t")
        return '\t';
    if (str == "\\\\")
        return '\\';
    if (str == "\\'")
        return '\'';
    if (str == "\\a")
        return '\a';
    if (str == "\\f")
        return '\f';
    if (str == "\\r")
        return '\r';
    if (str == "\\b")
        return '\b';
    if (str == "\\v")
        return '\v';
    if (str == "\\0")
        return '\0';
    if (str == "\\\"")
        return '"';
    return str[0];
}

TokenDetails *generateCONST_CHARToken()
{
    char ch = getActualCharacter();
    string lexeme = "\'" + curr_char_str + "\'";
    TokenDetails *token = new TokenDetails("CONST_CHAR", lexeme);
    if(!symbolTable->insert(lexeme, "CONST_CHAR"))
    {
        token->lexemeExist = true;
    }
    token->token = "<" + token->tokenName + ", " + ch + ">";
    return token;
}

TokenDetails *generateSTRINGToken()
{
    TokenDetails *tokenDetails = new TokenDetails("STRING", curr_scanned_str);
    tokenDetails->token = "<" + tokenDetails->tokenName + ", " + curr_replaced_str + ">";
    return tokenDetails;
}
void handleFileWriting(TokenDetails *tokenDetails)
{
    // token writing
    if (tokenDetails->tokenName != "COMMENT")
        tokenofs << tokenDetails->token << " ";

    // log writing
    logofs << "Line no " << lineCount << ": Token <" << tokenDetails->tokenName << "> Lexeme " << tokenDetails->lexeme << " found";

    if (tokenDetails->tokenName == "CONST_CHAR" || tokenDetails->tokenName == "STRING")
    {
        logofs << " --> " << tokenDetails->token;
    }
    logofs << "\n\n";

    // handle special cases manually
    if (tokenDetails->lexemeExist)
    {
        unsigned int bucket;
        int position, uniqueNumber;
        string scopeNo="";
        symbolTable->lookUp2(tokenDetails->lexeme, bucket, position, uniqueNumber, scopeNo);
        //< arr : ID > already exists in ScopeTable# 1.1 at position 6, 2
        logofs << "< " << tokenDetails->lexeme << " : " << tokenDetails->tokenName << " > already exists in ScopeTable# " << scopeNo << " at position " << bucket << ", " << position << "\n\n";
    }

    // if the token doesn't exist and the lexeme was inserted inside the symbol table
    //  then print the scope table
    else if (tokenDetails->tokenName == "ID" || tokenDetails->tokenName == "CONST_INT" || tokenDetails->tokenName == "CONST_FLOAT" || tokenDetails->tokenName == "CONST_CHAR")
    {
        symbolTable->printAllScopes2(logofs);
        logofs << "\n";
    }
    delete tokenDetails;
}

void handleErrorLogging(string errMsg, string lexeme, int spaceCount)
{
    errorCount++;
    int errorLine = (tokenLineCount >= 1) ? lineCount - tokenLineCount + 1 : lineCount;
    // only use the tokenLineCount whenever you are handling "multiline comment" and String errors
    tokenLineCount = 0;
    logofs << "Error at line no " << errorLine << ": " << errMsg << " " << lexeme << "\n";
    for (int i = 0; i < spaceCount; i++)
    {
        logofs << "\n";
    }
}

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

CONST_INT   [0-9]+

CONST_FLOAT [0-9]*\.{CONST_INT}(E[+-]?{CONST_INT})?|{CONST_INT}E[+-]?{CONST_INT}

MULTI_DECIMAL_POINT [0-9]*(\.[0-9]*){2,}(E[+-]?[0-9]+)?

ILL_FORMED_NUMBER (([0-9]+)|([0-9]*\.[0-9]+))E[+-]?[0-9]*\.[0-9]+

INVALID_ID_SUFFIX ({CONST_INT}|{CONST_FLOAT}){ID}

ESCAPE_CHARACTERS "\\n"|"\\t"|"\\\\"|"\\a"|"\\f"|"\\r"|"\\b"|"\\v"|"\\0"|"\\'"|"\\\""

SINGLE_QUOTE "\'"

DOUBLE_QUOTE "\""

DOUBLE_FORWARD_SLASH "//"

FORWARD_SLASH_STAR "/*"

STAR_FORWARD_SLASH "*/"

IGNORE_ESCAPES "\\"|"\n"

MULTI_CHAR_CONSTANT '([^\n\\]|{ESCAPE_CHARACTERS}){2,}'

EMPTY_CHAR  ''

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

{LPAREN} {handleFileWriting(new TokenDetails("LPAREN", yytext));}

{RPAREN} {handleFileWriting(new TokenDetails("RPAREN", yytext));}

{LCURL} {handleFileWriting(generateLCURLToken());}

{RCURL} {handleFileWriting(generateRCURLToken());}

{LTHIRD} {handleFileWriting(new TokenDetails("LTHIRD", yytext));}

{RTHIRD} {handleFileWriting(new TokenDetails("RTHIRD", yytext));}

{COMMA} {handleFileWriting(new TokenDetails("COMMA", yytext));}

{SEMICOLON} {handleFileWriting(new TokenDetails("SEMICOLON", yytext));}

{CONST_INT} {handleFileWriting(generateIDCONSTToken("CONST_INT",yytext));}

{CONST_FLOAT} {handleFileWriting(generateIDCONSTToken("CONST_FLOAT",yytext));}

{ID}  {handleFileWriting(generateIDCONSTToken("ID",yytext));}

{SINGLE_QUOTE} {
curr_char_str="";
BEGIN CONST_CHAR_TOKENIZER;
}

<CONST_CHAR_TOKENIZER>{
   
{SINGLE_QUOTE} {
handleFileWriting(generateCONST_CHARToken());
BEGIN INITIAL;}

{ESCAPE_CHARACTERS} {
    curr_char_str+=yytext;
}

\n {
    handleErrorLogging(errMsg5, "\'"+curr_char_str, 2);
    lineCount++;
    BEGIN INITIAL;
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

{ESCAPE_CHARACTERS} {curr_scanned_str+=yytext;
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
    BEGIN MULTI_LINE_COMMENT_TOKENIZER;
}

<MULTI_LINE_COMMENT_TOKENIZER>{

{STAR_FORWARD_SLASH} { curr_scanned_str+=yytext; handleFileWriting(new TokenDetails("COMMENT", curr_scanned_str));
tokenLineCount=0;
BEGIN INITIAL;
}

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