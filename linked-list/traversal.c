#include <stdio.h>

void	traversal(t_node head)
{
	while (head != NULL)
	{
		printf("%d  ->  ", head->data);
		head = head->next;
	}
	printf("NULL\n");
}
