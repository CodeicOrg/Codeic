# Project:Codeic
# Author: AaronRobert
# Makefile created by CodeicBuildTool 1.1

OBJ = \
	./build/intermediate\\temp_0.o \
	./build/intermediate\CodeicVMsrc\temp_1.o \
	./build/intermediate\CodeicVMsrc\temp_2.o \
	./build/intermediate\CodeicVMsrc\temp_3.o \
	./build/intermediate\CodeicVMsrc\temp_4.o \
	./build/intermediate\CodeicVMsrc\temp_5.o \
	./build/intermediate\CodeicVMsrc\temp_6.o \
	./build/intermediate\CodeicVMsrc\temp_7.o \
	./build/intermediate\CodeicVMsrc\temp_8.o \
	./build/intermediate\CodeicVMsrc\temp_9.o \
	./build/intermediate\CodeicVMsrc\temp_10.o \
	./build/intermediate\CodeicVMsrc\temp_11.o \
	./build/intermediate\CodeicVMsrc\temp_12.o \
	./build/intermediate\CodeicVMsrc\temp_13.o \
	./build/intermediate\CodeicVMsrc\temp_14.o \
	./build/intermediate\CodeicVMsrc\temp_15.o \
	./build/intermediate\CodeicVMsrc\temp_16.o \
	./build/intermediate\CodeicVMsrc\temp_17.o \
	./build/intermediate\CodeicVMsrc\temp_18.o \
	./build/intermediate\CodeicVMsrc\temp_19.o \
	./build/intermediate\CodeicVMsrc\temp_20.o \
	./build/intermediate\CodeicVMsrc\temp_21.o \
	./build/intermediate\CodeicVMsrc\temp_22.o \
	./build/intermediate\CodeicVMsrc\temp_23.o \
	./build/intermediate\CodeicVMsrc\temp_24.o \
	./build/intermediate\CodeicVMsrc\temp_25.o \
	./build/intermediate\CodeicVMsrc\temp_26.o \
	./build/intermediate\CodeicVMsrc\temp_27.o \
	./build/intermediate\CodeicVMsrc\temp_28.o \
	./build/intermediate\CodeicVMsrc\temp_29.o \
	./build/intermediate\CodeicVMsrc\temp_30.o \
	./build/intermediate\CodeicVMsrc\temp_31.o \
	./build/intermediate\CodeicVMsrc\temp_32.o \
	./build/intermediate\CodeicVMsrc\temp_33.o \
	./build/intermediate\CodeicVMsrc\temp_34.o \
	./build/intermediate\CodeicVMsrc\temp_35.o \
	./build/intermediate\\temp_36.o \
	./build/intermediate\\temp_37.o \
	./build/intermediate\\temp_38.o \
	./build/intermediate\\temp_39.o \
	./build/intermediate\\temp_40.o \
	./build/intermediate\\temp_41.o 
Codeic.exe:$(OBJ)
	g++.exe -o ./build/output/Codeic.exe $(OBJ)

./build/intermediate\\temp_0.o:./Codeic\codeBlock.cpp
	g++.exe -DDEBUG -c ./Codeic\codeBlock.cpp -o ./build/intermediate\\temp_0.o

./build/intermediate\CodeicVMsrc\temp_1.o:./Codeic\CodeicVM\src\lapi.c
	g++.exe -DDEBUG -c ./Codeic\CodeicVM\src\lapi.c -o ./build/intermediate\CodeicVMsrc\temp_1.o

./build/intermediate\CodeicVMsrc\temp_2.o:./Codeic\CodeicVM\src\lauxlib.c
	g++.exe -DDEBUG -c ./Codeic\CodeicVM\src\lauxlib.c -o ./build/intermediate\CodeicVMsrc\temp_2.o

./build/intermediate\CodeicVMsrc\temp_3.o:./Codeic\CodeicVM\src\lbaselib.c
	g++.exe -DDEBUG -c ./Codeic\CodeicVM\src\lbaselib.c -o ./build/intermediate\CodeicVMsrc\temp_3.o

./build/intermediate\CodeicVMsrc\temp_4.o:./Codeic\CodeicVM\src\lbitlib.c
	g++.exe -DDEBUG -c ./Codeic\CodeicVM\src\lbitlib.c -o ./build/intermediate\CodeicVMsrc\temp_4.o

./build/intermediate\CodeicVMsrc\temp_5.o:./Codeic\CodeicVM\src\lcode.c
	g++.exe -DDEBUG -c ./Codeic\CodeicVM\src\lcode.c -o ./build/intermediate\CodeicVMsrc\temp_5.o

