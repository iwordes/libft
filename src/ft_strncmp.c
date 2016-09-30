#include "libft.h"
int			ft_strncmp(const char *string1, const char *string2, size_t n)
{
	if (string1 == string2)
		return (0);
	while ((t_byte)*string1 == (t_byte)*string2 && n-- != 0)
	{
		if (*string1 == 0)
			return (0);
		string1++;
		string2++;
	}
	return (((t_byte)*string1 - (t_byte)*string2));
}
