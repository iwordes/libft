#include "libft.h"
char		*ft_strcat(char *string, const char *suffix)
{
	return (ft_strncat(string, suffix, ft_strlen(suffix)));
}
