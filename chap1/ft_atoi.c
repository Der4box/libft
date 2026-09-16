#include "libft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nb;
	int	mod;

	i = 0;
	sign = 1;
	nb = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		mod = str[i] - '0';
		nb = (nb * 10) + mod;
		i++;
	}
	return (nb * sign);
}
