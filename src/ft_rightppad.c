#include "libft.h"

/*
** Prints a string, afterwards printing N instances of char pad until the given
** target has been met.
*/
void		ft_rightppad(const char *string, char pad, size_t target)
{
	size_t	i;

	if (string)
	{
		i = ft_strlen(string);
		ft_putstr(string);
		while (i < target)
		{
			ft_putchar(pad);
			i++;
		}
	}
}
