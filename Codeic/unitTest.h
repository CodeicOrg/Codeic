#pragma once
#include "core.h"
#include "codeBlock.h"
#include "parser.h"

#ifndef DEBUG
#define DEBUG
#endif

#ifdef DEBUG
#define OUTPUT(message) std::cout<<"[DEBUG]"<<(message)<<std::endl
void test_init();
void test_codeBlock();
#endif