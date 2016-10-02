#include "libft.h"

static size_t	get_chunk_count(const char *string, char delimiter)
{
	size_t		chunk_count;

	if (*string == 0)
		return (0);
	else if (delimiter == 0)
		return (1);
	else
	{
		chunk_count = 0;
		while (*string != 0)
		{
			while (*string == delimiter)
				string++;
			if (*string != 0)
			{
				while (*string != 0 && *string != delimiter)
					string++;
				chunk_count++;
			}
		}
		return (chunk_count);
	}
}

static char		**split_string(const char *string, char delim)
{
	size_t		chunk_count;
	char		**chunks;
	size_t		i;

	i = 0;
	chunk_count = get_chunk_count(string, delim);
	chunks = (char**)malloc(sizeof(char*) * (chunk_count + 1));
	if (chunks != NULL)
	{
		if (chunk_count > 0)
			while (i < chunk_count)
			{
				while (*string == delim)
					string++;
				chunks[i] = ft_strsub(string, 0, ft_struntil(string, delim));
				while (*string != 0 && *string != delim)
					string++;
				i++;
			}
		chunks[chunk_count] = NULL;
	}
	return (chunks);
}

char			**ft_strsplit(const char *string, char delimiter)
{
	if (string != NULL)
		return (split_string(string, delimiter));
	else
		return (NULL);
}
