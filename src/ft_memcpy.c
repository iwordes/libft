#include "libft.h"

void		*ft_memcpy(void *mem_dest, const void *mem_src, size_t n)
{
	size_t	i;
	t_byte	*dest;
	t_byte	*src;

	i = 0;
	dest = (t_byte*)mem_dest;
	src = (t_byte*)mem_src;
	while (i < n)
		dest[i] = src[i++];
	return (dst);
}
