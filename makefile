# Project:Codeic
# Author: AaronRobert
# Makefile created by CodeicBuildTool 1.1

OBJ = \
	./build/intermediate\\temp_0.o \
	./build/intermediate\codeicvm\temp_1.o \
	./build/intermediate\codeicvm\temp_2.o \
	./build/intermediate\\temp_3.o \
	./build/intermediate\\temp_4.o \
	./build/intermediate\\temp_5.o \
	./build/intermediate\\temp_6.o 
Codeic.exe:$(OBJ)
	g++.exe -o ./build/output/Codeic.exe $(OBJ)

./build/intermediate\\temp_0.o:./Codeic\codeBlock.cpp
	g++.exe -DDEBUG -c ./Codeic\codeBlock.cpp -o ./build/intermediate\\temp_0.o

./build/intermediate\codeicvm\temp_1.o:./Codeic\codeicvm\codeicvm.cpp
	g++.exe -DDEBUG -c ./Codeic\codeicvm\codeicvm.cpp -o ./build/intermediate\codeicvm\temp_1.o

./build/intermediate\codeicvm\temp_2.o:./Codeic\codeicvm\variable.cpp
	g++.exe -DDEBUG -c ./Codeic\codeicvm\variable.cpp -o ./build/intermediate\codeicvm\temp_2.o

./build/intermediate\\temp_3.o:./Codeic\main.cpp
	g++.exe -DDEBUG -c ./Codeic\main.cpp -o ./build/intermediate\\temp_3.o

./build/intermediate\\temp_4.o:./Codeic\parser.cpp
	g++.exe -DDEBUG -c ./Codeic\parser.cpp -o ./build/intermediate\\temp_4.o

./build/intermediate\\temp_5.o:./Codeic\print.cpp
	g++.exe -DDEBUG -c ./Codeic\print.cpp -o ./build/intermediate\\temp_5.o

./build/intermediate\\temp_6.o:./Codeic\unitTest.cpp
	g++.exe -DDEBUG -c ./Codeic\unitTest.cpp -o ./build/intermediate\\temp_6.o