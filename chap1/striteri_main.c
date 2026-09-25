#include "libft.h"
#include <stdio.h>

void    up_(unsigned int i, char *c)
{
    if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
    {
        *c = *c - 32;
    }
}

int	main(void)
{
	char	test_iteri[] = "hello world";

	ft_striteri(test_iteri, up_);
	printf("%s", test_iteri);
	return (0);
}

