#include "headers/2205014_symbol_table.hpp"
using namespace std;

unsigned int lineCount = 1;
ofstream tokenofs("2205014_token.txt");
ofstream logofs("2205014_log.txt");
SymbolTable *symbolTable;
string curr_char_str;

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
    string lexeme = "" + ch;
    return new TokenDetails("CONST_CHAR", lexeme);
}

void handleFileWriting(TokenDetails *tokenDetails)
{
    // token writing
    tokenofs << tokenDetails->token << " ";

    // log writing
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
    // ST->print_all_scope_tables();

    // printing line, error and warning counts
    // logout << "Total lines: " << line_count << endl;
    // logout << "Total errors: " << error_count << endl;
    // logout << "Total warnings: " << warning_count << endl;

    // closing the files that were opened
    // fclose(yyin);
    // tokenout.close();
    // logout.close();

    return 0;
}