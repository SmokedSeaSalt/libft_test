#include <stdio.h>
#include "test.h"
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int test1 = 42;
	t_list *head = NULL;
	head = ft_lstnew(&test1);
	if (*(int *)(head->content) == test1)
		printf("%s1:OK ", KGRN);
	else
		printf("%s1:KO ", KRED);
	free(head);

	char *test2 = "thisisateststr";
	head = ft_lstnew(test2);
	if (strcmp((char *)head->content, test2) == 0)
		printf("%s2:OK ", KGRN);
	else
		printf("%s2:KO ", KRED);
	free(head);


	printf("\n%s", KNRM);
}
