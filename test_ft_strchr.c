#include "../libft.h"
#include <stdio.h>
#include "test.h"

int main(void){

	char *str1 = "";
	int c1 = 'a';
	if (ft_strchr(str1, c1) == NULL)
		printf("%s1:OK ", KGRN);
	else
		printf("%s1:KO ", KRED);

	char *str2 = "test";
	int c2 = 's';
	if (ft_strchr(str2, c2) == &str2[2])
		printf("%s2:OK ", KGRN);
	else
		printf("%s2:KO ", KRED);

	char *str3 = "test";
	int c3 = '\0';
	if (ft_strchr(str3, c3) == &str3[4])
		printf("%s3:OK ", KGRN);
	else
		printf("%s3:KO ", KRED);

	printf("\n%s", KNRM);
}





/*

char	*ft_strchr(const char *s, int c)
{
	char	*strp;
	int		i;

	strp = (char *)s;
	i = 0;
	while (strp[i] != '\0')
	{
		if (strp[i] == c)
			return (&strp[i]);
		i++;
	}
	if (strp[i] == c)
		return (&strp[i]);
	return ((void *)0);
}

*/
