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
    void rename(const string oldKey, const string newKey)
    {
        if (current == nullptr)
            return;
        unsigned int bucket;
        int position, uniqueNumber;

        SymbolInfo *pointer2 = current->lookUp(newKey, bucket, position, uniqueNumber);
        if (pointer2 != nullptr)
        {
            cout << "\tRename failed: '" << newKey << "' already exists in the current ScopeTable\n";
            return;
        }

        SymbolInfo *pointer = current->lookUp(oldKey, bucket, position, uniqueNumber);
        if (pointer == nullptr)
        {
            cout << "\t'" << oldKey << "' not found in the current ScopeTable\n";
            return;
        }

        SymbolInfo **buckets = current->getBuckets();

        SymbolInfo *temp = buckets[bucket - 1];
        if (temp == pointer)
        {
            buckets[bucket - 1] = temp->getNext();
        }
        else
        {
            while (temp->getNext() != pointer)
            {
                temp = temp->getNext();
            }
            temp->setNext(pointer->getNext());
        }

        pointer->setNext(nullptr);

        pointer->setName(newKey);

        bucket = HashFunction::SDBMHash(newKey, current->getBucketSize());

        temp = buckets[bucket];

        if (temp == nullptr)
        {
            buckets[bucket] = pointer;
        }
        else
        {
            while (temp->getNext())
            {
                temp = temp->getNext();
            }

            temp->setNext(pointer);
        }
        cout << "\t'" << oldKey << "' renamed to '" << newKey << "' and rehashed into bucket " << bucket + 1 << "\n";
    }
};