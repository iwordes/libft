#include "libft.h"

/*
** Prints a given integer, in base-10 (decimal), to stdout.
*/
void		ft_putint(int integer)
{
	ft_putint_base_fd(integer, 10, 1);
}
