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

bool CodeicVM::execute(int command,int a,int b,int c)
{
    vmdispatch(command)
    {
        vmcase(TEST)
        {
            state->debug = "Hello world";
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