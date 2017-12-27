#pragma once

#include "print.h"

class CodeicVM
{
public:
    bool init();
    bool execute(char* command);
    void close();
private:

};