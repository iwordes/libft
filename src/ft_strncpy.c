#include "libft.h"
char		*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest != src)
		while (i < n)
		{
			dest[i] = src[i];
			if (src[i] == 0)
				src--;
			i++;
		}
	return (dest);
}
