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

int main(int argc, char *argv[])
{

    if (argc != 2)
    {
        cout << "Sorry! Name of the input file must be provided. Please Try again." << endl;
        return 0;
    }

    FILE *fin;

    // opening input file specified in the command argument
    fin = fopen(argv[1], "r");

    if (fin == NULL)
    {
        cout << "Sorry! The input file cannot be found." << endl;
        return 0;
    }

    symbolTable = new SymbolTable(7);
    symbolTable->enterScope(); // root scope
    // yyin = fin;
    // yylex();

    // printing all scope tables after lexical analysis is complete
    symbolTable->printAllScopes2(logofs);

    // printing line, error and warning counts
    logofs << "Total lines: " << lineCount << endl;
    logofs << "Total errors: " << errorCount << endl
           << endl;
    // logout << "Total warnings: " << warning_count << endl;

    // closing the files that were opened
    // fclose(yyin);
    // tokenout.close();
    // logout.close();

    return 0;
}