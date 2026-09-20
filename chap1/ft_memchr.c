#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*str;
	unsigned char		data;
	size_t			i;

	str = (unsigned char *)s;
	data = (unsigned char)c;
	i = 0;

	while (i < n && str[i] != data)
	{
		i++;
	}
	if (i == n)
		return (NULL);
	return ((void *)&str[i]);
}
