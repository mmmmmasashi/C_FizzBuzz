# Makefile for a C++ project with a single file main.cpp

# Compiler settings
CXX = g++
CXXFLAGS = -Wall
CXXFLAGS += -I"$(CPPUTEST_HOME)/include"
CXXFLAGS += -include "$(CPPUTEST_HOME)/include/CppUTest/MemoryLeakDetectorNewMacros.h"
CFLAGS += -include "$(CPPUTEST_HOME)/include/CppUTest/MemoryLeakDetectorMallocMacros.h"

LDFLAGS = -L"$(CPPUTEST_HOME)/lib"
LDLIBS = -lCppUTest -lCppUTestExt

# Target executable name
TARGET = unittest.exe

# Build target
all: $(TARGET)

# Rule to link the program
$(TARGET): main.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) main.o -o $(TARGET) $(LDLIBS)

# Rule to compile the source file
main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

# Clean target
clean:
	del "*.o"
	del "*.exe"