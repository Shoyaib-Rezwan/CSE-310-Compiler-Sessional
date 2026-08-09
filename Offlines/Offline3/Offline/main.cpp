#include <iostream>
#include <fstream>
#include <string>
#include "antlr4-runtime.h"
#include "CSubsetLexer.h"
#include "CSubsetParser.h"
#include "CSubset.h"

using namespace antlr4;
using namespace std;

ofstream lexLogFile; // used by Lexer.g4's writeIntoLexLogFile()
ofstream logFile;    // used by CSubset.h for writing logs
ofstream errorFile;  // used by CSubset.h for writing error
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
    CSubsetLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    CSubsetParser parser(&tokens);

    CSubsetParser::StartContext *tree = parser.start();

    cout << "Parsing completed." << endl;

    logFile.open("logFile.txt", ios::out);
    errorFile.open("errorFile.txt", ios::out);
    table = new SymbolTable(30);
    table->enterScope();
    CSubset c;
    c.visit(tree);

    inputFile.close();
    logFile.close();
    errorFile.close();
    return 0;
}
