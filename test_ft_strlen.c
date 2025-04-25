#include "../libft.h"
#include <stdio.h>
#include "test.h"

int main(void){

	char *str1 = "";
	if (ft_strlen(str1) == 0)
		printf("%s1:OK ", KGRN);
	else
		printf("%s1:KO ", KRED);

	char *str2 = "test";
	if (ft_strlen(str2) == 4)
		printf("%s2:OK ", KGRN);
	else
		printf("%s2:KO ", KRED);

	printf("\n%s", KNRM);
}




/*

size_t	ft_strlen(char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
*/
