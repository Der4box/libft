#include <stdlib.h>
#include <stdio.h>


//create a node
//create a pointer of this first node
//link


typedef struct	s_node
{
	int		data;
	struct s_node	*next;
}t_node;

t_node	*new_node(int data)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}

void	linker(t_node **head_of_list, t_node *first_node)
{
	*head_of_list = first_node;
}

int     *stock_av(int ac, char **av)
{
        int     *stock;
        int     i;

        i = 0;
        stock = malloc(sizeof(int) * (ac - 1));
        if (!stock)
                return (NULL);
        while (i < (ac - 1))
        {
                stock[i] = ft_atoi(av[i + 1]);
                i++;
        }
        return (stock);
}

void    free_all(t_node *head, int *tab)
{
	t_node	*temp;

        free(tab);
        while (node)
        {
		temp = head->next;
		free(head);
		head = temp;
        }
}

void	create_list(t_node *head, int *stock, int     size)
{
        t_node  *next;
        int     i;

        i = 0;
        if (!head)
                return (NULL);
	head = new_node(stock[i])
        while (i < size)
        {
		next = malloc(sizeof(t_node));
                next = new_node(stock[i]);
                if (i > 0)
                        head->next = list[i];
                i++;
		head = next;

        }
}






















