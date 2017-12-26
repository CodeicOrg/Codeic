#include "codeicvm.h"
#include <string.h>

bool CodeicVM::init()
{
  lua_State *L = codeicvm_createState();//create state
  if (L == NULL) 
  {
     error_output("cannot create state: not enough memory");
     return false;
  }
  return true;
}

bool CodeicVM::execute(char* command)
{
    int errorMes = codeicvm_execute(L,command,strlen(command));
    if(errorMes)
    {
        error_output("error");
        fprintf(stderr,"%s",lua_tostring(L,-1));
        lua_pop(L,1);
    }
    return errorMes;
}

void CodeicVM::close()
{
    codeicvm_close(L);
}