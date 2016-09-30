#include "libft.h"

static size_t	get_chunk_count(const char *string, char delimiter)
{
	size_t		chunk_count;
	chunk_count = 1;
	while (*string == delimiter)
		string++;
	while (*string != 0)
	{
		if (*string == delimiter)
		{
			while (*string == delimiter)
				string++;
			if (*string != 0)
				chunk_count++;
		}
		else
			string++;
	}
	return (chunk_count);
}

/*
** 1. If given a null pointer, return null.
** 2. If given a string lacking the delimiter, return a copy of that string.
** 3. If given a string lacking internal delimiters, return a trimmed copy.
** 4. If given a string with multiple delimiters in a row, ignore all but one.
*/
/*
** 1. Get the number of chunks in a given string. If it's a valid string, this
**    value will aways be >= 1.
** 2. Allocate enough memory for one pointer per chunk.
** 3. If the delimiter is
*/
#include <stdio.h>
char		**split_string(const char *str, char delim)
{
	size_t	chunk_count;
	char	**chunks;
	size_t	i;

	i = 0;
	printf("\n\"%s\"", str);
	chunk_count = get_chunk_count(str, delim);
	chunks = (char**)malloc(sizeof(char**) * chunk_count);
	if (chunks != NULL)
	{
		while (*str == delim)
			str++;
		if (delim == 0)
			chunks[0] = ft_strdup(str);
		else
			while (i < chunk_count)
			{
				while (*str == delim)
					str++;
				if (*str != 0)
					chunks[i] = ft_strsub(str, 0, ft_struntil(str, delim));
				printf("\n\"%s\"\n", chunks[i]);
				while (*str != delim && *str != 0)
					str++;
				i++;
			}
	}
	return (chunks);
}

char	**ft_strsplit(const char *string, char delimiter)
{
	if (string != NULL)
		return (split_string(string, delimiter));
	else
		return (NULL);
}
