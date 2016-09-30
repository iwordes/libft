#include "libft.h"

size_t		ft_strlcat(char *string, const char *suffix, size_t size)
{
	size_t	end;
	size_t	i;

	i = 0;
	end = ft_strlen(string);

	while (i < size - end - 1 && suffix[i] != 0)
	{
		string[end + i] = suffix[i];
		i++;
	}
	if (i == 0)
		i++;
	if (size > 0)
		string[end + i] = 0;
	return (end + i);
}
