
#include <stdio.h>
#include "test.h"
#include "string.h"
#include <stdlib.h>

static void oneup(unsigned int i, char *c)
{
	i = i - i;
	(*c) = (*c) + 1;
}



int main(void){
	char str1[5] = "abcd";
	char *test1 = "bcde";
	ft_striteri(str1, &oneup);
	if (strcmp(str1, test1) == 0)
		printf("%s1:OK ", KGRN);
	else
		printf("%s1:KO ", KRED);
	//printf(" %s ", ret1);

	char str2[1] = "";
	char *test2 = "";
	ft_striteri(str2, &oneup);
	if (strcmp(str2, test2) == 0)
		printf("%s2:OK ", KGRN);
	else
		printf("%s2:KO ", KRED);
	//printf(" %s ", ret2);

	printf("\n%s", KNRM);
}
