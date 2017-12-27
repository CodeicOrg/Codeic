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
    bool execute(int command);
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