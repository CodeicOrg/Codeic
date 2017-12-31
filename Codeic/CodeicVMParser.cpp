#include "CodeicVMParser.h"
#include "codeicvm\opcodes.h"
#include "print.h"

#define vmdispatch(o)	switch(o)
#define vmcase(l)	case l:
#define vmbreak		break


#define OPCODES_COUNT 6

std::string parserOpcodes[OPCODES_COUNT] =
{
	"pushscope",//single command
	"popscope",//single command
	"push",//eg. push a(the default scople is empty)   push global::a(the scope is named as global)
	"set",
	"get",
	"mov"
};

using namespace std;

void CodeicVMParser::run(const char *path)
{
	vm.init();
	ifstream file(path);
	if (!file.is_open())
	{
		error_output("File not found");
		return;
	}
	string s;
	while (file >> s)
	{
		int commandIndex = -1;
		for (int i = 0; i < OPCODES_COUNT; ++i)
		{
			if (parserOpcodes[i] == s)
			{
				commandIndex = i;
				break;
			}
		}
		if (commandIndex == -1)cout << "Invalid command"<<endl;
		vmdispatch(commandIndex)
		{
			vmcase(PUSHSCOPE)
			{
				vm.execute(PUSHSCOPE);
				vmbreak;
			}
			vmcase(POPSCOPE)
			{
				vm.execute(POPSCOPE);
				vmbreak;
			}
			vmcase(PUSH)
			{
				string fullName;
				file >> fullName;
				VariableIdentifier vi = VariableIdentifier::getVariableIdentifer(fullName);
				vm.execute(PUSH, &vi);
				vmbreak;
			}
			vmcase(SET)
			{
				string fullName;
				string variableStr;
				file >> fullName >> variableStr;
				VariableIdentifier vi = VariableIdentifier::getVariableIdentifer(fullName);
				Variable v;
				try
				{
					v.setValueAndType(variableStr);
				}
				catch (int e)
				{
					switch (e)
					{
					case Variable::Exception::INVALID_VALUE:
						ostringstream oss;
						oss << "Invalid variable:" << variableStr;
						error_output(oss.str());
						break;
					}
				}
				vm.execute(SET, &vi, &v);
				vmbreak;
			}
			vmcase(GET)
			{
				string fullName;
				file >> fullName;
				VariableIdentifier vi = VariableIdentifier::getVariableIdentifer(fullName);
				if (vm.execute(GET, &vi))
				{
					ostringstream oss;
					oss << "GET:"<<vm.output.getValue();
					debug_output(oss.str());
				}
				else
				{
					ostringstream oss;
					oss << "Variable not  found:" << fullName;
					debug_output(oss.str());
				}
				vmbreak;
			}
			vmcase(MOV)
			{
				string va, vb;
				file >> va >> vb;
				VariableIdentifier via = VariableIdentifier::getVariableIdentifer(va);
				VariableIdentifier vib = VariableIdentifier::getVariableIdentifer(vb);
				if (!vm.execute(MOV, &via, &vib))
				{
					ostringstream oss;
					oss << "Variable not found:" << va << "," << vb;
					debug_output(oss.str());
				}
				vmbreak;
			}
		}
	}
}