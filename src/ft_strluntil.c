#include "ft_string.h"

/*
** A version of struntil with a search limit.
*/

size_t		ft_strluntil(const char *string, char c, size_t limit)
{
	size_t	i;

	i = 0;
	if (string != NULL)
	{
		while (string[i] != 0 && i < limit)
		{
			if (string[i] == c)
				return (i);
			i++;
		}
	}
	return (i);
}
