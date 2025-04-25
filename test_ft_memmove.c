#include <stdio.h>
#include "test.h"
#include <string.h>

int main(void){

	#define TEST1SIZE 10
	char* res1;
	char src1[] = "verylongbasictest";
	char *dest1 = src1 + 2;
	res1 = ft_memmove(dest1, (const char *)src1, TEST1SIZE);

	char *check1a = "veverylongbactest";
	if (strcmp(src1, check1a) == 0)
		printf("%s1:OK ", KGRN);
	else
		printf("%s1:KO ", KRED);

	char *check1b = "verylongbactest";
	if (strcmp(res1, check1b) == 0)
		printf("%s2:OK ", KGRN);
	else
		printf("%s2:KO ", KRED);

	#define TEST2SIZE 5
	char* res2;
	char dest2[] = "verylongbasictest";
	char *src2 = dest2 + 3;
	res2 = ft_memmove(dest2, (const char *)src2, TEST2SIZE);

	char *check2a = "ylongongbasictest";
	if (strcmp(res2, check2a) == 0)
		printf("%s3:OK ", KGRN);
	else
		printf("%s3:KO ", KRED);

	char *check2b = "ngongbasictest";
	if (strcmp(src2, check2b) == 0)
		printf("%s4:OK ", KGRN);
	else
		printf("%s4:KO ", KRED);

	printf("\n%s", KNRM);
}


/*
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*srcp = (unsigned char*) src;
	unsigned char		*destp;
	size_t				i;

	destp = dest;
	if (destp < srcp)
	{
		i = 0;
		while (i < n)
		{
			destp[i] = srcp[i];
			i++;
		}
	}
	else if (destp > srcp)
	{
		i = n;
		while (i > 0)
		{
			destp[i] = srcp[i];
			i--;
		}
	}
	return (dest);
}
*/
