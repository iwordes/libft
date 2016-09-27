#include "libft.h"
void	ft_memdel(void **pointer)
{
	free(*pointer);
	*pointer = NULL;
}
