#include <stdio.h>
#include "test.h"
#include <string.h> //for strcmp
#include <stdlib.h> //for free

int main(void){
	char *ret1;
	char *s1a = "XxX_epicgamer42_XxX";
	char *s1b = "Xx_";
	ret1 = ft_strtrim(s1a, s1b);
	if (strcmp(ret1, "epicgamer42") == 0)
		printf("%s1:OK ", KGRN);
	else
		printf("%s1:KO ", KRED);
	//printf("|%s|", ret1);
	free(ret1);

	char *ret2;
	char *s2a = "  trimstart";
	char *s2b = " ";
	ret2 = ft_strtrim(s2a, s2b);
	if (strcmp(ret2, "trimstart") == 0)
		printf("%s2:OK ", KGRN);
	else
		printf("%s2:KO ", KRED);
	//printf("|%s|", ret2);
	free(ret2);

	char *ret3;
	char *s3a = "trimend   ";
	char *s3b = " ";
	ret3 = ft_strtrim(s3a, s3b);
	if (strcmp(ret3, "trimend") == 0)
		printf("%s3:OK ", KGRN);
	else
		printf("%s3:KO ", KRED);
	//printf("|%s|", ret3);
	free(ret3);

	char *ret4;
	char *s4a = "";
	char *s4b = "";
	ret4 = ft_strtrim(s4a, s4b);
	if (strcmp(ret4, "") == 0)
		printf("%s4:OK ", KGRN);
	else
		printf("%s4:KO ", KRED);
	//printf("|%s|", ret4);
	free(ret4);

	char *ret5;
	char *s5a = "xxxxx";
	char *s5b = "xxxxx";
	ret5 = ft_strtrim(s5a, s5b);
	if (strcmp(ret5, "") == 0)
		printf("%s5:OK ", KGRN);
	else
		printf("%s5:KO ", KRED);
	//printf("|%s|", ret5);
	free(ret5);

	printf("\n%s", KNRM);
}
