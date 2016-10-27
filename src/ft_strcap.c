#include "libft.h"

/*
** Capitalizes each word in a string. A word is defined as any consecutive run
** of characters a-z or A-Z.
*/

void		ft_strcap(char *string)
{
	if (string != NULL)
		while (*string != 0)
		{
			if (ft_islower(*string))
				*string -= 32;
			while (ft_isalpha(*string))
				string++;
			while (*string != 0 && !ft_isalpha(*string))
				string++;
		}
}
