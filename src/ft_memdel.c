#include "libft.h"
void	ft_memdel(void **pointer)
{
	if (pointer != NULL && *pointer != NULL)
	{
		free(*pointer);
		*pointer = NULL;
	}
}
