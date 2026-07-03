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
    void split(const string type)
    {
        if (current == nullptr)
            return;
        SymbolInfo **buckets = current->getBuckets();
        ScopeTable *newTable = nullptr;
        int bucket = current->getBucketSize();
        bool found = false;
        for (int i = 0; i < bucket; i++)
        {
            SymbolInfo *temp = buckets[i];
            while (temp != nullptr)
            {
                if (temp->getType() == type)
                {
                    if (!found)
                    {
                        found = true;
                        newTable = new ScopeTable(bucket, uniqueNumber++, current);
                        cout << "ScopeTable# " << uniqueNumber - 1 << "created via selective split\n";
                    }
                    SymbolInfo **newBuckets = newTable->getBuckets();
                    int BucketNo = HashFunction::SDBMHash(temp->getName(), bucket);
                    if (newBuckets[BucketNo] == nullptr)
                    {
                        newBuckets[BucketNo] = new SymbolInfo(temp->getName(), type);
                        cout << "\tMoved '" << temp->getName() << "' to ScopeTable# " << uniqueNumber - 1 << " at position " << BucketNo + 1 << ", " << 1 << "\n";
                    }
                    else
                    {
                        int position = 2;
                        SymbolInfo *temp2 = newBuckets[BucketNo];
                        while (temp2->getNext() != nullptr)
                        {
                            temp2 = temp2->getNext();
                            position++;
                        }
                        temp2->setNext(new SymbolInfo(temp->getName(), type));
                        newBuckets[BucketNo] = new SymbolInfo(temp->getName(), type);
                        cout << "\tMoved '" << temp->getName() << "' to ScopeTable# " << uniqueNumber - 1 << " at position " << BucketNo + 1 << ", " << position << "\n";
                    }
                }
                temp = temp->getNext();
            }
        }
        if(found)
        {
            current=newTable;
        }
    }
};