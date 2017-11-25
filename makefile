# Project:Codeic
# Author: AaronRobert
# Makefile created by CodeicBuildTool 1.0

OBJ = \
	./build/intermediate/temp_0.o \
	./build/intermediate/temp_1.o \
	./build/intermediate/temp_2.o 
Codeic.exe:$(OBJ)
	g++.exe -o ./build/output/Codeic.exe $(OBJ)

./build/intermediate/temp_0.o:./Codeic\codeBlock.cpp
	g++.exe -c ./Codeic\codeBlock.cpp -o ./build/intermediate/temp_0.o

./build/intermediate/temp_1.o:./Codeic\main.cpp
	g++.exe -c ./Codeic\main.cpp -o ./build/intermediate/temp_1.o

./build/intermediate/temp_2.o:./Codeic\parser.cpp
	g++.exe -c ./Codeic\parser.cpp -o ./build/intermediate/temp_2.o