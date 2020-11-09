
# the name of the target program
TARGET = string 
TARGET1 = inout

# other source files and the associated object files (this can be blank)
 SRC =  string.cpp 
 SRC1 = inout.cpp
 OBJ = $(SRC:.cpp=.o)
 OBJ1 = $(SRC1:.cpp=.o)

# special include directories
INCLUDE = -I.

# special libraries (none for now)
LIB = 
LIB	= -pthread

# select the compiler and flags
GCC = /usr/bin/g++
CFLAGS = -g

 .SUFFIXES: .cpp

# specify how to compile the .c files
.cpp.o:
	$(CC) $(CFLAGS) $(INCLUDE) -cpp 

# if you type 'make' without arguments, this is the default
build: $(TARGET) $(TARGET1)

# specify how to compile the target

$(TARGET): $(OBJ)
	$(GCC) $(CFLAGS) $(INCLUDE)  $(OBJ) $(LIB) -o $(TARGET) 
 $(TARGET1): $(OBJ1)
 	$(GCC) $(CFLAGS) $(INCLUDE)  $(OBJ1) $(LIB) -o $(TARGET1)
# remove binaries
clean:
	rm -f $(OBJ) $(TARGET) $(OBJ1) $(TARGET1)
# echo "clean all"

	
# remove binaries and other junk
clobber:
	make clean
	rm -f core *~
