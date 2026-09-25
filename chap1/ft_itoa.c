#include "libft.h"

int	power_ret(long nbr, int power)
{
	long	ret;

	ret = 1;
	if (power == 0)
		return (1);
	else if (power == 1)
		return (nbr);
	while (power > 0)
	{
		ret = ret * nbr;
		power--;
	}
	return (ret);
}

int	size_ret(long nbr)
{
	int	size;
	size = 0;

	if (nbr <= 0)
		size++;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	long	nbr;
	int	size;
	char	*ret;
	int	save;
	int	i;

	nbr = (long)n;
	size = size_ret(nbr);
	ret = malloc(sizeof(char) * (size + 1));
	if (!ret)
		return (0);
	i = 0;
	if (nbr < 0)
	{
		ret[0] = '-';
		nbr = nbr * (-1);
		i++;
		size--;
	}
	while (size > 0)
	{
		save = nbr / power_ret(10, (size - 1));
		ret[i] = save + '0';
		nbr = nbr - (save * power_ret(10, (size - 1)));
		i++;
		size--;
	}
	ret[i] = '\0';
	return (ret);
}
