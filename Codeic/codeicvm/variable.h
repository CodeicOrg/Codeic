#pragma once

#include <string>

typedef enum
{
    NIL,
    BOOL,
    INT,
    DOUBLE,
    STRING
}VariableType;
class Variable;

class Variable
{
public:
    int type;
    void *value=NULL;
    void setValue(bool value);
    void setValue(int value);
    void setValue(double value);
    void setValue(std::string value);
    bool getBool();
    int getInt();
    double getDouble();
    std::string getString();
	~Variable()
	{
		deleteValue();
	}
private:
	void deleteValue();
};

#ifdef DEBUG
#include "..\print.h"
#include "iostream"
using namespace std;
class UnitTest_Variable
{
public:
    static void test()
    {
        Variable v;
        v.setValue(10);
        cout<<v.getInt()<<endl;
    }
};
#endif