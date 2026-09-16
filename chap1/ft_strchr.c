#include "libft.h"

char	*strchr(const char *s, int c)
{
	char	data;
	char	*str;

	data = (char)c;
	str = (char *)s;
	while (*str)
	{
		if (*str == data)
			return (str);
		str++;
	}
	if (data == '\0')
		return (str);
	return (NULL);
}
