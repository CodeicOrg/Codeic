#pragma once

#include "..\print.h"
#include <vector>

class CodeicVM;
class Vmstate;

class CodeicVM
{
public:
    bool init();
    void close();
    bool execute(int command,int a = 0,int b = 0,int c = 0);
    const char* getDebugString();
private:
    Vmstate* state;
};

class Vmstate
{
public:
    const char* debug;
    std::vector<char> state;
};