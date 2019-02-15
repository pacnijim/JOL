#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

#define RC write(1, "\n", 1);

void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putnbr(int n);
int		ft_facto(int nb);
void	ft_intarray_display(int *t, int size);
void	ft_intarray_facto(int *tab, int size);


#endif
