#include "ft_io.h"

void	ft_putuint_fd(unsigned long long integer, int fd)
{
	ft_putuint_base_fd(integer, 10, fd);
}
