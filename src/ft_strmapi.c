#include "libft.h"
char		*ft_strmapi(const char *string, char (*func)(unsigned int, char))
{
	int		i;
	char	*new_string;

	i = 0;
	new_string = ft_strnew(ft_strlen(string));
	if (new_string != NULL)
		while (string[i] != 0)
		{
			new_string[i] = func(i, string[i]);
			i++;
		}
	return (new_string);
}
