
#include <stdio.h>
#include "test.h"
#include "string.h"
#include <stdlib.h>

static char oneup(unsigned int i, char c)
{
	i = i - i;
	return (c + 1);
}



int main(void){
	char *str1 = "abcd";
	char *test1 = "bcde";
	char *ret1 = ft_strmapi(str1, &oneup);
	if (strcmp(ret1, test1) == 0)
		printf("%s1:OK ", KGRN);
	else
		printf("%s1:KO ", KRED);
	//printf(" %s ", ret1);
	free(ret1);

	char *str2 = "";
	char *test2 = "";
	char *ret2 = ft_strmapi(str2, &oneup);
	if (strcmp(ret2, test2) == 0)
		printf("%s2:OK ", KGRN);
	else
		printf("%s2:KO ", KRED);
	//printf(" %s ", ret2);
	free(ret2);

	printf("\n%s", KNRM);
}
