#include "libft.h"
size_t		ft_strlcat(char *string, const char *suffix, size_t size)
{
	size_t	end;
	size_t	i;

	i = 0;
	end = ft_strlen(string);
	while (suffix[i] != 0 && i < size - end - 1)
	{
		string[end + i] = suffix[i];
		i++;
	}
	if (size > 0)
		string[end + i] = 0;
	if (i >= size)
		return (size);
	else
		return (end + i);
}
