#include "libft.h"
/*
** Get the forward distance from the starting pointer *string* until the first
** instance of the character to match. If no match is found, it returns the
** index of the string's terminator.
** - If the string is NULL, returns 0.
*/
size_t		ft_struntil(const char *string, char match)
{
	size_t		i;

	if (string != NULL)
	{
		i = 0;
		while (string[i] != 0)
		{
			if (string[i] == match)
				return (i);
			i++;
		}
		return (i);
	}
	return (0);
}
