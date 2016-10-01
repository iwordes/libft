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
	size_t	body_length;
	size_t	sfx_length;
	size_t	i;

	i = 0;
	sfx_length = ft_strlen(suffix);
	body_length = ft_strlen(string);
	while (body_length + i < size - 1 && i < sfx_length)
	{
		string[body_length + i] = suffix[i];
		i++;
	}
	if (size > 0)
		string[body_length + i] = 0;
	if (body_length + sfx_length + 1 > size)
		return (body_length + sfx_length);
	else
		return (body_length + i);
}
