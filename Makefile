# Makefile for binary_converter

# Compiler and flags
CC = gcc
CFLAGS = -Wall --std=c99 -g

# Target executable name
TARGET = binary_converter

# Default rule: build the target
all: $(TARGET)

# Link object files to create the executable
$(TARGET): main.o
	$(CC) $(CFLAGS) -o $(TARGET) main.o

# Compile main.c to an object file
main.o: main.c
	$(CC) $(CFLAGS) -c main.c

# Clean up build files
clean:
	rm -f $(TARGET) main.o

