
#include "../libft.h"
#include <stdio.h>
#include "test.h"

int main(void){

	char c1 = ' ';
	if (ft_toupper(c1) == ' ')
		printf("%s1:OK ", KGRN);
	else
		printf("%s1:KO ", KRED);

	char c2 = 'x';
	if (ft_toupper(c2) == 'X')
		printf("%s2:OK ", KGRN);
	else
		printf("%s2:KO ", KRED);

	char c3 = 'X';
	if (ft_toupper(c3) == 'X')
		printf("%s3:OK ", KGRN);
	else
		printf("%s3:KO ", KRED);

	printf("\n%s", KNRM);
}

/*

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
*/
