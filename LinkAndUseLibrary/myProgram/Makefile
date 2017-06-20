# source files.
SRC =  	LibraryAPI.cpp MyProgram.cpp 
 
OBJ = $(SRC:.cpp=.o)

OUT = demo
 
# include directories
INCLUDES = -I 

# -I/usr/include -I/usr/include/c++/4.2.1 -I/usr/local/include -I
 
# C++ compiler flags (-g -O2 -Wall)
CCFLAGS = -std=c++11
 
# compiler

CCC = g++
 
# library paths
LIBS = -L/usr/local/lib -L.
 
# Library flags
LDFLAGS = -lmytestlibrary
 
.SUFFIXES: .cpp
 
default: dep $(OUT)
 
.cpp.o:
	$(CCC)  $(INCLUDES) $(CCFLAGS) -c $< -o $@
 
$(OUT): $(OBJ)
	$(CCC) -o $(OUT) $(OBJ) $(INCLUDES) $(LIBS) $(CCFLAGS) $(LDFLAGS)  
 
depend: dep
 
dep:
	$(CCC)  $(CCFLAGS) -c $(SRC)
 
clean:
	rm -f $(OBJ) $(OUT) Makefile.bak# DO NOT DELETE
# DO NOT DELETE

MyProgram.o: MyInterface.h