./build/intermediate\CodeicVMsrc\temp_6.o:./Codeic\CodeicVM\src\lcorolib.c
	g++.exe -DDEBUG -c ./Codeic\CodeicVM\src\lcorolib.c -o ./build/intermediate\CodeicVMsrc\temp_6.o

./build/intermediate\CodeicVMsrc\temp_7.o:./Codeic\CodeicVM\src\lctype.c
	g++.exe -DDEBUG -c ./Codeic\CodeicVM\src\lctype.c -o ./build/intermediate\CodeicVMsrc\temp_7.o

./build/intermediate\CodeicVMsrc\temp_8.o:./Codeic\CodeicVM\src\ldblib.c
	g++.exe -DDEBUG -c ./Codeic\CodeicVM\src\ldblib.c -o ./build/intermediate\CodeicVMsrc\temp_8.o

./build/intermediate\CodeicVMsrc\temp_9.o:./Codeic\CodeicVM\src\ldebug.c
	g++.exe -DDEBUG -c ./Codeic\CodeicVM\src\ldebug.c -o ./build/intermediate\CodeicVMsrc\temp_9.o

./build/intermediate\CodeicVMsrc\temp_10.o:./Codeic\CodeicVM\src\ldo.c
	g++.exe -DDEBUG -c ./Codeic\CodeicVM\src\ldo.c -o ./build/intermediate\CodeicVMsrc\temp_10.o

./build/intermediate\CodeicVMsrc\temp_11.o:./Codeic\CodeicVM\src\ldump.c
	g++.exe -DDEBUG -c ./Codeic\CodeicVM\src\ldump.c -o ./build/intermediate\CodeicVMsrc\temp_11.o

./build/intermediate\CodeicVMsrc\temp_12.o:./Codeic\CodeicVM\src\lfunc.c
	g++.exe -DDEBUG -c ./Codeic\CodeicVM\src\lfunc.c -o ./build/intermediate\CodeicVMsrc\temp_12.o

./build/intermediate\CodeicVMsrc\temp_13.o:./Codeic\CodeicVM\src\lgc.c
	g++.exe -DDEBUG -c ./Codeic\CodeicVM\src\lgc.c -o ./build/intermediate\CodeicVMsrc\temp_13.o

./build/intermediate\CodeicVMsrc\temp_14.o:./Codeic\CodeicVM\src\linit.c
	g++.exe -DDEBUG -c ./Codeic\CodeicVM\src\linit.c -o ./build/intermediate\CodeicVMsrc\temp_14.o

./build/intermediate\CodeicVMsrc\temp_15.o:./Codeic\CodeicVM\src\liolib.c
	g++.exe -DDEBUG -c ./Codeic\CodeicVM\src\liolib.c -o ./build/intermediate\CodeicVMsrc\temp_15.o

./build/intermediate\CodeicVMsrc\temp_16.o:./Codeic\CodeicVM\src\llex.c
	g++.exe -DDEBUG -c ./Codeic\CodeicVM\src\llex.c -o ./build/intermediate\CodeicVMsrc\temp_16.o

./build/intermediate\CodeicVMsrc\temp_17.o:./Codeic\CodeicVM\src\lmathlib.c
	g++.exe -DDEBUG -c ./Codeic\CodeicVM\src\lmathlib.c -o ./build/intermediate\CodeicVMsrc\temp_17.o

./build/intermediate\CodeicVMsrc\temp_18.o:./Codeic\CodeicVM\src\lmem.c
	g++.exe -DDEBUG -c ./Codeic\CodeicVM\src\lmem.c -o ./build/intermediate\CodeicVMsrc\temp_18.o

./build/intermediate\CodeicVMsrc\temp_19.o:./Codeic\CodeicVM\src\loadlib.c
	g++.exe -DDEBUG -c ./Codeic\CodeicVM\src\loadlib.c -o ./build/intermediate\CodeicVMsrc\temp_19.o

./build/intermediate\CodeicVMsrc\temp_20.o:./Codeic\CodeicVM\src\lobject.c
	g++.exe -DDEBUG -c ./Codeic\CodeicVM\src\lobject.c -o ./build/intermediate\CodeicVMsrc\temp_20.o

./build/intermediate\CodeicVMsrc\temp_21.o:./Codeic\CodeicVM\src\lopcodes.c
	g++.exe -DDEBUG -c ./Codeic\CodeicVM\src\lopcodes.c -o ./build/intermediate\CodeicVMsrc\temp_21.o

./build/intermediate\CodeicVMsrc\temp_22.o:./Codeic\CodeicVM\src\loslib.c
	g++.exe -DDEBUG -c ./Codeic\CodeicVM\src\loslib.c -o ./build/intermediate\CodeicVMsrc\temp_22.o

