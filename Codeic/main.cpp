#include "core.h"
#include "parser.h"
#include "util.h"
#include "debug.h"

int codeicmain()
{
	std::cout << "Codeic" << std::endl;
	test_init();
	test_codeBlock();
#ifdef DEBUG
	system("pause");
#endif
	return 0;
}