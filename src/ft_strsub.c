#include "libft.h"

char	*ft_strsub(const char *string, unsigned int start, size_t length)
{
	char	*substring;

	if (string != NULL)
	{
		substring = ft_strnew(length);
		if (substring != NULL)
		{
			ft_strncat(substring, string + start, length);
			substring[length] = 0;
		}
		return (substring);
	}
	return (NULL);
}
