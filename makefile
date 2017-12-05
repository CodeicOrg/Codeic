# Project:Codeic
# Author: AaronRobert
# Makefile created by CodeicBuildTool 1.1

OBJ = \
	./build/intermediate\\temp_0.o \
	./build/intermediate\\temp_1.o \
	./build/intermediate\lua\temp_2.o \
	./build/intermediate\lua\temp_3.o \
	./build/intermediate\lua\temp_4.o \
	./build/intermediate\lua\temp_5.o \
	./build/intermediate\lua\temp_6.o \
	./build/intermediate\lua\temp_7.o \
	./build/intermediate\lua\temp_8.o \
	./build/intermediate\lua\temp_9.o \
	./build/intermediate\lua\temp_10.o \
	./build/intermediate\lua\temp_11.o \
	./build/intermediate\lua\temp_12.o \
	./build/intermediate\lua\temp_13.o \
	./build/intermediate\lua\temp_14.o \
	./build/intermediate\lua\temp_15.o \
	./build/intermediate\lua\temp_16.o \
	./build/intermediate\lua\temp_17.o \
	./build/intermediate\lua\temp_18.o \
	./build/intermediate\lua\temp_19.o \
	./build/intermediate\lua\temp_20.o \
	./build/intermediate\lua\temp_21.o \
	./build/intermediate\lua\temp_22.o \
	./build/intermediate\lua\temp_23.o \
	./build/intermediate\lua\temp_24.o \
	./build/intermediate\lua\temp_25.o \
	./build/intermediate\lua\temp_26.o \
	./build/intermediate\lua\temp_27.o \
	./build/intermediate\lua\temp_28.o \
	./build/intermediate\lua\temp_29.o \
	./build/intermediate\lua\temp_30.o \
	./build/intermediate\lua\temp_31.o \
	./build/intermediate\lua\temp_32.o \
	./build/intermediate\lua\temp_33.o \
	./build/intermediate\lua\temp_34.o \
	./build/intermediate\lua\temp_35.o \
	./build/intermediate\lua\temp_36.o \
	./build/intermediate\\temp_37.o \
	./build/intermediate\\temp_38.o \
	./build/intermediate\\temp_39.o 
Codeic.exe:$(OBJ)
	g++.exe -o ./build/output/Codeic.exe $(OBJ)

./build/intermediate\\temp_0.o:./Codeic\codeBlock.cpp
	g++.exe -DDEBUG -c ./Codeic\codeBlock.cpp -o ./build/intermediate\\temp_0.o

./build/intermediate\\temp_1.o:./Codeic\debug.cpp
	g++.exe -DDEBUG -c ./Codeic\debug.cpp -o ./build/intermediate\\temp_1.o

./build/intermediate\lua\temp_2.o:./Codeic\lua\lapi.c
	g++.exe -DDEBUG -c ./Codeic\lua\lapi.c -o ./build/intermediate\lua\temp_2.o

./build/intermediate\lua\temp_3.o:./Codeic\lua\lauxlib.c
	g++.exe -DDEBUG -c ./Codeic\lua\lauxlib.c -o ./build/intermediate\lua\temp_3.o

./build/intermediate\lua\temp_4.o:./Codeic\lua\lbaselib.c
	g++.exe -DDEBUG -c ./Codeic\lua\lbaselib.c -o ./build/intermediate\lua\temp_4.o

./build/intermediate\lua\temp_5.o:./Codeic\lua\lbitlib.c
	g++.exe -DDEBUG -c ./Codeic\lua\lbitlib.c -o ./build/intermediate\lua\temp_5.o

./build/intermediate\lua\temp_6.o:./Codeic\lua\lcode.c
	g++.exe -DDEBUG -c ./Codeic\lua\lcode.c -o ./build/intermediate\lua\temp_6.o

./build/intermediate\lua\temp_7.o:./Codeic\lua\lcorolib.c
	g++.exe -DDEBUG -c ./Codeic\lua\lcorolib.c -o ./build/intermediate\lua\temp_7.o

./build/intermediate\lua\temp_8.o:./Codeic\lua\lctype.c
	g++.exe -DDEBUG -c ./Codeic\lua\lctype.c -o ./build/intermediate\lua\temp_8.o

./build/intermediate\lua\temp_9.o:./Codeic\lua\ldblib.c
	g++.exe -DDEBUG -c ./Codeic\lua\ldblib.c -o ./build/intermediate\lua\temp_9.o

./build/intermediate\lua\temp_10.o:./Codeic\lua\ldebug.c
	g++.exe -DDEBUG -c ./Codeic\lua\ldebug.c -o ./build/intermediate\lua\temp_10.o

./build/intermediate\lua\temp_11.o:./Codeic\lua\ldo.c
	g++.exe -DDEBUG -c ./Codeic\lua\ldo.c -o ./build/intermediate\lua\temp_11.o

./build/intermediate\lua\temp_12.o:./Codeic\lua\ldump.c
	g++.exe -DDEBUG -c ./Codeic\lua\ldump.c -o ./build/intermediate\lua\temp_12.o

./build/intermediate\lua\temp_13.o:./Codeic\lua\lfunc.c
	g++.exe -DDEBUG -c ./Codeic\lua\lfunc.c -o ./build/intermediate\lua\temp_13.o

