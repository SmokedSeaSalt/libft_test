# Define paths
LIBRARY = ../libft/libft.a   # Path to the library in the root folder
LIBPATH = ../libft
# Compiler and flags
CC = cc
CFLAGS = -Wall -Werror -Wextra -g -fsanitize=address -lbsd

# Find all test.c files in the SRC_DIR (current folder)
TESTS = $(wildcard *.c)

# Create a list of output .out files based on test.c files
OUTS = $(patsubst %.c, %.out, $(TESTS))

# Default target: build all tests
all: $(LIBRARY) $(OUTS)

$(LIBRARY):
	make bonus -C $(LIBPATH)

# Rule to create .out files from .c files
%.out: %.c $(LIBRARY)
	$(CC) $(CFLAGS) -o $@ $< $(LIBRARY)

# Run all .out files
run: $(LIBRARY) $(OUTS)
	make -C $(LIBPATH)
	$(MAKE) all
	@for file in $(OUTS); do \
		echo "Running $$file"; \
		./$$file; \
	done

# Clean up the output files
clean:
	rm -f *.out
	make clean -C $(LIBPATH)

fclean: clean
	make fclean -C $(LIBPATH)

re: fclean
	make all bonus -C $(LIBPATH)
	$(MAKE) all


.PHONY: all clean re
