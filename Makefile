# Define paths
LIBRARY = ../libft/libft.a   # Path to the library in the root folder
LIBPATH = ../libft
# Compiler and flags
CC = cc
CFLAGS = -Wall -Werror -Wextra -g -fsanitize=address -lbsd

OBJS=ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o \
	ft_strlen.o ft_memset.o ft_bzero.o ft_memcpy.o ft_memmove.o ft_strlcpy.o \
	ft_strlcat.o ft_toupper.o ft_tolower.o ft_strchr.o ft_strrchr.o \
	ft_strncmp.o ft_memchr.o ft_memcmp.o ft_strnstr.o ft_atoi.o ft_calloc.o \
	ft_strdup.o ft_substr.o ft_strjoin.o ft_strtrim.o ft_split.o ft_itoa.o \
	ft_strmapi.o ft_striteri.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o \
	ft_putnbr_fd.o
BONUSOBJS=ft_lstnew_bonus.o ft_lstadd_front_bonus.o

ifdef ISBONUS
ALLOBJS=$(OBJS) $(BONUSOBJS)
else
ifdef ONLYBONUS
ALLOBJS=$(BONUSOBJS)
else
ALLOBJS=$(OBJS)
endif
endif


# Create a list of output .out files based on test.c files
OUTS = $(patsubst %.o, test_%.out, $(ALLOBJS))

# Default target: build all tests
all: $(LIBRARY) $(OUTS)

$(LIBRARY):
	make -C $(LIBPATH)

# Rule to create .out files from .c files
%.out: %.c $(LIBRARY)
	$(CC) $(CFLAGS) -o $@ $< $(LIBRARY)

# Run all .out files
run:
	@for file in *.out; do \
		echo "Running $$file"; \
		./$$file; \
	done

# Clean up the output files
clean:
	rm -f *.out
	make clean -C $(LIBPATH)

fclean: clean
	make fclean -C $(LIBPATH)

cleantest:
	rm -f *.out

re: fclean
	$(MAKE) $(LIBPATH)
	$(MAKE) all

bonus:
	make bonus -C $(LIBPATH)
	$(MAKE) ISBONUS=1 all

onlybonus:
	make bonus -C $(LIBPATH)
	$(MAKE) cleantest
	$(MAKE) ONLYBONUS=1 all

.PHONY: all clean re
