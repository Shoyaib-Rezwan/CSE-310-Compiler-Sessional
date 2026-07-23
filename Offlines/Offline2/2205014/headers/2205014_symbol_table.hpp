#include "2205014_scope_table.hpp"
using namespace std;
class SymbolTable
{
    ScopeTable *current;
    int uniqueNumber, bucketSize;

public:
    SymbolTable(int bucketSize) : bucketSize(bucketSize)
    {
        current = nullptr;
        uniqueNumber = 1;
    }

    ~SymbolTable()
    {
        int uniqueNumber;
        uniqueNumber = exitScope();
        while (uniqueNumber != -1)
        {
            cout << "\tScopeTable# " << uniqueNumber << " removed\n";
            uniqueNumber = exitScope();
        }
        // manually delete the root scope
        delete current;
        cout << "\tScopeTable# 1 removed\n";
    }

    void enterScope()
    {
        ScopeTable *scopeTable = new ScopeTable(bucketSize, uniqueNumber);

        if (current != nullptr)
        {
            scopeTable->setParent(current);
            // added for offline 2
            current->childCount++;
            scopeTable->scopeNo = current->scopeNo + "." + to_string(current->childCount);
        }
        // added for offline 2
        else
        {
            scopeTable->scopeNo = "1"; // root scope
        }
        current = scopeTable;

        current->childCount = 0; // added for offline 2

        // cout << "\tScopeTable# " << uniqueNumber << " created\n"; //modified for offline 2
        uniqueNumber++;
    }

    int exitScope()
    {
        int uniqueNumber = -1;
        if (current != nullptr && current->getUniqueNumber() != 1)
        {
            ScopeTable *temp = current;
            current = current->getParent();
            uniqueNumber = temp->getUniqueNumber();
            delete temp;
        }
        return uniqueNumber;
    }

    bool insert(const string key, const string type)
    {
        if (current == nullptr)
            return false;
        return current->insert(key, type);
    }

    bool remove(const string key, unsigned int &bucket, int &position, int &uniqueNumber)
    {
        if (current == nullptr)
            return false;
        return current->Delete(key, bucket, position, uniqueNumber);
    }

    SymbolInfo *lookUp(const string key, unsigned int &bucket, int &position, int &uniqueNumber)
    {
        ScopeTable *temp = current;
        SymbolInfo *result = nullptr;
        while (temp != nullptr)
        {
            result = temp->lookUp(key, bucket, position, uniqueNumber);
            if (result != nullptr)
                break;
            temp = temp->getParent();
        }
        return result;
    }

    // created for offline2
    // position and bucket are now 0 indexed
    SymbolInfo *lookUp2(const string key, unsigned int &bucket, int &position, int &uniqueNumber, string &scopeNo)
    {
        ScopeTable *temp = current;
        SymbolInfo *result = nullptr;
        while (temp != nullptr)
        {
            result = temp->lookUp2(key, bucket, position, uniqueNumber, scopeNo);
            if (result != nullptr)
                break;
            temp = temp->getParent();
        }
        bucket--;
        position--;
        return result;
    }

    void printCurrentScope()
    {
        current->print(1);
    }
    void printAllScopes()
    {
        ScopeTable *temp = current;
        int tab = 1;
        while (temp != nullptr)
        {
            temp->print(tab++);
            temp = temp->getParent();
        }
    }
    // modified for offline 2
    //  only prints the buckets that have atleast one element
    void printAllScopes2(ofstream &ofs)
    {
        ScopeTable *temp = current;
        int tab = 1;
        while (temp != nullptr)
        {
            temp->print2(tab++, ofs);
            temp = temp->getParent();
        }
    }

    int getCurrentScope()
    {
        if (current == nullptr)
            return -1;
        else
            return current->getUniqueNumber();
    }
};