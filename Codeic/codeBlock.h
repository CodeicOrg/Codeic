#pragma once
#include "core.h"

class CodeBlock;
class Function;
class StatementBlock;
class OrderBlock;
class CycleBlock;
class EndBlock;


class CodeBlock {
public:
	virtual void execute();
};

class Function :public CodeBlock {
public:
	std::string name;
	StatementBlock* code = NULL;
	virtual void execute();
};

class StatementBlock :public CodeBlock {
public:
	StatementBlock* next = NULL;
};

class OrderBlock :public StatementBlock {

};

class CycleBlock :public StatementBlock {

};

class EndBlock :public StatementBlock {

};

class TestBlock :public OrderBlock {
public:
	std::string message;
	virtual void execute();
};