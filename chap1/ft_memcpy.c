#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned int	i;
	unsigned const char	*data_in;
	unsigned char	*data_to;

	i = 0;
	data_in = (const unsigned char *)src;
	data_to = (unsigned char *)dest;


	while (i < n)
	{
		data_to[i] = data_in[i];
		i++;
	}
	dest = (void *)data_to;
	return (dest);
}
