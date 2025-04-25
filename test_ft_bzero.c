#include "../libft.h"
#include <stdio.h>
#include "test.h"

int main(void){
	int errorflag = 0;

	char teststr[7] = "abcdefg";
	ft_bzero(teststr, 5);
	for (int i = 0; i < 5; i++)
	{
		if (teststr[i] != 0)
			errorflag = 1;
	}

	if (errorflag == 0)
		printf("%s1:OK ", KGRN);
	else
		printf("%s1:KO ", KRED);

	printf("\n%s", KNRM);
}


/*
#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*mem;
	size_t			i;

	mem = s;
	i = 0;
	while (i < n)
	{
		mem = 0;
		i++;
	}
}
*/
