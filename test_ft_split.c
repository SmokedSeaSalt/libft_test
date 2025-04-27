#include <stdio.h>
#include "test.h"
#include <string.h> //for strcmp
#include <stdlib.h> //for free

int main(void){
	char **ret1;
	char *s1a = "XxX_epicgamer42_XxX";
	char s1b = '_';
	ret1 = ft_split(s1a, s1b);
	if (strcmp(ret1[0], "XxX") == 0)
		printf("%s1a:OK ", KGRN);
	else
		printf("%s1a:KO ", KRED);
	if (strcmp(ret1[1], "epicgamer42") == 0)
		printf("%s1b:OK ", KGRN);
	else
		printf("%s1b:KO ", KRED);
	if (strcmp(ret1[2], "XxX") == 0)
		printf("%s1c:OK ", KGRN);
	else
		printf("%s1c:KO ", KRED);
	//printf("|%s|", ret1);
	for (int i = 0; i < 4; i++)
		free(ret1[i]);
	free(ret1);

	char **ret3;
	char *s3a = "start                   ";
	char s3b = ' ';
	ret3 = ft_split(s3a, s3b);
	if (strcmp(ret3[0], "start") == 0)
		printf("%s3:OK ", KGRN);
	else
		printf("%s3:KO ", KRED);
	//printf("|%s|", ret3);
	for (int i = 0; i < 2; i++)
		free(ret3[i]);
	free(ret3);

	char **ret4;
	char *s4a = "                   end";
	char s4b = ' ';
	ret4 = ft_split(s4a, s4b);
	if (strcmp(ret4[0], "end") == 0)
		printf("%s4:OK ", KGRN);
	else
		printf("%s4:KO ", KRED);
	//printf("|%s|", ret4);
	for (int i = 0; i < 2; i++)
		free(ret4[i]);
	free(ret4);

	char **ret5;
	char *s5a = "                   ";
	char s5b = ' ';
	ret5 = ft_split(s5a, s5b);
	if (ret5[0] == NULL)
		printf("%s5:OK ", KGRN);
	else
		printf("%s5:KO ", KRED);
	//printf("|%s|", ret5);
	for (int i = 0; i < 1; i++)
		free(ret5[i]);
	free(ret5);


	printf("\n%s", KNRM);
}
