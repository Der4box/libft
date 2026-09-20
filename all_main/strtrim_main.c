#include "libft.h"
#include <stdio.h>

int	main()
{
	char	*test;
	test = ft_strtrim("","-");
	printf("%s", test);
	free(test);
	return (0);
}
