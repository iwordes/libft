#include "libft.h"
/*
** Performs a non-destructive copy (that is, the output is not influenced by the
** changes caused by the copy process) of *n* bytes from *src* to *dest*
*/
void				*ft_memmove(void *restrict mem_dest,
								const void *restrict mem_src,
								size_t n)
{
	size_t			i;
	t_byte			*dest;
	const t_byte	*src;

	if (mem_src == mem_dest)
		return (mem_dest);
	else if (mem_src < mem_dest)
		return (ft_memcpy(mem_dest, mem_src, n));
	else
	{
		i = n;
		dest = (t_byte*)mem_dest + n;
		src = (const t_byte*)mem_src + n;
		while ((t_byte*)mem_dest < dest)
		{
			*dest = *src;
			dest--;
			src--;
		}
		return (mem_dest);
	}
}
