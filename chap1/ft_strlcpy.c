#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	len_src;


	i = 0;
	len_src = ft_strlen(src);
	if (len_src < size)
		size = (len_src + 1);
	if (size != 0)
	{
		while (i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len_src);
}
