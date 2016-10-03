#include "libft.h"

/*
** Prints a given integer in a given base to stdout.
*/
void	ft_putint_base(int integer, int base)
{
	ft_putint_base_fd(integer, base, 1);
}
