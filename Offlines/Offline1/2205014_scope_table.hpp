#include "2205014_symbol_info.hpp"
using namespace std;

class HashFunction
{
public:
    static unsigned int SDBMHash(string str, unsigned int num_buckets)
    {
        unsigned int hash = 0;
        unsigned int len = str.length();
        for (unsigned int i = 0; i < len; i++)
        {
            hash = ((str[i]) + (hash << 6) + (hash << 16) - hash) % num_buckets;
        }
        return hash;
    }
};

class ScopeTable
{
    int bucketSize, uniqueNumber;
    ScopeTable *parent_scope;
    SymbolInfo **buckets;

    void printTab(int tab)
    {
        for (int i = 0; i < tab; i++)
        {
            cout << '\t';
        }
    }

public:
    ScopeTable(int bucketSize, int uniqueNumber, ScopeTable *parent_scope = nullptr) : bucketSize(bucketSize), uniqueNumber(uniqueNumber), parent_scope(parent_scope)
    {
        buckets = new SymbolInfo *[bucketSize];
        for (int i = 0; i < bucketSize; i++)
        {
            buckets[i] = nullptr;
        }
    }

    ~ScopeTable()
    {
        for (int i = 0; i < bucketSize; i++)
        {
            SymbolInfo *current = buckets[i];
            while (current != nullptr)
            {
                SymbolInfo *next = current->getNext();
                delete current;
                current = next;
            }
        }
    }

    bool insert(const string key, const string type)
    {
        unsigned int temp1;
        int temp2;
        if (lookUp(key, temp1, temp2, temp2) == nullptr)
        {
            unsigned int bucket = HashFunction::SDBMHash(key, bucketSize);
            SymbolInfo *symbolInfo = new SymbolInfo(key, type);
            SymbolInfo *current = buckets[bucket];
            int collision = 0;
            if (current == nullptr)
                buckets[bucket] = symbolInfo;
            else
            {
                while (current->getNext() != nullptr)
                {
                    current = current->getNext();
                    collision++;
                }
                current->setNext(symbolInfo);
                collision++;
            }
            cout << "\tInserted in ScopeTable# " << uniqueNumber << " at position " << bucket + 1 << ", " << collision + 1 << '\n';
            return true;
        }
        return false;
    }

    SymbolInfo *lookUp(const string key, unsigned int &bucket, int &position, int &uniqueNumber)
    {
        bucket = HashFunction::SDBMHash(key, bucketSize);
        position = 0;
        uniqueNumber = this->uniqueNumber;
        SymbolInfo *current = buckets[bucket];
        while (current != nullptr)
        {
            position++;
            if (current->getName() == key)
                break;
            current = current->getNext();
        }
        bucket++;
        return current;
    }

    bool Delete(const string key, unsigned int &bucket, int &position, int &uniqueNumber)
    {
        bucket = HashFunction::SDBMHash(key, bucketSize);
        SymbolInfo *prev = nullptr;
        SymbolInfo *current = buckets[bucket];
        uniqueNumber = this->uniqueNumber;
        position = 1;
        bool deleted=false;
        while (current != nullptr)
        {
            if (current->getName() == key)
            {
                if (prev != nullptr)
                    prev->setNext(current->getNext());
                else
                    buckets[bucket] = nullptr;
                delete current;
                deleted=true;
                break;
            }
            else
            {
                prev = current;
                current = current->getNext();
                position++;
            }
        }
        bucket++;
        
        return deleted;
    }

    void print(int tab)
    {
        printTab(tab);
        cout << "ScopeTable# " << uniqueNumber << '\n';
        for (int i = 0; i < bucketSize; i++)
        {
            printTab(tab);
            cout << i + 1 << "--> ";
            SymbolInfo *current = buckets[i];
            while (current != nullptr)
            {
                cout << "<" << current->getName() << "," << current->getType() << "> ";
                current = current->getNext();
            }
            cout << '\n';
        }
    }
    ScopeTable *getParent()
    {
        return parent_scope;
    }
    void setParent(ScopeTable *parent)
    {
        parent_scope = parent;
    }
    int getUniqueNumber()
    {
        return uniqueNumber;
    }
};