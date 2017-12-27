#pragma once

//#include "CodeicVM\src\lua.h"
#include "print.h"

class CodeicVM
{
public:
    bool init();
    bool execute(char* command);
    void close();
private:
    lua_State *L = NULL;
};