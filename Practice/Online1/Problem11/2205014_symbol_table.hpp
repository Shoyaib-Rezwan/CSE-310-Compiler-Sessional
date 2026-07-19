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
            scopeTable->setParent(current);
        current = scopeTable;
        cout << "\tScopeTable# " << uniqueNumber << " created\n";
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
    int getCurrentScope()
    {
        if (current == nullptr)
            return -1;
        else
            return current->getUniqueNumber();
    }
    void promote(const string key)
    {
        unsigned int bucket;
        int position, scope;
        SymbolInfo *result = lookUp(key, bucket, position, scope);
        ScopeTable *root = current;

        while (root->getUniqueNumber() != 1)
        {
            root = root->getParent();
        }

        if (!result)
        {
            cout << "\t'" << key << "' not found in any of the ScopeTables\n";
            return;
        }

        if (scope == 1)
        {
            cout << "\tPromotion failed: '" << key << "' already exists in the root ScopeTable\n";
            return;
        }

        if (current == root)
        {
            cout << "Promotion skipped: '" << key << "' is already in the root ScopeTable\n";
            return;
        }

        // fetch the type
        ScopeTable *temp = current;
        while (temp->getUniqueNumber() != scope)
        {
            temp = temp->getParent();
        }
        SymbolInfo *bucketPtr = temp->getBuckets()[bucket - 1];
        while (bucketPtr->getName() != key)
        {
            bucketPtr = bucketPtr->getNext();
        }
        string type = bucketPtr->getType();
        unsigned int t1;
        int t2;
        temp->Delete(key, t1, t2, t2);
        bucketPtr = root->getBuckets()[bucket - 1];
        if (bucketPtr == nullptr)
        {
            root->getBuckets()[bucket - 1] = new SymbolInfo(key, type);
            position = 1;
        }
        else
        {
            position = 2;
            while (bucketPtr->getNext())
            {
                bucketPtr = bucketPtr->getNext();
                position++;
            }
            bucketPtr->setNext(new SymbolInfo(key, type));
        }
        cout << "\tPromoted '" << key << "' from ScopeTable# " << scope << " to global ScopeTable# 1\n";
    }
};