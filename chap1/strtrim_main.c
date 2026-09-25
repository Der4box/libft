#include "libft.h"
#include <stdio.h>

int	main()
{
	char	*test;
	test = ft_strtrim("--hello--","-");
	printf("%s", test);
	free(test);
	return (0);
}
