#include "libft.h"
char		*ft_strncpy(char *dest, const char *src, size_t n)
{
	while (n-- != 0)
	{
		*dest = *src;
		if (*src != 0)
			src++;
		dest++;
	}
	return (dest);
}
