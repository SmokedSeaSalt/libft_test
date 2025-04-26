#include <stdio.h>
#include "test.h"
#include <stdlib.h>

int main(void){
	char *test1 = "0";
	if (ft_atoi(test1) == atoi(test1))
		printf("%s1:OK ", KGRN);
	else
		printf("%s1:KO ", KRED);

	char *test2 = "-123";
	if (ft_atoi(test2) == atoi(test2))
		printf("%s2:OK ", KGRN);
	else
		printf("%s2:KO ", KRED);

	char *test3 = "+456";
	if (ft_atoi(test3) == atoi(test3))
		printf("%s3:OK ", KGRN);
	else
		printf("%s3:KO ", KRED);

	char *test4 = "007";
	if (ft_atoi(test4) == atoi(test4))
		printf("%s4:OK ", KGRN);
	else
		printf("%s4:KO ", KRED);

	char *test5 = "2147483647"; //INT_MAX
	if (ft_atoi(test5) == atoi(test5))
		printf("%s5:OK ", KGRN);
	else
		printf("%s5:KO ", KRED);

	char *test6 = "-2147483648"; //INT_MIN
	if (ft_atoi(test6) == atoi(test6))
		printf("%s6:OK ", KGRN);
	else
		printf("%s6:KO ", KRED);

	char *test7 = "\t\n 123";
	if (ft_atoi(test7) == atoi(test7))
		printf("%s7:OK ", KGRN);
	else
		printf("%s7:KO ", KRED);

	char *test8 = "123abc";
	if (ft_atoi(test8) == atoi(test8))
		printf("%s8:OK ", KGRN);
	else
		printf("%s8:KO ", KRED);

	char *test9 = "+-42";
	if (ft_atoi(test9) == atoi(test9))
		printf("%s9:OK ", KGRN);
	else
		printf("%s9:KO ", KRED);
	//printf("%d %d", ft_atoi(test9), atoi(test9));

	char *test10 = "  + 123";
	if (ft_atoi(test10) == atoi(test10))
		printf("%s10:OK ", KGRN);
	else
		printf("%s10:KO ", KRED);

	printf("\n%s", KNRM);
}


/*

int	ft_atoi(const char *nptr)
{
	int		i;
	int		nflag;
	long	result;

	result = 0;
	i = 0;
	nflag = 1;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '+')
		i++;
	if (nptr[i] == '-')
	{
		nflag = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]) && nptr[i] != '\0')
	{
		result *= 10;
		result += (nptr[i] - '0');
		i++;
	}
	return ((int) result * nflag);
}


*/
