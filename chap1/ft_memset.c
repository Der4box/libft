#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	char		*data;

	i = 0;
	data = (char *)s;
	// cast utiliser afin de pouvoir se deplacer de la bonne maniere sur la zoner ciblee
	while (i < n)
	{
		data[i] = c;
		i++;
	}
	return (s);
}
