#include "libft.h"

void	ft_intarray_display(int *t, int size)
{
	int		i;

	i = -1;
	write(1, "| ", 2);
	while (++i < size)
	{
		ft_putnbr(t[i]);
		if (i < size - 1)
			write(1, " | ", 3);
	}
	write(1, " |", 2);
}