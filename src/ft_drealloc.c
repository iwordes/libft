#include "libft.h"

/*
** Similar to realloc, but frees the input pointer if allocation fails.
*/
void	*ft_drealloc(void *original, size_t target_size, size_t original_size)
{
	void	*copy;

	NULL_GUARD(original);
	copy = ft_realloc(original, target_size, original_size);
	if (copy == NULL)
		free(original);
	return (copy);
}
