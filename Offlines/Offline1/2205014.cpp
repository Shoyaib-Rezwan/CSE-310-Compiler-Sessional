#include "2205014_symbol_table.hpp"
#include <sstream>

void handleCommands(int bucketSize, SymbolTable *symbolTable)
{
    int cmdNo = 1;
    string line;
    string cmd, key, type;
    while (getline(cin, line))
    {
        if (line.empty())
            continue;
        stringstream stream(line);
        stream >> cmd;

        // skip commands that are invalid
        if (!(cmd == "I" || cmd == "L" || cmd == "S" || cmd == "E" || cmd == "Q" || cmd == "P" || cmd == "D"))
        {
            continue;
        }
        if (cmd == "P")
        {
            if (!(stream >> key) || stream >> type || !(key == "A" || key == "C"))
                continue;
        }
        if (cmd == "E")
        {
            // skip the attempt to delete the root scope
            if (symbolTable->getCurrentScope() == 1 || symbolTable->getCurrentScope() == -1)
            {
                continue;
            }
        }
        cout << "Cmd " << cmdNo << ": " << line << '\n';

        if (cmd == "I")
        {
            if (!(stream >> key) || !(stream >> type))
            {
                cout << "\tNumber of parameters mismatch for the command I\n";
                cmdNo++;
                continue;
            }
            if (type == "FUNCTION")
            {
                string temp = "";
                if (!(stream >> temp))
                {
                    cout << "\tYou must specify the return type of a function\n";
                    cmdNo++;
                    continue;
                }
                type.append("," + temp);
                type.append("<==(");
                while (stream >> temp)
                {
                    type.append(temp);
                    type.append(",");
                }
                if (*(type.end() - 1) == ',')
                    type.pop_back();
                type.append(")");
            }
            else if (type == "STRUCT" || type == "UNION")
            {
                type.append(",{");
                string temp1 = "", temp2 = "";
                bool invalid = false; // invalid tracks whether variable and their type comes in pair
                while (stream >> temp1)
                {
                    if (!(stream >> temp2))
                    {
                        cout << "\tEvery Struct or Union member must be specified with their type\n";
                        cmdNo++;
                        invalid = true;
                        break;
                    }
                    type.append("(");
                    type.append(temp1);
                    type.append(",");
                    type.append(temp2);
                    type.append("),");
                }
                if (invalid)
                    continue;
                if (*(type.end() - 1) == ',')
                    type.pop_back();
                type.append("}");
            }
            else
            {
                string temp;
                if (stream >> temp)
                {
                    cout << "\tNumber of parameters mismatch for the command I\n";
                    cmdNo++;
                    continue;
                }
            }
            if (!symbolTable->insert(key, type))
                cout << "\t'" << key << "' already exists in the current ScopeTable\n";
        }

        else if (cmd == "P")
        {
            // for P the key is already extracted during validity check
            if (key == "C")
            {
                symbolTable->printCurrentScope();
            }

            else if (key == "A")
            {
                symbolTable->printAllScopes();
            }
        }

        else if (cmd == "L")
        {
            if (!(stream >> key) || stream >> type)
            {
                cout << "\tNumber of parameters mismatch for the command L\n";
                cmdNo++;
                continue;
            }
            unsigned int bucket = 0;
            int position = 0, uniqueNumber = 0;
            SymbolInfo *result = symbolTable->lookUp(key, bucket, position, uniqueNumber);
            if (result == nullptr)
            {
                cout << "\t'" << key << "' not found in any of the ScopeTables\n";
            }
            else
            {
                cout << "\t'" << key << "' found in ScopeTable# " << uniqueNumber << " at position " << bucket << ", " << position << "\n";
            }
        }
        else if (cmd == "S")
        {
            if (stream >> key)
            {
                cout << "\tNumber of parameters mismatch for the command S\n";
                cmdNo++;
                continue;
            }
            symbolTable->enterScope();
        }
        else if (cmd == "D")
        {
            if (!(stream >> key) || stream >> type)
            {
                cout << "\tNumber of parameters mismatch for the command D\n";
                cmdNo++;
                continue;
            }
            unsigned int bucket = 0;
            int position = 0, uniqueNumber = 0;
            if (!symbolTable->remove(key, bucket, position, uniqueNumber))
                cout << "\tNot found in the current ScopeTable\n";
            else
                cout << "\tDeleted '" << key << "' from ScopeTable# " << uniqueNumber << " at position " << bucket << ", " << position << "\n";
        }
        else if (cmd == "E")
        {
            if (stream >> key)
            {
                cout << "\tNumber of parameters mismatch for the command E\n";
                cmdNo++;
                continue;
            }
            int uniqueNumber = symbolTable->exitScope();
            if (uniqueNumber != -1)
            {
                cout << "\tScopeTable# " << uniqueNumber << " removed\n";
            }
            else
            {
                // neglect the root scope
                continue;
            }
        }
        else if (cmd == "Q")
        {
            delete symbolTable;
            return;
        }

        cmdNo++;
    }
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        cout << "Invalid command line argument\n";
        return -1;
    }
    freopen(argv[1], "r", stdin);
    freopen(argv[2], "w", stdout);
    int bucketSize;
    cin >> bucketSize;
    cin.ignore();
    SymbolTable *symbolTable = new SymbolTable(bucketSize);
    symbolTable->enterScope();
    handleCommands(bucketSize, symbolTable);
}