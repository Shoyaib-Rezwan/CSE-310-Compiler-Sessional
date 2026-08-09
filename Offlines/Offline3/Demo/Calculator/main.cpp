#include <iostream>
#include <fstream>
#include "antlr4-runtime.h"
#include "calculatorLexer.h"
#include "calculatorParser.h"
#include "calculator.h"

using namespace antlr4;
using namespace tree;
using namespace std;

int main(int argc, const char *argv[])
{
    ifstream inputFile(argv[1]);
    ANTLRInputStream input(inputFile);
    calculatorLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    calculatorParser parser(&tokens);

    ParseTree *tree = parser.start();

    calculator c;
    int result = any_cast<int>(c.visit(tree));
    cout << "result: " << result << "\n";
    
    inputFile.close();
    cout << "Parsing completed" << endl;

    return 0;
}
