#include <errno.h>
#include "libft.h"

char		*ft_strdup(const char *original)
{
	int		i;
	char	*copy;

	i = 0;
	copy = ft_strnew(ft_strlen(original));
	if (copy != NULL)
		while (original[i])
			copy[i] = original[i++];
	else
		errno = ENOMEM;
	return (copy);
}
