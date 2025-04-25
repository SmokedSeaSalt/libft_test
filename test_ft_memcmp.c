#include <stdio.h>
#include "test.h"
#include <string.h>

int main(void){

	char *str1a = "TEST";
	char *str1b = "TEST";
	size_t n1 = 0;
	if (ft_memcmp(str1a, str1b, n1) == memcmp(str1a, str1b, n1))
		printf("%s1:OK ", KGRN);
	else
		printf("%s1:KO ", KRED);

	char *str2a = "TEST";
	char *str2b = "TEST";
	size_t n2 = 5;
	if (ft_memcmp(str2a, str2b, n2) == memcmp(str2a, str2b, n2))
		printf("%s2:OK ", KGRN);
	else
		printf("%s2:KO ", KRED);

	char *str3a = "TEST";
	char *str3b = "TEST";
	size_t n3 = 1;
	if (ft_memcmp(str3a, str3b, n3) == memcmp(str3a, str3b, n3))
		printf("%s3:OK ", KGRN);
	else
		printf("%s3:KO ", KRED);

	char *str4a = "TESS";
	char *str4b = "TEST";
	size_t n4 = 5;
	if (ft_memcmp(str4a, str4b, n4) < 0 && memcmp(str4a, str4b, n4) < 0)
		printf("%s4:OK ", KGRN);
	else
		printf("%s4:KO ", KRED);
	//printf("%d , %d", ft_memcmp(str4a, str4b, n4), memcmp(str4a, str4b, n4));

	char *str5a = "TESU";
	char *str5b = "TEST";
	size_t n5 = 5;
	if (ft_memcmp(str5a, str5b, n5) > 0 && memcmp(str5a, str5b, n5) > 0)
		printf("%s5:OK ", KGRN);
	else
		printf("%s5:KO ", KRED);
	//printf("%d , %d", ft_memcmp(str5a, str5b, n5), memcmp(str5a, str5b, n5));

	char *str6a = "TEST";
	char *str6b = "TEST";
	size_t n6 = 3;
	if (ft_memcmp(str6a, str6b, n6) == memcmp(str6a, str6b, n6))
		printf("%s6:OK ", KGRN);
	else
		printf("%s6:KO ", KRED);

	printf("\n%s", KNRM);
}


/*

int	memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*mem1;
	unsigned char	*mem2;
	size_t			i;

	mem1 = (unsigned char *)s1;
	mem2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (mem1[i] == '\0' || mem2[i] == '\0')
		{
			return (mem1[i] - mem2[i]);
		}
		if (mem1[i] > mem2[i])
		{
			return (mem1[i] - mem2[i]);
		}
		if (mem1[i] < mem2[i])
		{
			return (mem1[i] - mem2[i]);
		}
		i++;
	}
	return (0);
}

*/
