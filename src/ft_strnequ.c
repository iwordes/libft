#include "libft.h"
int			ft_strnequ(const char *string1, const char *string2, size_t n)
{
	return ((ft_strncmp(string1, string2, n) == 0)? 1 : 0);
}
