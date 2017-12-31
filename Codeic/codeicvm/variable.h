#pragma once

#include <string>

class Variable;
struct VariableIdentifier;

struct VariableIdentifier
{
	std::string scope;
	std::string name;
	Variable* variable;
	VariableIdentifier();
	VariableIdentifier(const char* scope, const char* name);
	VariableIdentifier(std::string scope, std::string name);
	bool operator==(const VariableIdentifier& v1);
	static VariableIdentifier getVariableIdentifer(std::string str);
};

typedef enum
{
    NIL,
    BOOL,
    INT,
    DOUBLE,
    STRING
}VariableType;


class Variable
{
public:
    int type;
    void *value=NULL;
    void setValue(bool value);
    void setValue(int value);
    void setValue(double value);
    void setValue(std::string value);
	void setValueAndType(std::string value);
    bool getBool();
    int getInt();
    double getDouble();
    std::string getString();
	~Variable()
	{
		deleteValue();
	}
	enum Exception
	{
		INVALID_VALUE
	};
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