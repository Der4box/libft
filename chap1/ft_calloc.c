#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t		i;
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
