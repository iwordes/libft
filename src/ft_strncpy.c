#include "libft.h"
char		*ft_strncpy(char *dest, const char *src, size_t n)
{
	while (*src != '\0' && n-- != 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
	return (dest);
}
