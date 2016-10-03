#include "libft.h"

/*
** Prints a given integer, in a given base, to a given file descriptor.
*/
void				print_integer_in_base_to_fd(int integer, int base, int fd)
{
	if (integer / 10 != 0)
		print_integer_in_base_to_fd(integer / 10, base, fd);
	ft_putchar_fd(CHRMAP[ft_absolute(integer % base)], fd);
}

/*
** Performs some pre-recursion logic to lessen redundant processing.
*/
void				ft_putint_base_fd(int integer, int base, int fd)
{
	if (base >= 2 && base <= 62)
	{
		if (integer < 0 && base == 10)
			ft_putchar_fd('-', fd);
		print_integer_in_base_to_fd(integer, base, fd);
	}
}
