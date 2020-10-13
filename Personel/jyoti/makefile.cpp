# the name of the target program
TARGET = main

# other source files and the associated object files (this can be blank)
 SRC =  main.cpp
 OBJ = $(SRC:.c=.o)

# special include directories
INCLUDE = -I.

# special libraries (none for now)
LIB	=

# select the compiler and flags
CC = /usr/bin/g++
CFLAGS = -g

# .SUFFIXES: .c

# specify how to compile the .c files
.c.o:
	$(CC) $(CFLAGS) $(INCLUDE) -c $<

# if you type 'make' without arguments, this is the default
all: $(TARGET)

# specify how to compile the target

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(INCLUDE)  $(OBJ) $(LIB) -o $(TARGET)

# remove binaries
clean:
	rm -f $(OBJ) $(TARGET)
# echo "clean all"

# remove binaries and other junk
clobber:
	make clean
	rm -f core *~
	