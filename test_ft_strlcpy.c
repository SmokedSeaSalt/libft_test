#include <stdio.h>
#include "test.h"
#include <bsd/string.h>

int main(void){
	int ret1a = 0;
	char *src1a = "cpy";
	char dest1a[30] = "strl";
	ret1a = ft_strlcpy(dest1a, src1a, 8);
	//printf("%s\n", dest1a);

	int ret1b = 0;
	char *src1b = "cpy";
	char dest1b[30] = "strl";
	ret1b = strlcpy(dest1b, src1b, 8);
	//printf("%s\n", dest1b);

	if (ret1a == ret1b)
		printf("%s1:OK ", KGRN);
	else
		printf("%s1:KO ", KRED);

	if (strcmp(dest1a, dest1b) == 0)
		printf("%s2:OK ", KGRN);
	else
		printf("%s2:KO ", KRED);

	int ret2a = 0;
	char *src2a = "cpy";
	char dest2a[30] = "strl";
	ret2a = ft_strlcpy(dest2a, src2a, 2);
	//printf("%s\n", dest2a);

	int ret2b = 0;
	char *src2b = "cpy";
	char dest2b[30] = "strl";
	ret2b = strlcpy(dest2b, src2b, 2);
	//printf("%s\n", dest2b);

	if (ret2a == ret2b)
		printf("%s3:OK ", KGRN);
	else
		printf("%s3:KO ", KRED);

	if (strcmp(dest2a, dest2b) == 0)
		printf("%s4:OK ", KGRN);
	else
		printf("%s4:KO ", KRED);

	int ret3a = 0;
	char *src3a = "cpy";
	char dest3a[30] = "strl";
	ret3a = ft_strlcpy(dest3a, src3a, 0);
	//printf("%s\n", dest3a);

	int ret3b = 0;
	char *src3b = "cpy";
	char dest3b[30] = "strl";
	ret3b = strlcpy(dest3b, src3b, 0);
	//printf("%s\n", dest3b);

	if (ret3a == ret3b)
		printf("%s5:OK ", KGRN);
	else
		printf("%s5:KO ", KRED);

	if (strcmp(dest3a, dest3b) == 0)
		printf("%s6:OK ", KGRN);
	else
		printf("%s6:KO ", KRED);

	int ret4a = 0;
	char *src4a = "cpy";
	char dest4a[30] = "strl";
	ret4a = ft_strlcpy(dest4a, src4a, 15);
	//printf("%s\n", dest4a);

	int ret4b = 0;
	char *src4b = "cpy";
	char dest4b[30] = "strl";
	ret4b = strlcpy(dest4b, src4b, 15);
	//printf("%s\n", dest4b);

	if (ret4a == ret4b)
		printf("%s7:OK ", KGRN);
	else
		printf("%s7:KO ", KRED);

	if (strcmp(dest4a, dest4b) == 0)
		printf("%s8:OK ", KGRN);
	else
		printf("%s8:KO ", KRED);

	int ret5a = 0;
	char *src5a = "cpy";
	char dest5a[30] = "strl";
	ret5a = ft_strlcpy(dest5a, src5a, 7);
	//printf("%d\n", ret5a);

	int ret5b = 0;
	char *src5b = "cpy";
	char dest5b[30] = "strl";
	ret5b = strlcpy(dest5b, src5b, 7);
	//printf("%d\n", ret5b);

	if (ret5a == ret5b)
		printf("%s9:OK ", KGRN);
	else
		printf("%s9:KO ", KRED);

	if (strcmp(dest5a, dest5b) == 0)
		printf("%s10:OK ", KGRN);
	else
		printf("%s10:KO ", KRED);

	printf("\n%s", KNRM);

}




/*

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	srclen = i;
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (srclen);
}
*/
