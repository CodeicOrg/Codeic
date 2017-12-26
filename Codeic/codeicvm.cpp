#include "codeicvm.h"

bool CodeicVM::init()
{
  lua_State *L = createState();  /* create state */
  if (L == NULL) {
     error("cannot create state: not enough memory");
     return false;
  }
  return true;
}

bool CodeicVM::execute(char* command)
{

}