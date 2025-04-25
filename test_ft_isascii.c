#include "../libft.h"
#include <stdio.h>
#include "test.h"

int main(void){

	if (ft_isascii('!') > 0)
		printf("%s1:OK ", KGRN);
	else
		printf("%s1:KO ", KRED);

	if (ft_isascii('A') > 0)
		printf("%s2:OK ", KGRN);
	else
		printf("%s2:KO ", KRED);

	if (ft_isascii('\0') > 0)
		printf("%s3:OK ", KGRN);
	else
		printf("%s3:KO ", KRED);

	if (ft_isascii(' ') > 0)
		printf("%s4:OK ", KGRN);
	else
		printf("%s4:KO ", KRED);

	if (ft_isascii(129) == 0)
		printf("%s4:OK ", KGRN);
	else
		printf("%s4:KO ", KRED);

	printf("\n%s", KNRM);
}




/*
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
*/
