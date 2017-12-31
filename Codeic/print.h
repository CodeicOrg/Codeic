#pragma once

#include "iostream"
#include <string>

 inline void error_output(std::string message)
 {
     std::cout<<"[ERROR]"<<message<<std::endl;
 }

 inline void debug_output(std::string message)
 {
     std::cout<<"[DEBUG]"<<message<<std::endl;
 }