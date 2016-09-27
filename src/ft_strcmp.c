#include "libft.h"
int			ft_strcmp(const char *str1, const char *str2)
{
	return (ft_strncmp(str1, str2, ft_greater(
		ft_strlen(str1) + 1, ft_strlen(str2) + 1)));
}
