#include <stdlib.h>
#include <stdio.h>

typedef struct	s_node
{
	int	data;
	struct	s_node *next;
}t_node;


t_node	*new_node(int data)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	node->data = data;
	node->next = NULL;
	return (node);
}

int	ft_atoi(char *s)
{
	int	ret;
	int	new;
	int	sign;
	int	i;

	ret = 0;
	sign = 1;
	i = 0;
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		new = s[i] - '0';
		ret = ret * 10 + new;
		i++;
	}
	return (ret * sign);
}

int	*stock_av(int ac, char **av)
{
	int	*stock;
	int	i;

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


t_node	**list_node(int *stock, int	size)
{
	t_node	**list;
	int	i;

	i = 0;
	list = malloc(sizeof(t_node) * size);
	if (!list)
		return (NULL);
	while (i < size)
	{
		list[i] = new_node(stock[i]);
		if (i > 0)
			list[i - 1]->next = list[i];
		i++;
	}
	return (list);
}

void	aff_list_node(t_node **list, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("[%d]\t->\t", list[i]->data);
		i++;
	}
	printf("NULL\n");
}

void	free_all(t_node **list, int *tab, int size)
{
	int	i;

	free(tab);
	if (list)
	{
		i = 0;
		while (i < size)
		{
			if (list[i])
				free(list[i]);
			i++;
		}
		free(list);
	}
}

int	main(int ac, char **av)
{
	int	*tab;
	t_node	**list;

	if (ac == 1)
	{
		printf("Veuillez entrer votre data\n");
		return (0);
	}
	tab = stock_av(ac, av);
	if (!tab)
		return (0);
	tab = stock_av(ac, av);
	list = list_node(tab, (ac - 1));
	if (!list)
	{
		free(tab);
		return (0);
	}
	list = list_node(tab, (ac - 1));
	aff_list_node(list, (ac - 1));
	free_all(list, tab, (ac - 1));
	return (0);

}










