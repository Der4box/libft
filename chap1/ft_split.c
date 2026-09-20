#include "libft.h"

size_t	len_w(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

size_t	count_w(const char *str, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i]!= c)
		{
			while (str[i] && str[i] != c)
				i++;
			count++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	size_t	x;
	size_t	i;
	size_t	j;
	size_t	len;
	char	**ret_split;

	if (!s)
		return (NULL);
	count = count_w(s, c);
	i = 0;
	x = 0;
	if (count == 0)
	{

		ret_split = malloc(sizeof(char *));
		ret_split[0] = NULL;
		return (ret_split);
	}	
	ret_split = malloc(sizeof(char *) * (count + 1));
	if (!ret_split)
		return (NULL);
	ret_split[count] = NULL;
	while (i < count)
	{
		j = 0;
		while (s[x] == c)
			x++;
		if (s[x])
		{
			len = len_w(&s[x], c);
			ret_split[i] = malloc(sizeof(char) * (len + 1));
			while (s[x] && s[x] != c)
			{
				ret_split[i][j] = s[x];
				x++;
				j++;
			}
			ret_split[i][j] = '\0';
		}
		i++;
	}
	return (ret_split);
}


















