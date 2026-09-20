#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);

	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);

	if (start < ft_strlen(s))
	{
		while (i < len && s[start + i])
		{
			ret[i] = s[start + i];
			i++;
		}
	}
	ret[i] = '\0';
	return (ret);
}
