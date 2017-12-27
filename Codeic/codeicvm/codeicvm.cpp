#include "codeicvm.h"
#include "opcodes.h"
#include <string.h>

#define vmdispatch(o)	switch(o)
#define vmcase(l)	case l:
#define vmbreak		break


bool CodeicVM::init()
{
    state = new Vmstate;
}

bool CodeicVM::execute(int command)
{
    vmdispatch(command)
    {
        vmcase(TEST)
        {
            state->debug = "Hello world";
        }
    }
}

const char* CodeicVM::getDebugString()
{
    return state->debug;
}

void CodeicVM::close()
{

}