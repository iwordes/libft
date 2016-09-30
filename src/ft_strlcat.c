#include "libft.h"

/*
** 1. The end is the index of the given string's terminator.
** 2. We only loop while there is space left in the string's memory.
** 3. We only loop while there are characters left to append.
*/
size_t		ft_strlcat(char *string, const char *suffix, size_t size)
{
	size_t	end;
	size_t	i;

	i = 0;
	end = ft_strlen(string);
	if (end + i < size - 1)
	while (end + i < size - 1 && suffix[i] != 0)
	{
		string[end + i] = suffix[i];
		i++;
	}
	if (size > 0)
		string[end + i] = 0;
	return (size);
}
/*
** Mk.I
**{
**	size_t	end;
**	size_t	i;
**
**	i = 0;
**	end = ft_strlen(string);
**	while (end + i < size - 1 && suffix[i] != 0)
**	{
**		string[end + i] = suffix[i];
**		i++;
**	}
**	if (i == 0)
**		i++;
**	if (size > 0)
**		string[end + i] = 0;
**	return (end + i);
**}
*/
