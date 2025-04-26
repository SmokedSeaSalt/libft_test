#include <stdio.h>
#include "test.h"
#include <string.h> //for strcmp
#include <stdlib.h> //for free

int main(void){
	char *ret1;
	char *s1a = "Thisisalongerteststring";
	char *s1b = "append";
	ret1 = ft_strjoin(s1a, s1b);
	if (strcmp(ret1, "Thisisalongerteststringappend") == 0)
		printf("%s1:OK ", KGRN);
	else
		printf("%s1:KO ", KRED);
	//printf("%s", ret1);
	free(ret1);

	char *ret2;
	char *s2a = "";
	char *s2b = "end";
	ret2 = ft_strjoin(s2a, s2b);
	if (strcmp(ret2, "end") == 0)
		printf("%s2:OK ", KGRN);
	else
		printf("%s2:KO ", KRED);
	//printf("%s", ret2);
	free(ret2);

	char *ret3;
	char *s3a = "start";
	char *s3b = "";
	ret3 = ft_strjoin(s3a, s3b);
	if (strcmp(ret3, "start") == 0)
		printf("%s3:OK ", KGRN);
	else
		printf("%s3:KO ", KRED);
	//printf("%s", ret3);
	free(ret3);

	char *ret4;
	char *s4a = "";
	char *s4b = "";
	ret4 = ft_strjoin(s4a, s4b);
	if (strcmp(ret4, "") == 0)
		printf("%s4:OK ", KGRN);
	else
		printf("%s4:KO ", KRED);
	//printf("%s", ret4);
	free(ret4);

	printf("\n%s", KNRM);
}


/*

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	int		s1len;
	int		i;

	i = 0;
	ret = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(unsigned char));
	if (ret == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		ret[i] = s1[i];
		i++;
	}
	s1len = i;
	i = 0;
	while (s2[i] != '\0')
	{
		ret[s1len + i] = s2[i];
		i++;
	}
	ret[s1len + i] = '\0';
	return (ret);
}
*/
