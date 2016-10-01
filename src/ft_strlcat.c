#include "libft.h"

/*
** Overview
** ========
** Given two strings and a target size, appends up to (size - strlen(string1)
** - 1) characters to the first string.
**
** Returns one of three values:
** 1. If it used LESS space than the given size, returns how much it used.
** 2. If it used AS MUCH space as the given size, returns the given size.
** 3. If it used AS MUCH space but needed MORE, returns how much it needed.
**
** Explanation
** ===========
** 1. The end is the index of the given string's terminator.
** 2. While there is space left in the given string, and while there are
**    characters left to append, append another character.
** 3.
*/
/*
** Given issue: Not returning proper value; not quite sure what the issues is
** yet.
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