./build/intermediate\lua\temp_14.o:./Codeic\lua\lgc.c
	g++.exe -DDEBUG -c ./Codeic\lua\lgc.c -o ./build/intermediate\lua\temp_14.o

./build/intermediate\lua\temp_15.o:./Codeic\lua\linit.c
	g++.exe -DDEBUG -c ./Codeic\lua\linit.c -o ./build/intermediate\lua\temp_15.o

./build/intermediate\lua\temp_16.o:./Codeic\lua\liolib.c
	g++.exe -DDEBUG -c ./Codeic\lua\liolib.c -o ./build/intermediate\lua\temp_16.o

./build/intermediate\lua\temp_17.o:./Codeic\lua\llex.c
	g++.exe -DDEBUG -c ./Codeic\lua\llex.c -o ./build/intermediate\lua\temp_17.o

./build/intermediate\lua\temp_18.o:./Codeic\lua\lmathlib.c
	g++.exe -DDEBUG -c ./Codeic\lua\lmathlib.c -o ./build/intermediate\lua\temp_18.o

./build/intermediate\lua\temp_19.o:./Codeic\lua\lmem.c
	g++.exe -DDEBUG -c ./Codeic\lua\lmem.c -o ./build/intermediate\lua\temp_19.o

./build/intermediate\lua\temp_20.o:./Codeic\lua\loadlib.c
	g++.exe -DDEBUG -c ./Codeic\lua\loadlib.c -o ./build/intermediate\lua\temp_20.o

./build/intermediate\lua\temp_21.o:./Codeic\lua\lobject.c
	g++.exe -DDEBUG -c ./Codeic\lua\lobject.c -o ./build/intermediate\lua\temp_21.o

./build/intermediate\lua\temp_22.o:./Codeic\lua\lopcodes.c
	g++.exe -DDEBUG -c ./Codeic\lua\lopcodes.c -o ./build/intermediate\lua\temp_22.o

./build/intermediate\lua\temp_23.o:./Codeic\lua\loslib.c
	g++.exe -DDEBUG -c ./Codeic\lua\loslib.c -o ./build/intermediate\lua\temp_23.o

./build/intermediate\lua\temp_24.o:./Codeic\lua\lparser.c
	g++.exe -DDEBUG -c ./Codeic\lua\lparser.c -o ./build/intermediate\lua\temp_24.o

./build/intermediate\lua\temp_25.o:./Codeic\lua\lstate.c
	g++.exe -DDEBUG -c ./Codeic\lua\lstate.c -o ./build/intermediate\lua\temp_25.o

./build/intermediate\lua\temp_26.o:./Codeic\lua\lstring.c
	g++.exe -DDEBUG -c ./Codeic\lua\lstring.c -o ./build/intermediate\lua\temp_26.o

./build/intermediate\lua\temp_27.o:./Codeic\lua\lstrlib.c
	g++.exe -DDEBUG -c ./Codeic\lua\lstrlib.c -o ./build/intermediate\lua\temp_27.o

./build/intermediate\lua\temp_28.o:./Codeic\lua\ltable.c
	g++.exe -DDEBUG -c ./Codeic\lua\ltable.c -o ./build/intermediate\lua\temp_28.o

./build/intermediate\lua\temp_29.o:./Codeic\lua\ltablib.c
	g++.exe -DDEBUG -c ./Codeic\lua\ltablib.c -o ./build/intermediate\lua\temp_29.o

./build/intermediate\lua\temp_30.o:./Codeic\lua\ltests.c
	g++.exe -DDEBUG -c ./Codeic\lua\ltests.c -o ./build/intermediate\lua\temp_30.o

./build/intermediate\lua\temp_31.o:./Codeic\lua\ltm.c
	g++.exe -DDEBUG -c ./Codeic\lua\ltm.c -o ./build/intermediate\lua\temp_31.o

./build/intermediate\lua\temp_32.o:./Codeic\lua\lua.c
	g++.exe -DDEBUG -c ./Codeic\lua\lua.c -o ./build/intermediate\lua\temp_32.o

./build/intermediate\lua\temp_33.o:./Codeic\lua\lundump.c
	g++.exe -DDEBUG -c ./Codeic\lua\lundump.c -o ./build/intermediate\lua\temp_33.o

./build/intermediate\lua\temp_34.o:./Codeic\lua\lutf8lib.c
	g++.exe -DDEBUG -c ./Codeic\lua\lutf8lib.c -o ./build/intermediate\lua\temp_34.o

./build/intermediate\lua\temp_35.o:./Codeic\lua\lvm.c
	g++.exe -DDEBUG -c ./Codeic\lua\lvm.c -o ./build/intermediate\lua\temp_35.o

./build/intermediate\lua\temp_36.o:./Codeic\lua\lzio.c
	g++.exe -DDEBUG -c ./Codeic\lua\lzio.c -o ./build/intermediate\lua\temp_36.o

./build/intermediate\\temp_37.o:./Codeic\main.cpp
	g++.exe -DDEBUG -c ./Codeic\main.cpp -o ./build/intermediate\\temp_37.o

./build/intermediate\\temp_38.o:./Codeic\parser.cpp
	g++.exe -DDEBUG -c ./Codeic\parser.cpp -o ./build/intermediate\\temp_38.o

./build/intermediate\\temp_39.o:./Codeic\variable.cpp
	g++.exe -DDEBUG -c ./Codeic\variable.cpp -o ./build/intermediate\\temp_39.o