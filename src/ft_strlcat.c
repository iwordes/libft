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
** 1. While there is space left in the given buffer and characters left to
**    append, append more characters.
** 2.
*/
/*
** Given issue: Not returning proper value; not quite sure what the issues is
** yet.
*/
#include <stdio.h>
size_t		ft_strlcat(char *string, const char *suffix, size_t size)
/*
{
	size_t	body_length;
	size_t	suffix_length;

	body_length = ft_strlen(string);
	suffix_length = ft_strlen(suffix);
	while (*string != 0 && size-- != 0)
		string++;
	while (*suffix != 0 && size-- != 0)
	{
		*string = *suffix;
		string++;
		suffix++;
	}
	if (size-- != 0)
		*string = 0;
	return (body_length + suffix_length);
}
*/
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
	if (size > 0 && body_length <= size)
		string[body_length + i] = 0;
	return (body_length + suffix_length);
}

/*
{
	size_t	body_length;
	size_t	sfx_length;
	size_t	i;

	i = 0;
	sfx_length = ft_strlen(suffix);
	body_length = ft_strlen(string);
	printf("\nBody: \"%s\"\nSuffix: \"%s\"", string, suffix);
	printf("\nBody Length: %zu\nSuffix Length: %zu\nTotal Length: %zu\nAllowed size: %zu", body_length, sfx_length, body_length + sfx_length, size);
	while (i < sfx_length && body_length + i < size - 1)
	{
		string[body_length + i] = suffix[i];
		i++;
	}
	if (size > 0 && body_length < size)
		string[body_length + sfx_length] = 0;
	printf("\nString: \"%s\"\nString Length: %zu\n", string, ft_strlen(string));
	printf("");
	if (body_length + sfx_length >= size - 1)
		return (body_length + sfx_length);
	else
		return (body_length + i);
}
*/
