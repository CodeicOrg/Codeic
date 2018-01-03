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

class Vmstate
{
public:
	std::vector<VariableIdentifier> variablePool;
	std::string debug;
	Variable output;
	/*
	the scope stack.
	push_back a current variablePool index when enter a new child scope.
	remove the current index and use it to delete a range of variable in variablePool when exit the cureent scope.
	*/
	std::stack<int> scopeStack;
	Vmstate() :variablePool(), scopeStack(),output()
	{
		scopeStack.push(0);
	}
};

class CodeicVM
{
public:
    bool init();
    void close();
    bool execute(const int command,const void* a = 0,const void* b = 0,const void* c = 0);
    std::string getDebugString();
	Variable output;
private:
	Vmstate* state;
	VariableIdentifier* find(const VariableIdentifier identifer)
	{
		//越后面的变量越常用
		for (int i = state->variablePool.size() - 1; i >= 0; --i)
		{
			if (state->variablePool[i] == identifer)
				return &state->variablePool[i];
		}
		return nullptr;
	}
};

#ifdef DEBUG
#include "..\print.h"
#include "iostream"
class UnitTest_CodeicVM
{
public:
	static void test()
	{
		using namespace std;
		CodeicVM vm;
		vm.init();
		vm.execute(PUSHSCOPE);
		Variable vl;
		vl.setValue(10);
		VariableIdentifier vi("global", "test");
		vm.execute(PUSH, &vi);
		vm.execute(SET,&vi, &vl);
		vm.execute(GET, &vi);
		int valueGet = vm.output.getInt();
		VariableIdentifier va("global", "a");
		va.variable->setValue(1);
		VariableIdentifier vb("global", "b");
		vb.variable->setValue(2);
		vm.execute(PUSH, &va);
		vm.execute(PUSH, &vb);
		vm.execute(MOV, &va, &vb);
		vm.execute(GET, &va);
		int a = vm.output.getInt();
		vm.execute(GET, &vb);
		int b = vm.output.getInt();
		vm.execute(POPSCOPE);
		return;
	}
};
#endif