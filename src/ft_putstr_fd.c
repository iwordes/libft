#include "libft.h"

void	ft_putstr_fd(const char *string, int fd)
{
	if (string != NULL)
		write(fd, string, ft_strlen(string));
}
