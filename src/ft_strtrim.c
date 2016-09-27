#include "libft.h"

char		*ft_strtrim(const char *string)
{
	size_t	length;
	size_t	start;
	char	*trimmed_string;

	start = 0;
	while (string[start] == ' ' || string[start] == '\t'
		|| string[start] == '\n')
		start++;
	length = ft_strlen(string + start);
	while (string[length - 1] == ' ' || string[length - 1] == '\t'
		|| string[length - 1] == '\n')
		length--;
	trimmed_string = ft_strsub(string, start, length);
	return (trimmed_string);
}
