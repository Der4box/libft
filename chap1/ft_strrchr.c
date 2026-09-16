#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
        int	i;
	char    data;
        char    *str;

	data = (char)c;
        str = (char *)s;
        i = ft_strlen(str);
        if (data == '\0')
		return (&str[i]);

	while (i > 0)
        {
		i--;
                if (str[i] == data)
                        return (&str[i]);
        }
        return (NULL);
}
