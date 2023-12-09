# makefile for a C project with a single file main.c

# Compiler settings
CC = gcc
CFLAGS = -Wall

# Target executable name
TARGET = fizzbuzz.exe

# Build target
all: $(TARGET)

# Rule to link the program
$(TARGET): main.o
	$(CC) $(CFLAGS) main.o -o $(TARGET)

# Rule to compile the source file
main.o: main.c
	$(CC) $(CFLAGS) -c main.c

# Clean target
clean:
	rm -f *.o $(TARGET)
