#include "libft.h"
/*
** Safely concatenate two strings.
*/
size_t		*ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_size;
	size_t	i;

	dest_size = ft_strlen(dest);
	i = 0;
	while (i < size - dest_size - 1 && src[i] != 0)
		dest[dest_size + i] = src[i++];
	if (size > 0)
		dest[i] = 0;
	return (size + i);
}
