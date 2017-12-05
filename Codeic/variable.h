#pragma once
#include "core.h"
#include <vector>

class CObject
{

};

// manager varibale
// 
class VariableManager
{
public:
	//push the variable to the variable pool
	CObject* pushVariable(CObject *variable);
	CObject* getVariable();
private:
	std::vector<CObject*> variablePool;
};