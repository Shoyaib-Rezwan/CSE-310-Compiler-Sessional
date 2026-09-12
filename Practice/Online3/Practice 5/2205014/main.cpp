#include <iostream>
#include <fstream>
#include <string>
#include "antlr4-runtime.h"
#include "CSubset_2205014Lexer.h"
#include "CSubset_2205014Parser.h"
#include "CSubset_2205014.h"
#include "Optimizer_2205014.h"

using namespace antlr4;
using namespace std;

ofstream lexLogFile; // used by Lexer.g4's writeIntoLexLogFile()
ofstream logFile;    // used by CSubset.h for writing logs
ofstream errorFile;  // used by CSubset.h for writing error
ofstream asmFile;    // used by CSubset.h for writing fasm
SymbolTable *table;

int main(int argc, const char *argv[])
{
    if (argc < 2)
    {
        cerr << "Usage: " << argv[0] << " <input_file>" << endl;
        return 1;
    }

    ifstream inputFile(argv[1]);
    if (!inputFile.is_open())
    {
        cerr << "Error opening input file: " << argv[1] << endl;
        return 1;
    }

    ANTLRInputStream input(inputFile);
    CSubset_2205014Lexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    CSubset_2205014Parser parser(&tokens);

    CSubset_2205014Parser::StartContext *tree = parser.start();

    cout << "Parsing completed." << endl;

    logFile.open("logFile.txt", ios::out);
    errorFile.open("errorFile.txt", ios::out);
    asmFile.open("code.asm", ios::out);
    table = new SymbolTable(30);
    table->enterScope();
    CSubset_2205014 c;
    c.visit(tree);

    inputFile.close();
    logFile.close();
    errorFile.close();
    asmFile.close();

    Optimizer_2205014 optimizer;
    optimizer.optimize("code.asm", "optcode.asm");

    return 0;
}