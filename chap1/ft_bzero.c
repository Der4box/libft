#include "libft.h"

void	ft_bzero(void *s, unsigned int n)
{
	unsigned int	i;
	unsigned char	*data;

	i = 0;
	data = (unsigned char *)s;
	while (i < n)
	{
		data[i] = 0;
		i++;
	}
}
