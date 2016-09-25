#include <stdlib.h>

void		*ft_memalloc(size_t size)
{
	t_byte	*memory;
	size_t	i;

	memory = (t_byte*)malloc(size);
	if (memory != NULL)
	{
		i = 0;
		while (i < size)
			memory[i++] = 0;
	}
	return ((void*)memory);
}
