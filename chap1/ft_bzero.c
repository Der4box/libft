#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t		i;
	unsigned char	*data;

	i = 0;
	data = (unsigned char *)s;
	while (i < n)
	{
		data[i] = 0;
		i++;
	}
}
