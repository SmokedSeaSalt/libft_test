#include "../libft.h"
#include <stdio.h>
#include "test.h"
#include <bsd/string.h>

int main(void){

	char *str1a = "TEST";
	char *str1b = "TEST";
	size_t n1 = 0;
	if (ft_strnstr(str1a, str1b, n1) == strnstr(str1a, str1b, n1))
		printf("%s1:OK ", KGRN);
	else
		printf("%s1:KO ", KRED);

	char *str2a = "TEST";
	char *str2b = "TEST";
	size_t n2 = 2;
	if (ft_strnstr(str2a, str2b, n2) == strnstr(str2a, str2b, n2))
		printf("%s2:OK ", KGRN);
	else
		printf("%s2:KO ", KRED);
	//printf("%s",ft_strnstr(str2a, str2b, n2));
	//printf("%s",strnstr(str2a, str2b, n2));

	char *str3a = "TEST";
	char *str3b = "TEST";
	size_t n3 = 4;
	if (ft_strnstr(str3a, str3b, n3) == strnstr(str3a, str3b, n3))
		printf("%s3:OK ", KGRN);
	else
		printf("%s3:KO ", KRED);

	char *str4a = "thisisalongerTESTforstrnstr";
	char *str4b = "TEST";
	size_t n4 = 27;
	if (ft_strnstr(str4a, str4b, n4) == strnstr(str4a, str4b, n4))
		printf("%s4:OK ", KGRN);
	else
		printf("%s4:KO ", KRED);

	char *str5a = "TEST";
	char *str5b = "";
	size_t n5 = 4;
	if (ft_strnstr(str5a, str5b, n5) == strnstr(str5a, str5b, n5))
		printf("%s5:OK ", KGRN);
	else
		printf("%s5:KO ", KRED);

	printf("\n%s", KNRM);
}


/*

char	*str_strnstr(const char *big,	const char *little, size_t len)
{
	char	*bigp;
	size_t	str_index;

	bigp = (char *)big;
	str_index = 0;
	if (little[0] == '\0')
		return (bigp);
	while (bigp[str_index] != '\0' && str_index < len)
	{
		if (bigp[str_index] == little[0])
		{
			if (ft_to_findcmp(&bigp[str_index], little) == 0)
			{
				return (&bigp[str_index]);
			}
		}
		str_index++;
	}
	return (0);
}

*/
