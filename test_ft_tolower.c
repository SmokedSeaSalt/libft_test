
#include "../libft.h"
#include <stdio.h>
#include "test.h"

int main(void){

	char c1 = ' ';
	if (ft_tolower(c1) == ' ')
		printf("%s1:OK ", KGRN);
	else
		printf("%s1:KO ", KRED);

	char c2 = 'X';
	if (ft_tolower(c2) == 'x')
		printf("%s2:OK ", KGRN);
	else
		printf("%s2:KO ", KRED);

	char c3 = 'x';
	if (ft_tolower(c3) == 'x')
		printf("%s3:OK ", KGRN);
	else
		printf("%s3:KO ", KRED);

	printf("\n%s", KNRM);
}

/*
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
*/
