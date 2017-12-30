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
			state->variablePool.push_back(*(VariableIdentifier*)a);
			vmbreak;
		}
		vmcase(SET)
		{
			VariableIdentifier* vi_p = find(*(VariableIdentifier*)a);
			if (!vi_p)return false;
			vi_p->variable = (Variable*)b;
			vmbreak;
		}
		vmcase(GET)
		{
			VariableIdentifier* vi_p = find(*(VariableIdentifier*)a);
			if (!vi_p)return false;
			output = state->output = *vi_p->variable;
			vmbreak;
		}
		vmcase(MOV)
		{
			VariableIdentifier* vi_pa = find(*(VariableIdentifier*)a);
			VariableIdentifier* vi_pb = find(*(VariableIdentifier*)b);
			if (!vi_pa || !vi_pb)return false;
			*vi_pa->variable = *vi_pb->variable;
			vmbreak;
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