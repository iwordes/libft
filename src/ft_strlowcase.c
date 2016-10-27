#include "libft.h"

void		ft_strlowcase(char *string)
{
	if (string)
		while (*string)
		{
			if (*string >= 'A' && *string <= 'Z')
				*string += 32;
			string++;
		}
}
