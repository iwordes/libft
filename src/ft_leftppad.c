#include "libft.h"

/*
** Prints a string, first printing N instances of char pad, until the string is
** of greater or equal length compared to the target.
*/
void		ft_leftppad(const char *string, char pad, size_t target)
{
	size_t	i;
	size_t	l;

	if (string)
	{
		i = 0;
		l = ft_strlen(string);
		while (i < l - target)
		{
			ft_putchar(pad);
			i++;
		}
		ft_putstr(string);
	}
}
