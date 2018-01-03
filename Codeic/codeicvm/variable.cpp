#include "variable.h"
#include <sstream>

using namespace std;

#define EXCEPTION Variable::Exception

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

VariableIdentifier VariableIdentifier::getVariableIdentifer(string fullName)
{
	string scopeName;
	string variableName;
	const string split("::");
	int splitIndex = fullName.find(split);
	if (splitIndex != std::string::npos)
	{
		scopeName = fullName.substr(0, splitIndex);
		variableName = fullName.substr(splitIndex + split.size());
	}
	else
	{
		scopeName = "";
		variableName = fullName;
	}
	VariableIdentifier vi;
	vi.scope = scopeName;
	vi.name = variableName;
	return vi;
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

void Variable::setValueAndType(string value)
{
	if (value[0] == '\"')
	{
		setValue(value.substr(1, value.size() - 1));
		type = STRING;
	}
	if (value[0] == 't' || value[0] == 'f')
	{	
		if (value == "true")setValue(true);
		else if (value == "false")setValue(false);
		else throw EXCEPTION::INVALID_VALUE;
		type = BOOL;
	}
	if (value.find('.') == string::npos)
	{
		istringstream istr(value);
		double _v;
		istr >> _v;
		setValue(_v);
		type = DOUBLE;
	}
	istringstream istr(value);
	int _v;
	istr >> _v;
	setValue(_v);
	type = INT;
}

string Variable::getValue()
{
	switch (type)
	{
		case BOOL:
			return getBool() ? "true" : "false";
		case INT:
		{
			ostringstream oss;
			oss << getInt();
			return oss.str();
		}
		case DOUBLE:
		{
			ostringstream oss;
			oss << getDouble();
			return oss.str();
		}
		case STRING:
		{
			return getString();
		}
	}
	return "";
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
	case BOOL:delete (char*)value; value = nullptr; break;
	case INT:delete (int*)value; value = nullptr; break;
	case DOUBLE:delete (double*)value; value = nullptr; break;
	case STRING:delete (string*)value; value = nullptr; break;
	}
}
