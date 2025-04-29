place in a folder at the same level as libft.\
Be sure that the libft folder is not capitalized. This will not work.\
Example:

something/\
├── libft/\
│   ├── ft_strlen.c\
│   ├── ft_atoi.c\
│   ├── libft.h\
│   └── Makefile\
├── libft_test/\
│   ├── test_ft_strlen.c\
│   ├── test_ft_atoi.c\
│   └── Makefile

Possible commands:\
make            -> Will compile all basic functions to test_x.out/
make bonus      -> Will compile all basic + bonus functions to test_x.out/
make onlybonus  -> Will compile only bonus functions to test_x.out/
make run        -> Will run the created test executables to give you OK/KO

The make commands for all, re, clean, and fclean all link to the libft folder as wel, so running these in libft_test will do it for both.

There will be cases where the make can get stuck, just play around with make re and make all and maybe it will fix itself.
