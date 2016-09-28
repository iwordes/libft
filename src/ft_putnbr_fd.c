#include "libft.h"

void	ft_putnbr_fd(int num, int fd)
{
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num *= -1;
	}
	if (num / 10 > 0)
		ft_putnbr_fd(num / 10, fd);
	ft_putchar_fd('0' + (num % 10), fd);
}
