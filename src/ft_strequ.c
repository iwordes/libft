#include "libft.h"

int			ft_strequ(const char *string1, const char *string2)
{
	return ((ft_strcmp(string1, string2) == 0)? 1 : 0);
}
