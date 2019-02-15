#include "libft.h"

void	ft_intarray_facto(int *tab, int size)
{
	int		i;

	i = -1;
	while (++i < size)
	{
		tab[i] = ft_facto(tab[i]);
	}
}