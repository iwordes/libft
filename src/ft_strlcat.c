#include "libft.h"

/*
** 1. The end is the index of the given string's terminator.
** 2. We only loop while there is space left in the given string.
** 3. We only loop while there are characters left to append.
*/
/*
** Returns one of three values:
** 1. If it used LESS space than the given size, returns how much it used.
** 2. If it used AS MUCH space as the given size, returns the given size.
** 3. If it used AS MUCH space but needed MORE, returns how much it needed.
*/
size_t		ft_strlcat(char *string, const char *suffix, size_t size)
{
	size_t	end;
	size_t	i;

	i = 0;
	end = ft_strlen(string);
	while (end + i < size - 1 && suffix[i] != 0)
	{
		string[end + i] = suffix[i];
		i++;
	}
	if (size > 0)
		string[end + i] = 0;
	if (end + i <= size)
		return (end + i);
	else
		return (end + ft_strlen(suffix));
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
