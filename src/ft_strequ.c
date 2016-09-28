#include "libft.h"
int			ft_strequ(const char *string1, const char *string2)
{
	if (string1 != NULL && string2 != NULL)
		return (ft_strnequ(string1, string2, ft_greater(
				ft_strlen(string1) + 1, ft_strlen(string2) + 1)));
	else if (string1 == string2)
		return (1);
	else
		return (0);
}
