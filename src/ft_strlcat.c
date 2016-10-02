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
** 1. If
** 1. While there is space left in the given buffer and characters left to
**    append, append more characters.
** 2.
*/
/*
** Given issue: Not returning proper value; not quite sure what the issues is
** yet.
*/
size_t		ft_strlcat(char *string, const char *suffix, size_t size)
{
	size_t	i;
	size_t	body_length;
	size_t	suffix_length;

	i = 0;
	body_length = ft_strlen(string);
	suffix_length = ft_strlen(suffix);
	if (body_length > size)
		body_length = size;
	while (suffix[i] != 0 && body_length + i < size - 1)
	{
		string[body_length + i] = suffix[i];
		i++;
	}
	if (size > 0 && body_length < size)
		string[body_length + i] = 0;
	return (body_length + suffix_length);
}
