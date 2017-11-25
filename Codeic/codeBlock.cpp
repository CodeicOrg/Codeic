#include "codeBlock.h"

void CodeBlock::execute()
{

}

void Function::execute()
{
	StatementBlock* currentCode = code;
	while (currentCode)
	{
		currentCode->execute();
		currentCode = currentCode->next;
	}
}

void TestBlock::execute()
{
	std::cout << message << std::endl;
}