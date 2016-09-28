#include "libft.h"
void		ft_striteri(char *string, void (*func)(unsigned int, char*))
{
	int		i;

	i = 0;
	if (string != NULL)
		while (string[i])
		{
			func(i, string + i);
			i++;
		}
}
