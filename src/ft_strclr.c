#include "libft.h"
void		ft_strclr(char *string)
{
	if (string != NULL)
		while (*string)
		{
			*string = 0;
			string++;
		}
}
