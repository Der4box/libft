#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;
	int	mod;

	nbr = (long)n;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = nbr * (-1);
	}
	mod = nbr % 10;
	nbr = nbr / 10;
	if (nbr > 0)
		ft_putnbr_fd(nbr, fd);
	ft_putchar_fd((mod + '0'), fd);
}
