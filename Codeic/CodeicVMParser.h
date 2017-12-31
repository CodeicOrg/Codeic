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

#ifdef DEBUG
class UnitTest_CodeicVMParser
{
public:
	static void test()
	{
		using namespace std;
		CodeicVMParser cvp;
		cvp.run("../vmlangExample/main.s");
		return;
	}
};
#endif