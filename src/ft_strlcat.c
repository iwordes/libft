#include "libft.h"
size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	end;
	size_t	i;

	i = 0;
	end = ft_strlen(dest);
	while (src[i] != 0 && i < size - end - 1)
	{
		dest[end + i] = src[i];
		i++;
	}
	if (size > 0)
		dest[end + i] = 0;
	return (end + i);
}
