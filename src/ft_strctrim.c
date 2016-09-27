#include "libft.h"
/*
** Delivers a copy of a given *string* sans leading or trailing *c*haracters.
*/
char		*ft_strctrim(const char *string, const char c)
{
	size_t	length;
	size_t	start;
	char	*trimmed;

	start = 0;
	while (string[start] == c)
		start++;
	length = ft_strlen(string + start);
	while (string[length - 1] == c)
		length--;
	trimmed = ft_strsub(string, start, length);
	return (trimmed);
}
