#include "libft.h"

void	*ft_calloc(unsigned int count, unsigned int size)
{
	unsigned int	i;
	void		*ret;
	char		*data;

	i = 0;
	data = malloc(size * count);
	if (data == NULL)
		return (NULL);
	while (i <= count)
	{
		data[i] = '\0';
		i++;
	}
	ret = (void *)data;
	return (ret);
}
