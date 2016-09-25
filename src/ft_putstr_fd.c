#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	while (*str)
		write(1, str++, fd);
}
