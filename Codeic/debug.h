#pragma once
#include "core.h"

#ifndef DEBUG
#define DEBUG
#endif

#ifdef DEBUG
#define OUTPUT(message) std::cout<<"[DEBUG]"<<(message)<<std::endl


//#define TEST_CODE_BLOCK
#ifdef TEST_CODE_BLOCK
void test_codeBlock();
#endif
#endif