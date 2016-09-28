#include "libft.h"
int			ft_memcmp(const void *mem1, const void *mem2, size_t bytecount)
{
	size_t	i;
	t_byte	*bytearr1;
	t_byte	*bytearr2;

	i = 0;
	bytearr1 = (t_byte*)mem1;
	bytearr2 = (t_byte*)mem2;
	while (i < bytecount)
	{
		if (bytearr1[i] != bytearr2[i])
			return (bytearr1[i] - bytearr2[i]);
		i++;
	}
	return (0);
}
