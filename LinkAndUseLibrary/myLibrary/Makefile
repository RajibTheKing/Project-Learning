# source files.
SRC =  	MyInterface.cpp Controller.cpp
 
OBJ = $(SRC:.cpp=.o)

OUT = libmytestlibrary.a
 
# include directories
INCLUDES = -I 

# -I/usr/include -I/usr/include/c++/4.2.1 -I/usr/local/include -I
 
# C++ compiler flags (-g -O2 -Wall)
CCFLAGS = -std=c++11 -g -o2 -Wall
 
# compiler

CCC = g++
 
# library paths
LIBS = -L/usr/local/lib
 
# compile flags
LDFLAGS = -liostream -lfstream -lstdlib -lstring 
 
.SUFFIXES: .cpp
 
default: $(OUT)
 
.cpp.o:
	$(CCC) $(INCLUDES) $(CCFLAGS) -c $< -o $@
 
$(OUT): $(OBJ)
	ar rcs $(OUT) $(OBJ)
 
clean:
	rm -f $(OBJ) $(OUT) Makefile.bak# DO NOT DELETE
# DO NOT DELETE

MyInterface.o: MyInterface.h Controller.h
Controller.o: Controller.h
