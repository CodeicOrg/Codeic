#include "core.h"
#include "parser.h"
#include "util.h"
#include "debug.h"
#include "CodeicVM\src\lua.h"

int main(int argc,char **argv)
{
	std::cout << "Codeic" << std::endl;
	lua_main(argc,argv);
	test_init();
	test_codeBlock();
	return 0;
}