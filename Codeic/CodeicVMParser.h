#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "CodeicVM\codeicvm.h"
#include "codeicvm\variable.h"

class CodeicVMParser;

class CodeicVMParser
{
public:
	CodeicVM vm;
	void run(const char *path);
};

#define OPCODES_COUNT 6

std::string opcodes[OPCODES_COUNT] = 
{
	"pushscope",//single command
	"popscope",//single command
	"push",//eg. push a(the default scople is empty)   push global::a(the scope is named as global)
	"set",
	"get",
	"mov"
};