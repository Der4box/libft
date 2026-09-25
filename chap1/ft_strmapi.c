#include "libft.h"

char	*ft_strmapi(char *s, char (*f)(unsigned int, char))
{
	char	*ret;
	int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	ret = malloc(sizeof(char) * (ft_strlen(s) + 1));
	while (s[i])
	{
		ret[i] = f(i, s[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
