#include "libft.h"
char		*ft_strncpy(char *dest, const char *src, size_t n)
{
	while (*dest != '\0' && n-- != 0)
	{
		if (*src == 0)
			*dest = 0;
		else
		{
			*dest = *src;
			src++;
		}
		dest++;
	}
	return (dest);
}
