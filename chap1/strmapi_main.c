#include "libft.h"
#include <stdio.h>

char    up_(unsigned int i, char c)
{
    if (i % 2 == 0 && c >= 'a' && c <= 'z')
        return (c - 32); // Passage en majuscule
    return (c);
}

int	main(void)
{
	char	*test_mapi;
	
	test_mapi = ft_strmapi("hello world", up_);
	printf("%s", test_mapi);
	free(test_mapi);
	return (0);
}
