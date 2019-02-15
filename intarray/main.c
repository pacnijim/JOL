#include "libft.h"

int		main(int ac, char *av[])
{
	int		t[6] = {0, 1, 2, 3, 4, 5};
	int		size = 6;

	ft_intarray_display(t, size);
	RC;
	ft_intarray_facto(t, size);
	ft_intarray_display(t, size);
	RC;
	return (0);
}
