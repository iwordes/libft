#include "libft.h"

void	ft_putnbr_fd(int num, int fd)
{
	if (num < 0)
		ft_putchar_fd('-', fd);
	if (num / 10 != 0)
		ft_putnbr_fd(ft_absolute(num / 10), fd));
	ft_putchar_fd('0' + ft_absolute(num % 10));
}
/*
** Iterative, Mk.II
**{
**	int		place;
**
**	if (num < 0)
**	{
**		num *= -1;
**		ft_putchar_fd('-', fd);
**	}
**	place = 10;
**	while (num / place > 0)
**		place *= 10;
**	while ((num & 0x7FFFFFFF) != 0)
**	{
**		place /= 10;
**		ft_putchar_fd(num / place, fd);
**		num /= 10;
**	}
**}
*/
/*
** Recursive, Mk.II
**{
**	if (num == -2147483648)
**	{
**		ft_putstr_fd("-2147483648", fd);
**		return ;
**	}
**	if (num < 0)
**	{
**		ft_putchar_fd('-', fd);
**		num *= -1;
**	}
**	if (num / 10 > 0)
**		ft_putnbr_fd(num / 10, fd);
**	ft_putchar_fd('0' + (num % 10), fd);
**}
*/
/*
** Iterative, Mk.I
**{
**	int		place;
**
**	if (num < 0)
**	{
**		num *= -1;
**		ft_putchar_fd('-', fd);
**	}
**	place = 10;
**	while (num / place > 0)
**		place *= 10;
**	while (num > 0)
**	{
**		place /= 10;
**		ft_putchar_fd(num / place, fd);
**		num /= 10;
**	}
**}
*/

/*
** Recursive, Mk.I
**{
**	if (num < 0)
**	{
**		ft_putchar_fd('-', fd);
**		num *= -1;
**	}
**	if (num / 10 > 0)
**		ft_putnbr_fd(num / 10, fd);
**	ft_putchar_fd('0' + (num % 10), fd);
**}
*/
