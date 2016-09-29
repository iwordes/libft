#include "libft.h"

void		*ft_memcpy(void *memory_dest, const void *memory_src, size_t n)
{
	t_byte	*dest;
	t_byte	*src;
	size_t	i;

	dest = (t_byte*)memory_dest;
	src = (t_byte*)memory_src;
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (memory_dest);
}
