#include "libft.h"
size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_size;
	size_t	i;

	i = 0;
	dest_size = ft_strlen(dest);
	while (i < size - dest_size - 1 && src[i] != 0)
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = 0;
	return (dest_size + i);
}
