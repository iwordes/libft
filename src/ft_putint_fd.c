#include "libft.h"

/*
** Prints a given integer, in base-10 (decimal), to a given file descriptor.
*/
void	ft_putint_fd(int integer, int fd)
{
	ft_putint_base_fd(integer, 10, fd);
}
