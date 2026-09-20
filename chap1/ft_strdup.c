#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*ret;
	size_t		len_s;
	size_t		i;

	if (!s)
		return (NULL);
	len_s = ft_strlen((char *)s);
	i = 0;
	ret = malloc(sizeof(char) * (len_s + 1));
	if (!ret)
		return (NULL);
	while (i < len_s)
	{
		ret[i] = s[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
