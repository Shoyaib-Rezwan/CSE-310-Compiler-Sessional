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

    void flatten()
    {
        if (current == nullptr)
            return;

        if (current->getUniqueNumber() == 1)
        {
            cout << "\tAlready at root scope. Cannot flatten chain.\n";
            return;
        }

        ScopeTable *root = current;

        while (root->getUniqueNumber() != 1)
        {
            root = root->getParent();
        }

        while (current != root)
        {
            SymbolInfo **buckets = current->getBuckets();
            int bucket = current->getBucketSize();
            for (int i = 0; i < bucket; i++)
            {
                SymbolInfo *temp = buckets[i];
                while (temp != nullptr)
                {
                    string key = temp->getName();
                    string type = temp->getType();
                    int bucketNo = HashFunction::SDBMHash(key, root->getBucketSize());
                    SymbolInfo **rootBuckets = root->getBuckets();
                    SymbolInfo *temp2 = rootBuckets[bucketNo];

                    if (temp2 == nullptr || temp2->getName() == key)
                    {
                        if (!temp2)
                            rootBuckets[bucketNo] = new SymbolInfo(key, type);
                        else
                            temp2->setType(type);

                        cout << "\tMoved '" << key << "' from ScopeTable# " << current->getUniqueNumber() << " to ScopeTable# 1 at position " << bucketNo + 1 << ", " << 1 << "\n";
                    }
                    else
                    {
                        int position = 1;
                        bool overwrite = false;
                        while (temp2->getNext() != nullptr)
                        {
                            if (temp2->getName() == key)
                            {
                                temp2->setType(type);
                                overwrite = true;
                                break;
                            }
                            position++;
                        }
                        if (!overwrite)
                        {
                            temp2->setNext(new SymbolInfo(key, type));
                            position++;
                        }
                        cout << "\tMoved '" << key << "' from ScopeTable# " << current->getUniqueNumber() << " to ScopeTable# 1 at position " << bucketNo + 1 << ", " << position << "\n";
                    }
                    temp = temp->getNext();
                }
            }
            cout << "\tScopeTable# " << exitScope() << " removed\n";
        }
    }
};