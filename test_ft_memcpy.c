#include <stdio.h>
#include "test.h"

int main(void){

	int errorflag = 0;

	#define TEST1SIZE 10
	char* res1;
	char dest1[TEST1SIZE];
	char *src1 = "basictest";
	res1 = ft_memcpy(dest1, src1, TEST1SIZE);
	errorflag = 0;
	for (int i = 0; i < TEST1SIZE; i++)
	{
		if (dest1[i] != src1[i])
			errorflag = 1;
	}
	for (int i = 0; i < TEST1SIZE; i++)
	{
		if (res1[i] != src1[i])
			errorflag = 1;
	}
	if (errorflag == 0)
		printf("%s1:OK ", KGRN);
	else
		printf("%s1:KO ", KRED);

	#define TEST2SIZE 3
	int *res2;
	int dest2[TEST2SIZE];
	const int src2[3] = {42, 0, 69};
	res2 = ft_memcpy(dest2, src2, TEST2SIZE * sizeof(int));
	errorflag = 0;
	for (int i = 0; i < TEST2SIZE; i++)
	{
		if (dest2[i] != src2[i])
			errorflag = 1;
	}
	for (int i = 0; i < TEST2SIZE; i++)
	{
		if (res2[i] != src2[i])
		{
			errorflag = 1;
			printf("%d\n", i);
		}
	}

	if (errorflag == 0)
		printf("%s2:OK ", KGRN);
	else
		printf("%s2:KO ", KRED);

	printf("\n%s", KNRM);
}




/*
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*srcp = src;
	unsigned char		*destp;
	size_t				i;

	i = 0;
	destp = dest;
	while (i < n)
	{
		destp[i] = srcp[i];
		i++;
	}
	return (dest);
}
*/
