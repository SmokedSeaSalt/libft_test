#include <stdio.h>
#include "test.h"
#include <stdlib.h>
#include <string.h>

int main(void){
	int test1 = 0;
	char *ret1 = ft_itoa(test1);
	if (strcmp(ret1, "0") == 0)
		printf("%s1:OK ", KGRN);
	else
		printf("%s1:KO ", KRED);
	free(ret1);

	int test2 = -123;
	char *ret2 = ft_itoa(test2);
	if (strcmp(ret2, "-123") == 0)
		printf("%s2:OK ", KGRN);
	else
		printf("%s2:KO ", KRED);
	free(ret2);

	int test3 = 456;
	char *ret3 = ft_itoa(test3);
	if (strcmp(ret3, "456") == 0)
		printf("%s3:OK ", KGRN);
	else
		printf("%s3:KO ", KRED);
	free(ret3);

	int test4 = 2147483647; //INT_MAX
	char *ret4 = ft_itoa(test4);
	if (strcmp(ret4, "2147483647") == 0)
		printf("%s4:OK ", KGRN);
	else
		printf("%s4:KO ", KRED);
	free(ret4);

	int test5 = -2147483648; //INT_MIN
	char *ret5 = ft_itoa(test5);
	if (strcmp(ret5, "-2147483648") == 0)
		printf("%s5:OK ", KGRN);
	else
		printf("%s5:KO ", KRED);
	free(ret5);

	//printf("%d %d", ft_itoa(test9), itoa(test9));
	printf("\n%s", KNRM);
}



