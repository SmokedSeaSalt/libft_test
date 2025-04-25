#include <stdio.h>
#include "test.h"

int main(void){

	if (ft_isalnum('!') == 0)
		printf("%s1:OK ", KGRN);
	else
		printf("%s1:KO ", KRED);

	if (ft_isalnum('A') > 1)
		printf("%s2:OK ", KGRN);
	else
		printf("%s2:KO ", KRED);

	if (ft_isalnum('\0') == 0)
		printf("%s3:OK ", KGRN);
	else
		printf("%s3:KO ", KRED);

	if (ft_isalnum(' ') == 0)
		printf("%s4:OK ", KGRN);
	else
		printf("%s4:KO ", KRED);

	printf("\n%s", KNRM);
}




/*
int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || \
	(c >= '0' && c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}*/
