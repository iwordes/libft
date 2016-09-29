#include "libft.h"
/*
** Calls ft_strncpy with parameters guaranteed to terminate the destination.
*/
char		*ft_strcpy(char *dest, const char *src)
{
	return (ft_strncpy(dest, src, ft_strlen(src) + 1));
}
