#include "../libft.h"
#include <stdio.h>
#include "test.h"
#include "string.h"

int main(void){

	char *str1a = "TEST";
	char *str1b = "TEST";
	size_t n1 = 0;
	if (ft_strncmp(str1a, str1b, n1) == strncmp(str1a, str1b, n1))
		printf("%s1:OK ", KGRN);
	else
		printf("%s1:KO ", KRED);

	char *str2a = "TEST";
	char *str2b = "TEST";
	size_t n2 = 5;
	if (ft_strncmp(str2a, str2b, n2) == strncmp(str2a, str2b, n2))
		printf("%s2:OK ", KGRN);
	else
		printf("%s2:KO ", KRED);

	char *str3a = "TEST";
	char *str3b = "TEST";
	size_t n3 = 15;
	if (ft_strncmp(str3a, str3b, n3) == strncmp(str3a, str3b, n3))
		printf("%s3:OK ", KGRN);
	else
		printf("%s3:KO ", KRED);

	char *str4a = "TES";
	char *str4b = "TEST";
	size_t n4 = 5;
	if (ft_strncmp(str4a, str4b, n4) < 0 && strncmp(str4a, str4b, n4) < 0)
		printf("%s4:OK ", KGRN);
	else
		printf("%s4:KO ", KRED);
	//printf("%d , %d", ft_strncmp(str4a, str4b, n4), strncmp(str4a, str4b, n4));


	char *str5a = "TEST";
	char *str5b = "TES";
	size_t n5 = 5;
	if (ft_strncmp(str5a, str5b, n5) > 0 && strncmp(str5a, str5b, n5) > 0)
		printf("%s5:OK ", KGRN);
	else
		printf("%s5:KO ", KRED);
	//printf("%d , %d", ft_strncmp(str5a, str5b, n5), strncmp(str5a, str5b, n5));

	char *str6a = "TEST";
	char *str6b = "TEST";
	size_t n6 = 3;
	if (ft_strncmp(str6a, str6b, n6) == strncmp(str6a, str6b, n6))
		printf("%s6:OK ", KGRN);
	else
		printf("%s6:KO ", KRED);

	printf("\n%s", KNRM);
}



/*


int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] == '\0' || s2[i] == '\0')
		{
			return (s1[i] - s2[i]);
		}
		if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
		if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

*/
