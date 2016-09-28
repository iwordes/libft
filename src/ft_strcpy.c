#include "libft.h"
char		*ft_strcpy(char *dest, const char *src)
{
	return (ft_strncpy(dest, src, ft_strlen(src) + 1));
}
