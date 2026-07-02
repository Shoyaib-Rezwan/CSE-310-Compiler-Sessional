#include <iostream>
using namespace std;
class SymbolInfo
{
    string name, type;
    SymbolInfo *next;

public:
    SymbolInfo(string name = "", string type = "", SymbolInfo *next = nullptr) : name(name), type(type), next(next)
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
        this->next=next;
    }

    SymbolInfo* getNext()
    {
        return next;
    }
};