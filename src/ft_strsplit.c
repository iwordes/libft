#include "libft.h"

static int	get_num_splits(const char *string, char delimiter)
{
	size_t	i;
	int		splits;

	i = 0;
	splits = 0;
	while (string[i] == delimiter)
		i++;
	while (string[i] != 0)
	{
		if (string[i] == delimiter)
		{
			while (string[i] == delimiter)
				i++;
			if (string[i] != 0)
				splits++;
		}
	}
	return (splits);
}

char		**ft_strsplit(const char *string, char delimiter)
{
	size_t	i;
	size_t	si;
	size_t	next;
	char	**substrings;

	i = 0;
	si = 0;
	substrings = (char**)malloc(sizeof(char**)
								* get_num_splits(string, delimiter));
	while (string[i])
	{
		if (string[i] != delimiter)
		{
			next = ft_struntil(string + i, delimiter);
			if (next == 0)
				next = ft_strlen(string + i);
			substrings[si] = ft_strsub(string, i, next);
			si++;
		}
		else
			while (string[i] == delimiter)
				i++;
	}
	return (substrings);
}
