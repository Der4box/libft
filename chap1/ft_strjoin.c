#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;

	size_t	s1_len;
	size_t	s2_len;
	size_t	i;

	i = 0;

	if (!s1)
		s1_len = 0;
	else
		s1_len = ft_strlen(s1);
	if (!s2)
		s2_len = 0;
	else
		s2_len = ft_strlen(s2);

	ret = malloc(sizeof(char) *(s1_len + s2_len + 1));
	if (!ret)
		return (NULL);

	while (i < s1_len)
	{
		ret[i] = s1[i];
		i++;
	}
	while (i < (s1_len + s2_len))
	{
		ret[i] = s2[i - s1_len];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
