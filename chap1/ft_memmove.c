#include "libft.h"

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	unsigned int		i;
	unsigned const char	*data_in;
	unsigned char	*data_to;


	i = 0;
	data_in = (const unsigned char *)src;
        data_to = (unsigned char *)dest;

	if (dest < src)
	{
		while (i < n)
		{
			data_to[i] = data_in[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			data_to[i] = data_in[i];
		}
	}
	return ((void *)dest);

}