./build/intermediate\CodeicVMsrc\temp_23.o:./Codeic\CodeicVM\src\lparser.c
	g++.exe -DDEBUG -c ./Codeic\CodeicVM\src\lparser.c -o ./build/intermediate\CodeicVMsrc\temp_23.o

./build/intermediate\CodeicVMsrc\temp_24.o:./Codeic\CodeicVM\src\lstate.c
	g++.exe -DDEBUG -c ./Codeic\CodeicVM\src\lstate.c -o ./build/intermediate\CodeicVMsrc\temp_24.o

./build/intermediate\CodeicVMsrc\temp_25.o:./Codeic\CodeicVM\src\lstring.c
	g++.exe -DDEBUG -c ./Codeic\CodeicVM\src\lstring.c -o ./build/intermediate\CodeicVMsrc\temp_25.o

./build/intermediate\CodeicVMsrc\temp_26.o:./Codeic\CodeicVM\src\lstrlib.c
	g++.exe -DDEBUG -c ./Codeic\CodeicVM\src\lstrlib.c -o ./build/intermediate\CodeicVMsrc\temp_26.o

./build/intermediate\CodeicVMsrc\temp_27.o:./Codeic\CodeicVM\src\ltable.c
	g++.exe -DDEBUG -c ./Codeic\CodeicVM\src\ltable.c -o ./build/intermediate\CodeicVMsrc\temp_27.o

./build/intermediate\CodeicVMsrc\temp_28.o:./Codeic\CodeicVM\src\ltablib.c
	g++.exe -DDEBUG -c ./Codeic\CodeicVM\src\ltablib.c -o ./build/intermediate\CodeicVMsrc\temp_28.o

./build/intermediate\CodeicVMsrc\temp_29.o:./Codeic\CodeicVM\src\ltests.c
	g++.exe -DDEBUG -c ./Codeic\CodeicVM\src\ltests.c -o ./build/intermediate\CodeicVMsrc\temp_29.o

./build/intermediate\CodeicVMsrc\temp_30.o:./Codeic\CodeicVM\src\ltm.c
	g++.exe -DDEBUG -c ./Codeic\CodeicVM\src\ltm.c -o ./build/intermediate\CodeicVMsrc\temp_30.o

./build/intermediate\CodeicVMsrc\temp_31.o:./Codeic\CodeicVM\src\lua.c
	g++.exe -DDEBUG -c ./Codeic\CodeicVM\src\lua.c -o ./build/intermediate\CodeicVMsrc\temp_31.o

./build/intermediate\CodeicVMsrc\temp_32.o:./Codeic\CodeicVM\src\lundump.c
	g++.exe -DDEBUG -c ./Codeic\CodeicVM\src\lundump.c -o ./build/intermediate\CodeicVMsrc\temp_32.o

./build/intermediate\CodeicVMsrc\temp_33.o:./Codeic\CodeicVM\src\lutf8lib.c
	g++.exe -DDEBUG -c ./Codeic\CodeicVM\src\lutf8lib.c -o ./build/intermediate\CodeicVMsrc\temp_33.o

./build/intermediate\CodeicVMsrc\temp_34.o:./Codeic\CodeicVM\src\lvm.c
	g++.exe -DDEBUG -c ./Codeic\CodeicVM\src\lvm.c -o ./build/intermediate\CodeicVMsrc\temp_34.o

./build/intermediate\CodeicVMsrc\temp_35.o:./Codeic\CodeicVM\src\lzio.c
	g++.exe -DDEBUG -c ./Codeic\CodeicVM\src\lzio.c -o ./build/intermediate\CodeicVMsrc\temp_35.o

./build/intermediate\\temp_36.o:./Codeic\codeicvm.cpp
	g++.exe -DDEBUG -c ./Codeic\codeicvm.cpp -o ./build/intermediate\\temp_36.o

./build/intermediate\\temp_37.o:./Codeic\debug.cpp
	g++.exe -DDEBUG -c ./Codeic\debug.cpp -o ./build/intermediate\\temp_37.o

./build/intermediate\\temp_38.o:./Codeic\main.cpp
	g++.exe -DDEBUG -c ./Codeic\main.cpp -o ./build/intermediate\\temp_38.o

./build/intermediate\\temp_39.o:./Codeic\parser.cpp
	g++.exe -DDEBUG -c ./Codeic\parser.cpp -o ./build/intermediate\\temp_39.o

./build/intermediate\\temp_40.o:./Codeic\print.cpp
	g++.exe -DDEBUG -c ./Codeic\print.cpp -o ./build/intermediate\\temp_40.o

./build/intermediate\\temp_41.o:./Codeic\variable.cpp
	g++.exe -DDEBUG -c ./Codeic\variable.cpp -o ./build/intermediate\\temp_41.o