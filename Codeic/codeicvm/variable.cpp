#include "variable.h"

using namespace std;

void Variable::setValue(bool value)
{
    char *_v = (char*)this->value;
    if(type!=BOOL)
    {
        _v = new char;
    }
    *_v = value;
}

void Variable::setValue(int value)
{
    int *_v = (int*)this->value;
    if(type!=INT)
    {
        _v = new int;
    }
    *_v = value;
}

void Variable::setValue(double value)
{
    double *_v = (double*)this->value;
    if(type!=DOUBLE)
    {
        _v = new double;
    }
    *_v = value;
}

void Variable::setValue(string value)
{
    string *_v = (string*)this->value;
    if(type!=STRING)
    {
        _v = new string;
    }
    *_v = value;
}

int Variable::getValue()
{
    return *((int*)this->value);
}