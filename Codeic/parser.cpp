#include "parser.h"
#include "codeBlock.h"

void Parser::execute(Function* func)
{
	func->execute();
}