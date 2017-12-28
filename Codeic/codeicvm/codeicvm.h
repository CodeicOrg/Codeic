#pragma once

#include "..\print.h"
#include <vector>
#include <map>
#include <string>
#include "variable.h"

class CodeicVM;
class Vmstate;

class CodeicVM
{
public:
    bool init();
    void close();
    bool execute(const int command,const void* a = 0,const void* b = 0,const void* c = 0);
    std::string getDebugString();
private:
    Vmstate* state;
};

class Vmstate
{
public:
	std::map<VariableIdentifier, Variable> variablePool;
    std::string debug;
	/*
	the scope stack.
	push_back a current variablePool iterator when enter a new child scope.
	remove the current iterator and use it to delete a range of variable in variablePool when exit the cureent scope.
	*/
    std::vector<std::map<VariableIdentifier,Variable>::iterator> scopeStack;
};