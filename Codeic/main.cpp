#include "core.h"
#include "parser.h"
#include "util.h"
#include "debug.h"

int main()
{
	std::cout << "Codeic" << std::endl;
	test_codeBlock();
	Parser parser;
	Function mainFunc;
	TestBlock tb;
	tb.message = new std::string("Hello world");
	mainFunc.code = (StatementBlock*)&tb;
	parser.execute(&mainFunc);
#ifdef DEBUG
	system("pause");
#endif
}