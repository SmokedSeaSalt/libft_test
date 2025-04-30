#include <stdio.h>
#include "test.h"
#include <stdlib.h>
#include <string.h>

static void ft_delcontent(void *ptr)
{
	free(ptr);
}

int main(void)
{
	//setup
	int *test1 = malloc(sizeof(int));
	if (test1 == NULL)
		return (-1);
	t_list *head = NULL;
	ft_lstadd_back(&head, ft_lstnew(test1));
	int *test2 = malloc(sizeof(int));
	ft_lstadd_back(&head, ft_lstnew(test2));

	ft_lstdelone(head->next, &ft_delcontent);
	ft_lstdelone(head, &ft_delcontent);

	printf("%sI don't know how to test this one.\nIf it compiled and ran without memory leaks this should be fine.", KBLU);

	printf("\n%s", KNRM);
}
