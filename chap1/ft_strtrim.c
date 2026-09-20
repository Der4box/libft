#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	size_t	len_ret;
	size_t	i;
	size_t	j;
	size_t	first_char;
	size_t	last_char;

	i = 0;
	first_char = 0;
	if (!s1)
		return (NULL);
	if (!set || set[0] == '\0' || s1[0] == '\0')
	{
		ret = malloc(sizeof(char) * (ft_strlen(s1) + 1));
		if (!ret)
			return (NULL);
		while (s1[i])
		{
			ret[i] = s1[i];
			i++;
		}
		ret[i] = '\0';
		return (ret);
	}
	len_ret = ft_strlen(s1);
	last_char = len_ret - 1;
	ret = malloc(sizeof(char) * (len_ret + 1));
	if (!ret)
		return (NULL);
	while (s1[last_char] && last_char > 0)
	{
		j = 0;
		while (set[j])
		{
			if (s1[last_char] == set[j])
			{
				last_char--;
				break;
			}
			j++;
		}
		if (!set[j])
			break;
	}
	while (s1[first_char] && first_char < last_char)
	{
		j = 0;
		while (set[j])
		{
			if (s1[first_char] == set[j])
			{
				first_char++;
				break;
			}
			j++;
		}
		if (!set[j])
			break;
	}
	while (first_char <= last_char)
	{
		ret[i] = s1[first_char];
		i++;
		first_char++;
	}
	ret[i] = '\0';
	return (ret);
}
























