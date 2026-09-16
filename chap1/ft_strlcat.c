#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_dest;
	unsigned int	len_src;

	i = ft_strlen(dest);
	j = 0;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (len_dest > (size - 1) || (size - 1) == 0)
		;
	else 
	{
		while (i < (size - 1) && src[j])
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
	}
	return (size + len_src);
}
