#pragma once

#include "iostream"

void error(const char* message)
{
    using namespace std;
    cout<<"[ERROR]"<<message;
}