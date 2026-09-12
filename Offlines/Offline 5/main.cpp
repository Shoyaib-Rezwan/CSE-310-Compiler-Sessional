#include <iostream>
#include <fstream>
#include <string>
#include "antlr4-runtime.h"
#include "CSubset_2205014Lexer.h"
#include "CSubset_2205014Parser.h"
#include "CSubset_2205014.h" // Logging & Semantic Pass
#include "ICG_2205014.h"     // ICG Pass
#include "Optimizer_2205014.h"

using namespace antlr4;
using namespace std;

ofstream lexLogFile;
ofstream logFile;
ofstream errorFile;
ofstream asmFile;
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

    // ----- PASS 1: Semantic Analysis and Logging -----
    logFile.open("logFile.txt", ios::out);
    errorFile.open("errorFile.txt", ios::out);

    table = new SymbolTable(30);
    table->enterScope();

    CSubset_2205014 c;
    c.visit(tree);

    int errorsFound = c.getErrorCnt();

    logFile.close();
    errorFile.close();

    // ----- PASS 2: Intermediate Code Generation (ICG) -----
    if (errorsFound == 0)
    {
        cout << "No semantic errors found. Proceeding to ICG." << endl;

        // Reset the symbol table completely for the second AST traversal pass
        delete table;
        table = new SymbolTable(30);
        table->enterScope();

        asmFile.open("code.asm", ios::out);

        ICG_2205014 icg;
        icg.visit(tree);

        asmFile.close();

        Optimizer_2205014 optimizer;
        optimizer.optimize("code.asm", "optcode.asm");

        cout << "ICG and optimization completed." << endl;
    }
    else
    {
        cout << errorsFound << " error(s) found during semantic analysis. Skipping ICG." << endl;
    }

    inputFile.close();
    return 0;
}