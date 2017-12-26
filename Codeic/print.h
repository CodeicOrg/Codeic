#pragma once

#include "iostream"

void error_output(const char* message)
{
    using namespace std;
    cout<<"[ERROR]"<<message;
}