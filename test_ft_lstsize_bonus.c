#include <stdio.h>
#include "test.h"
#include <stdlib.h>
#include <string.h>

int main(void)
{
	//setup
	t_list *head = NULL;
	if (ft_lstsize(head) == 0)
		printf("%s1:OK ", KGRN);
	else
		printf("%s1:KO ", KRED);

	int test1 = 42;
	ft_lstadd_front(&head, ft_lstnew(&test1));
	char *test2 = "thisisateststr";
	ft_lstadd_front(&head, ft_lstnew(test2));

	if (ft_lstsize(head) == 2)
		printf("%s2:OK ", KGRN);
	else
		printf("%s2:KO ", KRED);
	free(head->next);
	free(head);

	printf("\n%s", KNRM);
}
