#include "libft.h"
/*
** Performs a non-destructive copy of n bytes from memory_src to memory_dest.
*/
void				*ft_memmove(void *mem_dest, const void *mem_src, size_t n)
{
	t_byte			*dest;
	const t_byte	*src;

	if (mem_src == mem_dest)
		return (mem_dest);
	else if (mem_dest < mem_src)
		return (ft_memcpy(mem_dest, mem_src, n));
	else
	{
		n--;
		dest = (t_byte*)mem_dest + n;
		src = (const t_byte*)mem_src + n;
		while (n != 0)
		{
			dest[n] = src[n];
			n--;
		}
		return (mem_dest);
	}
}
