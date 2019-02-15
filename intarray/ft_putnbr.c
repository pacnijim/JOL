#include "libft.h"

static void		ft_nbr_display(char nbr)
{
	write(1, &nbr, 1);
}

void			ft_putnbr(int n)
{
	int		diviseur;

	diviseur = 1;
	if (n < 0)
	{
		write (1, "-", 1);
		n = -n;
	}
	while ((n / diviseur) > 9)
		diviseur *= 10;
	while (diviseur != 0)
	{
		ft_nbr_display('0' + (n / diviseur % 10));
		diviseur /= 10;
	}
}
