#include "libft.h"
/*
** Find the first occurance of *find* in *n* bytes after pointer *byte_array*.
*/
void		*ft_memchr(const void *memory, int find, int n)
{
	int		i;
	t_byte	*bytearr;

	i = 0;
	bytearr = (t_byte*)memory;
	while (i < n)
	{
		if (bytearr[i] == (t_byte)find)
			return ((void*)(bytearr + i);
		i++;
	}
	return (NULL);
}
