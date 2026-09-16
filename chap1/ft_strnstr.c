#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, unsigned int len)
{
	unsigned int	i;
	unsigned int	j;
	char		*data_b;
	char		*data_l;

	i = 0;
	data_b = (char *)big;
	data_l = (char *)little;
	while (i < len && data_b[i])
	{
		j = 0;
		while (i < len && data_b[i] && data_b[i] == data_l[j])
		{
			i++;
			j++;
		}
		if (data_l[j] == '\0')
			return (&data_b[i - j]);
		i = i - j;
		i++;
	}
	if (data_l[0] == '\0')
		return (data_b);
	return (NULL);
}
