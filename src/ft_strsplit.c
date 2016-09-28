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
		i++;
	}
	return (splits);
}

static char	**split_string(const char *string, char delimiter)
{
	char	**substrings;
	size_t	splits;
	size_t	next;
	size_t	si;
	size_t	i;

	i = 0;
	si = 0;
	splits = get_num_splits(string, delimiter);
	substrings = (char**)malloc(sizeof(char**) * (splits + 1));
	if (substrings != NULL)
		while (si < splits)
		{
			while (string[i] == delimiter)
				i++;
			next = ft_struntil(string + i, delimiter);
			substrings[si] = ft_strsub(string, i, next);
			i += next + 1;
			si++;
		}
	return (substrings);
}

char		**ft_strsplit(const char *string, char delimiter)
{
	if (string != NULL)
		return (split_string(string, delimiter));
	else
		return (NULL);
}
