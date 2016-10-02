#include "libft.h"

char		*ft_strncat(char *string, const char *suffix, size_t n)
{
	size_t	end;
	size_t	i;

	i = 0;
	end = ft_strlen(string);
	while (suffix[i] != 0 && i < n)
	{
		string[end + i] = suffix[i];
		if (suffix[i] == 0)
			suffix--;
		i++;
	}
	string[end + i] = 0;
	return (string);
}
