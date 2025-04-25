#include "../libft.h"
#include <stdio.h>
#include "test.h"
#include <bsd/string.h>

int main(void){
	int ret1a = 0;
	char *src1a = "cat";
	char dest1a[30] = "strl";
	ret1a = ft_strlcat(dest1a, src1a, 8);
	//printf("%s\n", dest1a);

	int ret1b = 0;
	char *src1b = "cat";
	char dest1b[30] = "strl";
	ret1b = strlcat(dest1b, src1b, 8);
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
	char *src2a = "cat";
	char dest2a[30] = "strl";
	ret2a = ft_strlcat(dest2a, src2a, 2);
	//printf("%s\n", dest2a);

	int ret2b = 0;
	char *src2b = "cat";
	char dest2b[30] = "strl";
	ret2b = strlcat(dest2b, src2b, 2);
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
	char *src3a = "cat";
	char dest3a[30] = "strl";
	ret3a = ft_strlcat(dest3a, src3a, 0);
	//printf("%s\n", dest3a);

	int ret3b = 0;
	char *src3b = "cat";
	char dest3b[30] = "strl";
	ret3b = strlcat(dest3b, src3b, 0);
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
	char *src4a = "cat";
	char dest4a[30] = "strl";
	ret4a = ft_strlcat(dest4a, src4a, 15);
	//printf("%s\n", dest4a);

	int ret4b = 0;
	char *src4b = "cat";
	char dest4b[30] = "strl";
	ret4b = strlcat(dest4b, src4b, 15);
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
	char *src5a = "cat";
	char dest5a[30] = "strl";
	ret5a = ft_strlcat(dest5a, src5a, 7);
	//printf("%s\n", dest5a);

	int ret5b = 0;
	char *src5b = "cat";
	char dest5b[30] = "strl";
	ret5b = strlcat(dest5b, src5b, 7);
	//printf("%s\n", dest5b);

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
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_index;
	size_t	src_index;
	size_t	total_len;

	dest_index = 0;
	src_index = 0;
	total_len = ft_getstrsize(dest) + ft_getstrsize(src);
	while (dest[dest_index] != '\0' && dest_index < size)
	{
		dest_index++;
	}
	if (dest_index == size)
	{
		return (size + ft_getstrsize(src));
	}
	while (src[src_index] != '\0' && dest_index < size - 1)
	{
		dest[dest_index] = src[src_index];
		dest_index++;
		src_index++;
	}
	dest[dest_index] = '\0';
	return (total_len);
}
*/
