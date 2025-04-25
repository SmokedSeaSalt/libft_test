#include "../libft.h"
#include <stdio.h>
#include "test.h"

int main(void){
	int errorflag = 0;

	int testval = 'x';
	char teststr[7] = "abcdefg";
	ft_memset(teststr, testval, 5);
	for (int i = 0; i < 5; i++)
	{
		if (teststr[i] != testval)
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

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*mem;
	size_t			i;

	mem = s;
	i = 0;
	while (i < n)
	{
		mem[i] = c;
		i++;
	}
	return (s);
}
*/
