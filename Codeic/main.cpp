#include "core.h"
#include "parser.h"
#include "util.h"
#include "debug.h"
#include "CodeicVM\src\lua.h"
#include "codeicvm.h"

int main(int argc,char **argv)
{
	std::cout << "Codeic" << std::endl;
	CodeicVM vm;
	vm.init();
	vm.execute("i = 10;");
	//vm.close();
	// test_init();
	// test_codeBlock();
	return 0;
}