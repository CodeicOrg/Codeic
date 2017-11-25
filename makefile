# Project: Codeic
# Author: AaronRobert

CPP = g++.exe
OBJ = main.o
OUTPUT = ./build/output
INTERMEDIATE = ./build/intermediate
BIN = Codeic.exe

$(BIN): $(OBJ)
	$(CPP) -o $(OUTPUT)/$(BIN) $(INTERMEDIATE)/$(OBJ)

main.o: main.cpp
	$(CPP) -c ./Codeic/main.cpp -o $(INTERMEDIATE)/main.o