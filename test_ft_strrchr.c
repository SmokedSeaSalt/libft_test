#include <stdio.h>
#include "test.h"
#include "string.h"

int main(void){

	char *str1 = "";
	int c1 = 'a';
	if (ft_strrchr(str1, c1) == strrchr(str1, c1))
		printf("%s1:OK ", KGRN);
	else
		printf("%s1:KO ", KRED);

	char *str2 = "test";
	int c2 = 's';
	if (ft_strrchr(str2, c2) == strrchr(str2, c2))
		printf("%s2:OK ", KGRN);
	else
		printf("%s2:KO ", KRED);

	char *str3 = "test";
	int c3 = '\0';
	if (ft_strrchr(str3, c3) == strrchr(str3, c3))
		printf("%s3:OK ", KGRN);
	else
		printf("%s3:KO ", KRED);

	printf("\n%s", KNRM);
}



/*

char	*ft_strrchr(const char *s, int c)
{
	char	*strp;
	int		i;

	strp = (char *)s;
	i = 0;
	while (strp[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (strp[i] == c)
			return (&strp[i]);
		i--;
	}
	return ((void *)0);
}

*/
