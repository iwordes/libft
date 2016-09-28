#include "libft.h"
char		*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && dest[i] != '\0')
	{
		if (src[i] == 0)
			while (i < n && dest[i] != '\0')
				dest[i++] = 0;
		else
			dest[i] = src[i];
		i++;
	}
	return (dest);
}
