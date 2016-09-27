#include "libft.h"
/*
** Performs a non-destructive copy (that is, the output is not influenced by the
** changes caused by the copy process) of *n* bytes from *src* to *dest*
*/
void	*ft_memmove(void *restrict mem_dest, const void *restrict mem_src,
					size_t n)
{
	void	*cache;

	cache = malloc(n);
	ft_memcpy(cache, mem_src, n);
	ft_memcpy(mem_dest, cache, n);
	free(cache);
	return (mem_dest);
}
