#include "libft.h"
void	*ft_memset(void *memory, int value, size_t length)
{
	size_t	i;
	t_byte	*bytearr;

	i = 0;
	bytearr = (t_byte*)memory;
	while (i < length)
		bytearr[i++] = (t_byte)value;
	return (memory);
}
