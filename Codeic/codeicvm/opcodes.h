#pragma once

typedef enum
{
    TEST,
	/*
	push a variable into variablePool in vmstate.
	a:		(string)variable name
	*/
	PUSH,
	POP
}OpCode;