#include "libft.h"

void	ft_putstr_fd(const char *str, int fd)
{
	write(fd, str, ft_strlen(str));
}
/*
** Iterative Mk.I
**{
**	while (*str)
**		write(fd, str++, 1);
**}
*/
