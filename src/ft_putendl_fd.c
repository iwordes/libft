#include "libft.h"

void		ft_putendl_fd(const char *string, int fd)
{
	ft_putstr_fd(string, fd);
	ft_putchar_fd('\n', fd);
}
