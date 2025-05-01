# Define paths
#LIBRARY = ../libft/libft.a   # Path to the library in the root folder
LIBPATH := $(shell [ -d ../libft ] && echo ../libft || ([ -d ../Libft ] && echo ../Libft))
LIBRARY := $(LIBPATH)/libft.a
OUTDIR = outs/
# Compiler and flags
CC = cc
CFLAGS = -Wall -Werror -Wextra -g3 -fsanitize=address -lbsd -I $(LIBPATH)/

SRCS=	ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c
BONUSSRCS=ft_lstnew_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstsize_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstiter_bonus.c\
		ft_lstmap_bonus.c

ifdef ISBONUS
ALLSRCS=$(SRCS) $(BONUSSRCS)
else
ifdef ONLYBONUS
ALLSRCS=$(BONUSSRCS)
else
ALLSRCS=$(SRCS)
endif
endif

# Create a list of output .out files based on test.c files
OUTS = $(patsubst %.c, $(OUTDIR)test_%.out, $(ALLSRCS))

# Default target: build all tests
all: $(LIBRARY) $(OUTDIR) $(OUTS)

$(LIBRARY):
	make -C $(LIBPATH)

$(OUTDIR):
	mkdir -p $(OUTDIR)

# Rule to create .out files from .c files
$(OUTDIR)%.out: %.c $(LIBRARY)
	$(CC) $(CFLAGS) -o $@ $< $(LIBRARY)

# Run all .out files
run:
	@for file in $(OUTDIR)*.out; do \
		echo "Running $$file"; \
		./$$file; \
	done

# Clean up the output files
clean:
	rm -rf $(OUTDIR)
	make clean -C $(LIBPATH)

fclean: clean
	make fclean -C $(LIBPATH)

cleantest:
	rm -rf $(OUTDIR)

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
