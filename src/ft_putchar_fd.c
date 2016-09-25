#include "libft.h"

void	ft_putchar(char c, int fd)
{
	write(1, &c, fd);
}
