#pragma once

#include <string>

struct VariableIdentifier
{
	std::string scope;
	std::string name;
	bool operator==(const VariableIdentifier& v1);
};

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
		Variable vbool;
		vbool.setValue(true);
		cout << "VBOOL:" << vbool.getBool() << endl;
		Variable vint;
		vint.setValue(1024);
		cout << "VINT:" << vint.getInt() << endl;
		Variable vdouble;
		vdouble.setValue(1.23);
		cout << "VDOUBLE:" << vdouble.getDouble() << endl;
		Variable vstring;
		string _v = "Hello world";
		vstring.setValue(_v);
		cout << "VSTRING:" << vstring.getString() << endl;

		cout << "Change value type test:" << endl;
		Variable v1;
		v1.setValue(10);
		v1.setValue(_v);
		if (v1.type == STRING)
			cout << v1.getString() << endl;
		return;
    }
};
#endif