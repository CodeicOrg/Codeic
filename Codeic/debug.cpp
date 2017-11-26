#include "debug.h"
#ifdef DEBUG
using namespace std;
Parser *parser;
Function *mainFunc;
void test_init()
{
	parser = new Parser();
	mainFunc = new Function();
}
void test_codeBlock()
{
	OUTPUT("Code Block test start.");
	// Write code
	TestBlock tb;
	tb.message = new string("Hello world");
	mainFunc->code = (StatementBlock*)&tb;

	// Execute
	parser->execute(mainFunc);
	OUTPUT("Code Block test done.");
}
#endif