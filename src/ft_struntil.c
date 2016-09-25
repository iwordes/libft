#include "libft.h"
/*
** Get the forward distance from the starting pointer *string* until the first
** instance of the character to match. If no match is found, it returns -1.
*/
size_t		ft_struntil(const char *string, const char match)
{
	size_t		i;

	i = 0;
	while (string[i] != 0)
	{
		if (string[i] == match)
			return (i);
		i++;
	}
	return (-1);
}
