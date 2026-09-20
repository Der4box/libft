#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned const char	*data1;
	unsigned const char	*data2;
	
	i = 0;
	data1 = (unsigned const char *)s1;
	data2 = (unsigned const char *)s2;
	
	while (i < n && data1[i] == data2[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return (data1[i] - data2[i]);
}
