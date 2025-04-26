#include <stdio.h>
#include "test.h"
#include <string.h> //for strcmp
#include <stdlib.h> //for free

int main(void){
	char *ret1;
	char *test1 = "Thisisalongerteststring";
	ret1 = ft_substr(test1, 13, 4);
	if (strcmp(ret1, "test") == 0)
		printf("%s1:OK ", KGRN);
	else
		printf("%s1:KO ", KRED);
	//printf("%s", ret1);
	free(ret1);

	char *ret2;
	char *test2 = "Thisisalongerteststring";
	ret2 = ft_substr(test2, 13, 30);
	if (strcmp(ret2, "teststring") == 0)
		printf("%s2:OK ", KGRN);
	else
		printf("%s2:KO ", KRED);
	//printf("%s", ret2);
	free(ret2);

	char *ret3;
	char *test3 = "Thisisalongerteststring";
	ret3 = ft_substr(test3, 30, 4);
	if (strcmp(ret3, "") == 0)
		printf("%s3:OK ", KGRN);
	else
		printf("%s3:KO ", KRED);
	//printf("%s", ret3);
	free(ret3);

	printf("\n%s", KNRM);
}
/*

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	str_i;
	char			*sptr;
	char			*ret;

	sptr = (char *)s;
	str_i = start;
	while (sptr[str_i] != '\0')
		str_i++;
	if (str_i - start < len)
		ret = malloc((str_i - start + 1) * sizeof(unsigned char));
	else
		ret = malloc((len + 1) * sizeof(unsigned char));
	if (ret == NULL)
		return (NULL);
	str_i = start;
	while (sptr[str_i] != '\0' || str_i - start <= len)
	{
		ret[str_i - start] = sptr[str_i];
		str_i++;
	}
	ret[str_i - start] = '\0';
	return (ret);
}

*/
