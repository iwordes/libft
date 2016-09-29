#include "libft.h"
/*
** Performs a non-destructive copy of n bytes from memory_src to memory_dest.
*/
void				*ft_memmove(void *mem_dest, const void *mem_src, size_t n)
{
	t_byte			*dest;
	const t_byte	*src;
	size_t			i;

	if (mem_src == mem_dest)
		return (mem_dest);
	else if (mem_dest < mem_src)
		return (ft_memcpy(mem_dest, mem_src, n));
	else
	{
		i = n;
		dest = (t_byte*)mem_dest;
		src = (const t_byte*)mem_src;
		while (--i)
			dest[i] = src[i];
		dest[0] = src[0];
		return (mem_dest);
	}
}
