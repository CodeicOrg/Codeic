#pragma once
#include "core.h"
#include <vector>

class CObject
{

};

class VariableManager
{
public:
	//push the variable to the variable pool
	CObject* pushVariable(CObject *variable);
	CObject 
private:
	std::vector<CObject*> variablePool;
};