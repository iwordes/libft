#include "libft.h"

char		*ft_strchr(const char *string, int c)
{
	return ((char*)ft_memchr((void*)string, c, ft_strlen(string) + 1));
}
