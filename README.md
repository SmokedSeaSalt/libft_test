place in a folder at the same level as libft.
Example:

something/
├── libft/
│   ├── ft_strlen.c
│   ├── ft_atoi.c
│   ├── libft.h
│   └── Makefile
├── libft_test/
│   ├── test_ft_strlen.c
│   ├── test_ft_atoi.c
│   └── Makefile

Be sure that the libft folder is not capitalized. This will not work.

The make commands for all, re, clean, and fclean all link to the libft folder as wel, so running these in libft_test will do it for both.

To get the actual test output you have to call: make run. This will run all the executables made.

There will be cases where the make can get stuck, just play around with make re and make all and maybe it will fix itself.
