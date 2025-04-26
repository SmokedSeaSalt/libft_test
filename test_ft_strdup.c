#include <stdio.h>
#include "test.h"
#include <string.h> //for memcmp strdup
#include <stdlib.h> //for free

int main(void){
	char *ret1a;
	char *test1a = "Teststr";
	ret1a = ft_strdup(test1a);
	char *ret1b;
	char *test1b = "Teststr";
	ret1b = strdup(test1b);
	if (memcmp(ret1a, ret1b, 8) == 0)
		printf("%s1:OK ", KGRN);
	else
		printf("%s1:KO ", KRED);
	//printf("%s %s ", ret1a, ret1b);
	free(ret1a);
	free(ret1b);

	char *ret2a;
	char *test2a = "";
	ret2a = ft_strdup(test2a);
	char *ret2b;
	char *test2b = "";
	ret2b = strdup(test2b);
	if (memcmp(ret2a, ret2b, 1) == 0)
		printf("%s2:OK ", KGRN);
	else
		printf("%s2:KO ", KRED);
	//printf("%s %s ", ret2a, ret2b);
	free(ret2a);
	free(ret2b);

	char *ret3a;
	char *test3a = " ";
	ret3a = ft_strdup(test3a);
	char *ret3b;
	char *test3b = " ";
	ret3b = strdup(test3b);
	if (memcmp(ret3a, ret3b, 2) == 0)
		printf("%s3:OK ", KGRN);
	else
		printf("%s3:KO ", KRED);
	//printf("%s %s ", ret3a, ret3b);
	free(ret3a);
	free(ret3b);

	printf("\n%s", KNRM);
}


/*

char	*ft_strdup(const char *s)
{
	int		str_i;
	char	*ret;

	str_i = 0;
	while (s[str_i] != '\0')
	{
		str_i++;
	}
	ret = malloc((str_i + 1) * sizeof(unsigned char));
	if (ret == (void *)0)
		return (0);
	str_i = 0;
	while (s[str_i] != '\0')
	{
		ret[str_i] = s[str_i];
		str_i++;
	}
	ret[str_i] = '\0';
	return (ret);
}
*/
