#pragma once

typedef enum
{
	/*
	create a new scope to store the variables.
	*/
	PUSHSCOPE,
	/*
	delete current scope.
	*/
	POPSCOPE,
	/*
	push a variable into variablePool in vmstate.
	a:		(string)variable name
	*/
	PUSH
}OpCode;