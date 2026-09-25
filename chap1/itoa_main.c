#include "libft.h"
#include <stdio.h>

long	power_ret(long nbr, int power);

int	main(void)
{
	int	test_nbr;
	char	*test_itoa;

	test_nbr = 0;
	test_itoa = ft_itoa(test_nbr);
	printf("%s", test_itoa);
	free(test_itoa);
	//printf("%ld", power_ret(10, 2));
	return (0);
}
