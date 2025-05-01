#include <stdio.h>
#include "test.h"
#include <stdlib.h>

// Simple function to apply: adds 1 to an int
void *addone(void *content)
{
    int *new_int = malloc(sizeof(int));
    if (new_int == NULL)
        return (NULL);
    *new_int = *(int *)content + 1;
    return (new_int);
}

// Simple delete function for ints
void del(void *content)
{
    free(content);
}

int main()
{
    // setup
    t_list *head = NULL;
    int val1 = 42;
    int val2 = 21;
	int *ptr1 = malloc(sizeof(int));
	if (ptr1 == NULL)
		return (-1);
	int *ptr2 = malloc(sizeof(int));
	if (ptr2 == NULL)
		return (-1);
	*ptr1 = val1;
	*ptr2 = val2;

    ft_lstadd_back(&head, ft_lstnew(ptr1));
    ft_lstadd_back(&head, ft_lstnew(ptr2));

    t_list *new_list = ft_lstmap(head, &addone, &del);

    if (*(int *)(new_list->content) == val1 + 1)
        printf("%s1:OK ", KGRN);
    else
        printf("%s1:KO ", KRED);

    if (*(int *)(new_list->next->content) == val2 + 1)
        printf("%s2:OK ", KGRN);
    else
        printf("%s2:KO ", KRED);

    // clean up
    ft_lstclear(&head, &del);       // no malloc'd content in head
    ft_lstclear(&new_list, &del);   // free malloc'd ints in new_list

    printf("\n%s", KNRM);
}
