#include "libft.h"
int			ft_strnequ(const char *string1, const char *string2, size_t n)
{
	if (string1 != NULL && string2 != NULL)
		return (ft_strncmp(string1, string2, n) == 0);
	else if (string1 == string2)
		return (1);
	else
		return (0);
}
