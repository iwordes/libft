#include "libft.h"

int			ft_strncmp(const char *string1, const char *string2, size_t n)
{
	size_t	i;

	if (string1 == string2)
		return (0);
	i = 0;
	while (i < n)
	{
		if (string1[i] != string2[i])
			return ((t_byte)string1[i] - (t_byte)string2[i]);
		else if (string1[i] == 0)
			return (0);
		i++;
	}
	return (0);
}
