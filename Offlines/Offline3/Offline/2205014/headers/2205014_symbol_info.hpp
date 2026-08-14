#include <bits/stdc++.h>
using namespace std;
class SymbolInfo
{
    string name, type;
    // added for offline 3
    string dtype;
    bool isArray;
    bool isDefined;
    SymbolInfo *next;

    // information about functions
    vector<string> paramTypes; // parameter types
public:
    SymbolInfo(string name = "", string type = "", string dtype = "", bool isArray = false, bool isDefined = true, SymbolInfo *next = nullptr) : name(name), type(type), next(next), dtype(dtype), isArray(isArray), isDefined(isDefined)
    {
        paramTypes.resize(0);
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
    bool getIsArray()
    {
        return this->isArray;
    }
    bool getIsDefined()
    {
        return this->isDefined;
    }
    void setIsDefined(bool val)
    {
        this->isDefined = true;
    }
    void setParamTypes(vector<string> paramTypes)
    {
        this->paramTypes.clear();
        this->paramTypes = paramTypes;
    }
    vector<string> getParamTypes()
    {
        return paramTypes;
    }
};