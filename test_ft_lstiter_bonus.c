#include <stdio.h>
#include "test.h"
#include <stdlib.h>
#include <string.h>

static void addone(void *val)
{
	*(int *)val += 1;
}


int main(void)
{
	//setup
	t_list *head = NULL;
	int test1val = 42;
	int *test1 = &test1val;
	ft_lstadd_back(&head, ft_lstnew(test1));
	ft_lstadd_back(&head, ft_lstnew(test1));

	ft_lstiter(head, &addone);

	if (*(int *)(head->content) == test1val)
		printf("%s1:OK ", KGRN);
	else
		printf("%s1:KO ", KRED);

	if (*(int *)(head->next->content) == test1val)
		printf("%s2:OK ", KGRN);
	else
		printf("%s2:KO ", KRED);
	free(head->next);
	free(head);

	printf("\n%s", KNRM);
}
