#include <stdio.h>
#include "test.h"
#include <string.h>

int main(void){

	int c1 = 'x';
	char *test1 = "abcdefg";
	size_t n1 = 5;
	if (ft_memchr(test1, c1, n1) == memchr(test1, c1, n1))
		printf("%s1:OK ", KGRN);
	else
		printf("%s1:KO ", KRED);

	int c2 = 'b';
	char *test2 = "abcdefg";
	size_t n2 = 5;
	if (ft_memchr(test2, c2, n2) == memchr(test2, c2, n2))
		printf("%s2:OK ", KGRN);
	else
		printf("%s2:KO ", KRED);

	int c3 = 'g';
	char *test3 = "abcdefg";
	size_t n3 = 5;
	if (ft_memchr(test3, c3, n3) == memchr(test3, c3, n3))
		printf("%s3:OK ", KGRN);
	else
		printf("%s3:KO ", KRED);

	printf("\n%s", KNRM);
}






/*
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*memptr;
	size_t			i;

	memptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (memptr[i] == c)
			return (&memptr[i]);
		i++;
	}
	return ((void *)0);
}


*/
