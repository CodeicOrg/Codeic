#include "core.h"
#include "parser.h"
#include "util.h"

int main()
{
	std::cout << "Codeic" << std::endl;
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