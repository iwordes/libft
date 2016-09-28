#include "libft.h"

void		*ft_memcpy(void *memory_dest, const void *memory_src, size_t n)
{
	size_t	i;
	t_byte	*dest;
	t_byte	*src;

	i = 0;
	dest = (t_byte*)memory_dest;
	src = (t_byte*)memory_src;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (memory_dest);
}
