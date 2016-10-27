#include "libft.h"

void		ft_strupcase(char *string)
{
	if (string)
		while (*string)
		{
			if (*string >= 'a' && *string <= 'z')
				*string -= 32;
			string++;
		}
}
