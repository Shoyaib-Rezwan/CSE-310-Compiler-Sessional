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
        bool result = current->insert(key, type);
        if (result)
        {
            if (current->getKeyCount() > current->getBucketSize())
            {
                ScopeTable *newCurrent = new ScopeTable(2 * current->getBucketSize(), current->getUniqueNumber(), current->getParent());
                SymbolInfo **buckets = current->getBuckets();
                for (int i = 0; i < current->getBucketSize(); i++)
                {
                    SymbolInfo *temp = buckets[i];
                    while (temp != nullptr)
                    {
                        newCurrent->insert(temp->getName(), temp->getType(), false);
                        temp = temp->getNext();
                    }
                }
                delete current;
                current = newCurrent;
                cout << "\tRehashing ScopeTable# " << newCurrent->getUniqueNumber() << ": bucket size increased from " << current->getBucketSize() / 2 << " to " << current->getBucketSize() << "\n";
            }
        }
        return result;
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
};