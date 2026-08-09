#include <bits/stdc++.h>
using namespace std;
class SymbolInfo
{
    string name, type;
    // added for offline 3
    string dtype;
    SymbolInfo *next;

public:
    SymbolInfo(string name = "", string type = "", string dtype = "", SymbolInfo *next = nullptr) : name(name), type(type), next(next), dtype(dtype)
    {
    }

    void setName(const string name)
    {
        this->name = name;
    }

    void setType(const string type)
    {
        this->type = type;
    }

    string getName()
    {
        return name;
    }

    string getType()
    {
        return type;
    }

    void setNext(SymbolInfo *next)
    {
        this->next = next;
    }

    SymbolInfo *getNext()
    {
        return next;
    }

    string getDtype()
    {
        return this->dtype;
    }
};