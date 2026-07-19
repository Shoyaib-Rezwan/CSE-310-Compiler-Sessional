%option noyywrap

%x CONST_CHAR_TOKENIZER
%x STRING_TOKENIZER
%x SINGLE_LINE_COMMENT_TOKENIZER
%X MULTI_LINE_COMMENT_TOKENIZER

%{

#include "headers/2205014_symbol_table.hpp"
using namespace std;

unsigned int lineCount = 1;
ofstream tokenofs("2205014_token.txt");
ofstream logofs("2205014_log.txt");
SymbolTable *symbolTable;
string curr_char_str;
string curr_scanned_str;
string curr_replaced_str;
bool back_slash_encounter;

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
    return str[0];
}

TokenDetails *generateCONST_CHARToken()
{
    char ch = getActualCharacter();
    string lexeme;
    lexeme.resize(1);
    lexeme[0] = ch;
    return new TokenDetails("CONST_CHAR", lexeme);
}

void handleFileWriting(TokenDetails *tokenDetails)
{
    // token writing
    if(tokenDetails->tokenName!="COMMENT")
    tokenofs << tokenDetails->token << " ";

    // log writing
    if (tokenDetails->tokenName == "STRING")
    {
        logofs << "Line no " << lineCount << ": Token <" << tokenDetails->tokenName << "> Lexeme " << curr_scanned_str << " found--> " << tokenDetails->token<<"\n\n";
        return;
    }
    logofs << "Line no " << lineCount << ": Token <" << tokenDetails->tokenName << "> Lexeme " << tokenDetails->lexeme << " found\n\n";

    // handle special cases manually
    if (tokenDetails->lexemeExist)
    {
        unsigned int bucket;
        int position, uniqueNumber;
        symbolTable->lookUp(tokenDetails->lexeme, bucket, position, uniqueNumber);
        //< arr : ID > already exists in ScopeTable# 1.1 at position 6, 2
        logofs << "< " << tokenDetails->lexeme << " : ID > already exists in ScopeTable# " << uniqueNumber << " at position " << bucket << ", " << position << "\n\n";
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

SINGLE_QUOTE "\'"

DOUBLE_QUOTE "\""

DOUBLE_FORWARD_SLASH "//"

FORWARD_SLASH_STAR "/*"

STAR_FORWARD_SLASH "*/"

IGNORE_ESCAPES "\\"|"\n"

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

. {curr_char_str+=yytext;}
}

{DOUBLE_QUOTE} {
    curr_scanned_str="";
    curr_replaced_str="";
    back_slash_encounter=false;
    BEGIN STRING_TOKENIZER;
}

<STRING_TOKENIZER>{

{DOUBLE_QUOTE} {
    if(back_slash_encounter)
    {
        curr_scanned_str+=yytext;
        curr_replaced_str+=yytext;
        back_slash_encounter=false;
    }
    else{
    handleFileWriting(new TokenDetails("STRING", curr_replaced_str));
    BEGIN INITIAL;
    }
}

{IGNORE_ESCAPES} {curr_scanned_str+=yytext;
if(yytext[0]=='\\')
back_slash_encounter=true;
else
back_slash_encounter=false;
if(yytext[0]=='\n')
lineCount++;
}

. {curr_scanned_str+=yytext; curr_replaced_str+=yytext; back_slash_encounter=false;}
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
        BEGIN INITIAL;
    }
}
. {curr_scanned_str+=yytext; back_slash_encounter=false;}

}

{FORWARD_SLASH_STAR} {
    curr_scanned_str="/*";
    BEGIN MULTI_LINE_COMMENT_TOKENIZER;
}

<MULTI_LINE_COMMENT_TOKENIZER>{

{STAR_FORWARD_SLASH} { curr_scanned_str+=yytext; handleFileWriting(new TokenDetails("COMMENT", curr_scanned_str));
BEGIN INITIAL;
}

. {curr_scanned_str+=yytext;}

}

[\n] {lineCount++;}

. {}

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
    // ST->print_all_scope_tables();

    // printing line, error and warning counts
    // logout << "Total lines: " << line_count << endl;
    // logout << "Total errors: " << error_count << endl;
    // logout << "Total warnings: " << warning_count << endl;

    fclose(yyin);
    tokenofs.close();
    logofs.close();

    return 0;
}