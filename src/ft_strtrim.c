#include "libft.h"
char		*ft_strtrim(const char *string)
{
	size_t	length;
	size_t	start;
	char	*trimmed_string;

	if (string != NULL)
	{
		start = 0;
		while (ft_isstdspace(string[start]))
			start++;
		length = ft_strlen(string + start);
		if (length > 0)
			while (ft_isstdspace(string[length - 1]))
				length--;
		trimmed_string = ft_strsub(string, start, length);
		return (trimmed_string);
	}
	return (NULL);
}
