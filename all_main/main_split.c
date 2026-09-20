#include "libft.h"

int	main(void)
{
	const char	*str;
	char	**test_split;
	size_t	i;
	size_t	j;

	i = 0;

	str = "hello world   est ce que ca vaaaa ! /? !!! ? hi   ";

	test_split = ft_split(str, ' ');
	while (test_split[i])
	{
		write (1, "\"", 1);
		j = 0;
		while (test_split[i][j])
		{
			write (1, &test_split[i][j], 1);
			j++;
		}
		i++;
		write (1, "\"\n", 2);
	}
	free(test_split);
	return (0);
}
