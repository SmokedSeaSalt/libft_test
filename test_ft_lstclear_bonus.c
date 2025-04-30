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
	int *test1 = malloc(sizeof(int*));
	if (test1 == NULL)
		return (-1);
	t_list *head = NULL;
	ft_lstadd_back(&head, ft_lstnew(test1));
	int *test2 = malloc(sizeof(int*));
	ft_lstadd_back(&head, ft_lstnew(test2));

	ft_lstclear(&head, &ft_delcontent);
	if (head == NULL)
		printf("%s2:OK ", KGRN);
	else
		printf("%s2:KO ", KRED);

	printf("\n%s", KNRM);
}

