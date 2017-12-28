#include "variable.h"

using namespace std;

void Variable::setValue(bool value)
{
    char *_v = (char*)this->value;
    if(type!=BOOL)
    {
        _v = new char;
    }
    *_v = value?1:0;
    this->value = _v;
}

void Variable::setValue(int value)
{
    int *_v = (int*)this->value;
    if(type!=INT)
    {
        _v = new int;
    }
    *_v = value;
    this->value = _v;
}

void Variable::setValue(double value)
{
    double *_v = (double*)this->value;
    if(type!=DOUBLE)
    {
        _v = new double;
    }
    *_v = value;
    this->value = _v;
}

void Variable::setValue(string value)
{
    string *_v = (string*)this->value;
    if(type!=STRING)
    {
        _v = new string;
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