#pragma once

#include "..\print.h"
#include <vector>
#include <map>
#include <string>
#include "variable.h"
#include "opcodes.h"
#include <stack>

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
	std::vector<VariableIdentifier> variablePool;
    std::string debug;
	/*
	the scope stack.
	push_back a current variablePool index when enter a new child scope.
	remove the current index and use it to delete a range of variable in variablePool when exit the cureent scope.
	*/
    std::stack<int> scopeStack;
	Vmstate():variablePool(),scopeStack()
	{
		scopeStack.push(0);
	}
};

#ifdef DEBUG
#include "..\print.h"
#include "iostream"
using namespace std;
class UnitTest_CodeicVM
{
public:
	static void test()
	{
		CodeicVM vm;
		vm.init();
		vm.execute(PUSHSCOPE);
		VariableIdentifier vi("global", "test");
		vm.execute(PUSH, &vi);
		vm.execute(POPSCOPE);
		return;
	}
};
#endif