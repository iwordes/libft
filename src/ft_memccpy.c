#include "libft.h"

void		*ft_memccpy(void *restrict dest, const void *restrict src,
					int character, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((t_byte*)dest + i) = *((t_byte*)src + i);
		if (*((t_byte*)src + i) == (t_byte)character)
			return ((void*)((t_byte*)dest + i + 1));
		i++;
	}
	return (NULL);
}
