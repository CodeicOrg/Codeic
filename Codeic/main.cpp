#include "core.h"
#include "parser.h"

int main()
{
	std::cout << "Codeic" << std::endl;
	Parser parser;
	Function *mainFunc = new Function();
	TestBlock tb;
	tb.message = "Hello world";
	mainFunc->code = (StatementBlock*)&tb;
	parser.execute(mainFunc);
#ifdef DEBUG
	system("pause");
#endif
}