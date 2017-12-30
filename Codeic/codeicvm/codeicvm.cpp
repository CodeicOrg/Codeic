#include "codeicvm.h"
#include <string.h>

#define vmdispatch(o)	switch(o)
#define vmcase(l)	case l:
#define vmbreak		break


bool CodeicVM::init()
{
    state = new Vmstate;
	return true;
}

bool CodeicVM::execute(const int command, const void* a,const void* b, const void* c)
{
    vmdispatch(command)
    {
		vmcase(PUSHSCOPE)
		{
			state->scopeStack.push(state->variablePool.size());
			vmbreak;
		}
		vmcase(POPSCOPE)
		{
			int index = state->scopeStack.top();
			state->scopeStack.pop();
			for (int i = state->variablePool.size() - 1; i >= index; --i)
			{
				state->variablePool.pop_back();
			}
			vmbreak;
		}
		vmcase(PUSH)
		{
			VariableIdentifier * _v = (VariableIdentifier*)a;
			state->variablePool.push_back(*_v);
		}
    }
	return true;
}

std::string CodeicVM::getDebugString()
{
    return state->debug;
}

void CodeicVM::close()
{

}