#include "libft.h"
void		*ft_memalloc(size_t size)
{
	void	*memory;

	memory = malloc(size);
	if (memory != NULL)
		ft_memset(memory, 0, size);
	return (memory);
}
