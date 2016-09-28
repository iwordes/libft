#include "libft.h"
void		*ft_memchr(const void *memory, int find, size_t bytecount)
{
	size_t	i;
	t_byte	*bytearr;

	i = 0;
	bytearr = (t_byte*)memory;
	while (i < bytecount)
	{
		if (bytearr[i] == (t_byte)find)
			return ((void*)(bytearr + i));
		i++;
	}
	return (NULL);
}
