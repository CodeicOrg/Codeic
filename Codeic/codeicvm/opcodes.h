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
	a:		(VariableIdentifier)identifier
	*/
	PUSH,

	/*
	set variable
	a:		(VariableIdentifier)identifer
	b:		(Variable)variable
	*/
	SET,

	/*
	get variable,and store it in the state's output
	a:		(VariableIdentifier)identifer
	*/
	GET,

	/*
	move a variable to another variable
	move b to a.Equivalent to a = b
	a:		(VariableIdentifier)variable a
	b:		(VariableIdentifier)variable b
	*/
	MOV
}OpCode;