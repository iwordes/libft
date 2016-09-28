#include "libft.h"

void		*ft_memcpy(void *memory_dest, const void *memory_src, size_t n)
{
	t_byte	*dest;
	t_byte	*src;

	dest = (t_byte*)memory_dest;
	src = (t_byte*)memory_src;
	while (n-- != 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (memory_dest);
}
