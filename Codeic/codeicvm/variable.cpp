#include "variable.h"

using namespace std;

VariableIdentifier::VariableIdentifier():scope(),name()
{
	variable = new Variable;
}

VariableIdentifier::VariableIdentifier(const char * scope, const char * name)
{
	this->scope = scope;
	this->name = name;
	variable = new Variable;
}

VariableIdentifier::VariableIdentifier(std::string scope, std::string name)
{
	this->scope = scope;
	this->name = name;
	variable = new Variable;
}

bool VariableIdentifier::operator==(const VariableIdentifier & v1)
{
	return scope == v1.scope&&name == v1.name;
}


void Variable::setValue(bool value)
{
    char *_v = (char*)this->value;
	if (type != BOOL)
    {
		if (type != NIL)deleteValue();
        _v = new char;
		type = BOOL;
    }
    *_v = value?1:0;
    this->value = _v;
}

void Variable::setValue(int value)
{
    int *_v = (int*)this->value;
    if(type!=INT)
    {
		if (type != NIL)deleteValue();
        _v = new int;
		type = INT;
    }
    *_v = value;
    this->value = _v;
}

void Variable::setValue(double value)
{
    double *_v = (double*)this->value;
    if(type!=DOUBLE)
    {
		if (type != NIL)deleteValue();
        _v = new double;
		type = DOUBLE;
    }
    *_v = value;
    this->value = _v;
}

void Variable::setValue(string value)
{
    string *_v = (string*)this->value;
    if(type!=STRING)
    {
		if (type != NIL)deleteValue();
        _v = new string;
		type = STRING;
    }
    *_v = value;
    this->value = _v;
}

bool Variable::getBool()
{
    return *((char*)this->value);
}

int Variable::getInt()
{
    return *((int*)this->value);
}

double Variable::getDouble()
{
    return *((double*)this->value);
}

string Variable::getString()
{
    return *((string*)this->value);
}

void Variable::deleteValue()
{
	switch (type)
	{
	case BOOL:delete (char*)value; break;
	case INT:delete (int*)value; break;
	case DOUBLE:delete (double*)value; break;
	case STRING:delete (string*)value; break;
	}
}

