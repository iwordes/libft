#include "libft.h"
void		ft_striter(char *string, void (*func)(char*))
{
	if (string != NULL)
		while (*string)
		{
			func(string);
			string++;
		}
}
