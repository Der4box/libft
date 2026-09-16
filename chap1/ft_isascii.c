#include "libft.h"

int	ft_isascii(char c)
{
	unsigned char	data;

	data = (unsigned char)c;
	if (data <= 127)
		return (1);
	return (0);
}
