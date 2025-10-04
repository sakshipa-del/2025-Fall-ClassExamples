# Makefile for creating f.o
# Note: This Makefile only compiles f.o and do not create any executable files

OBJ = f.o

# Default targets are the two programs
Lib: $(OBJ)

# Rule to compile .cpp files into .o files
%.o: %.cpp
	g++ -c $< -o $@

clean:
	rm -f $(OBJ)
