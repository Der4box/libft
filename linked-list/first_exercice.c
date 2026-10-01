#include <stdlib.h>
#include <stdio.h>

typedef	struct	s_node
{
	char	*data;
	struct	s_node *next;
}t_node;

t_node *new_node(char *value)
{
	t_node	*node;
	
	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->data = value;
	node->next = NULL;
	return (node);
}

void	aff_liste(t_node *head)
{
	t_node	*current;

	current = head;
	while (current != NULL)
	{
		printf("%s\t", current->data);
		current = current->next;
	}
	printf("NULL\n");
}

int	main(int ac, char **av)
{
	t_node	*a, *b, *c;
	if (ac == 4)
	{
		a = new_node(av[1]);
		b = new_node(av[2]);
		c = new_node(av[3]);

		a->next = b;
		b->next = c;

		aff_liste(a);
	}else
		printf("veuillez entrer trois valeurs\n");



	return (0);
}
