#include <stdio.h>
#include "test.h"
#include <stdlib.h>
#include <string.h>

int main(void)
{
	//setup
	int test1 = 42;
	t_list *head = NULL;
	ft_lstadd_back(&head, ft_lstnew(&test1));
	char *test2 = "thisisateststr";
	ft_lstadd_back(&head, ft_lstnew(test2));

	if (*(int *)(head->content) == test1)
		printf("%s1:OK ", KGRN);
	else
		printf("%s1:KO ", KRED);

	if (strcmp((char *)head->next->content, test2) == 0)
		printf("%s2:OK ", KGRN);
	else
		printf("%s2:KO ", KRED);
	free(head->next);
	free(head);

	printf("\n%s", KNRM);
}
