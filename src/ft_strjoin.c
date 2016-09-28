#include "libft.h"

char	*ft_strjoin(const char *prefix, const char *suffix)
{
	char	*string;

	string = ft_strnew(ft_strlen(prefix) + ft_strlen(suffix));
	if (string != NULL)
	{
		ft_strcpy(string, prefix);
		ft_strcat(string, suffix);
	}
	return (string);
}
