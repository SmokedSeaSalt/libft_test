#include <stdio.h>
#include "test.h"
#include <string.h>

int main(void){
	char test1a[8] = "abcdefg";
	ft_bzero(test1a, 5);
	char test1b[8] = "abcdefg";
	bzero(test1b, 5);
	if (memcmp(test1a, test1b, 8))
		printf("%s1:OK ", KGRN);
	else
		printf("%s1:KO ", KRED);
	printf("%s %s ", test1a, test1b);
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
