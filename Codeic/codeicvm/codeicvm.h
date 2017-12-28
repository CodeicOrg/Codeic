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
    bool execute(int command,int a = 0,int b = 0,int c = 0);
    std::string getDebugString();
private:
    Vmstate* state;
};

class Vmstate
{
public:
	std::map<VariableIdentifier, Variable> variablePool;
    std::string debug;
    std::vector<char> state;
};