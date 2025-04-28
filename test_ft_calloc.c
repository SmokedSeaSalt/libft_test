#include <stdio.h>
#include "test.h"
#include <string.h> //for memcmp
#include <stdlib.h> //for malloc
#include <stdint.h> //for SIZE_MAX

int main(void){
	char *test1a;
	test1a = ft_calloc(8, 1);
	char *test1b;
	test1b = calloc(8, 1);
	if (memcmp(test1a, test1b, 8) == 0)
		printf("%s1:OK ", KGRN);
	else
		printf("%s1:KO ", KRED);
	//printf("%s %s ", test1a, test1b);
	free(test1a);
	free(test1b);

	char *test2a;
	test2a = ft_calloc(0, 8);
	if (test2a != NULL)
		printf("%s2:OK ", KGRN);
	else
		printf("%s2:KO ", KRED);
	//printf("%s %s ", test2a, test2b);
	free(test2a);

	char *test3a;
	test3a = ft_calloc(8, 0);
	if (test3a != NULL)
		printf("%s3:OK ", KGRN);
	else
		printf("%s3:KO ", KRED);
	//printf("%s %s ", test3a, test3b);
	free(test3a);

	//wont compile because of calloc error
	//argument 2 value ‘9223372036854775808’ exceeds
	//maximum object size 9223372036854775807
	/*
	char *test4a;
	test4a = ft_calloc(2, SIZE_MAX / 2 + 1);
	char *test4b;
	test4b = calloc(2, SIZE_MAX / 2 + 1);
	if (memcmp(test4a, test4b, 8))
		printf("%s4:OK ", KGRN);
	else
		printf("%s4:KO ", KRED);
	//printf("%s %s ", test4a, test4b);
	*/
	printf("\n%s", KNRM);
}





/*

void *ft_calloc(size_t nmemb, size_t size)
{
	unsigned char *ret;

	if (nmemb == 0 || size == 0)
	{
		ret = malloc(1);
		if (ret == NULL)
			return (NULL);
		return (ret);
	}
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	ret = malloc(nmemb * size);
	if (ret == NULL)
		return (NULL);
	ft_bzero(ret, nmemb * size);
	return (ret);
}

*/
