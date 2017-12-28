#include "codeicvm.h"
#include "opcodes.h"
#include <string.h>

#define vmdispatch(o)	switch(o)
#define vmcase(l)	case l:
#define vmbreak		break


bool CodeicVM::init()
{
    state = new Vmstate;
	return true;
}

bool CodeicVM::execute(const int command, const void* a = 0, const void* b = 0, const void* c = 0)
{
    vmdispatch(command)
    {
        vmcase(TEST)
        {
            state->debug = "Hello world";
            vmbreak;
        }
		vmcase(PUSH)
		{
			
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