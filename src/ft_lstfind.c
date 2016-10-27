#include "libft.h"

/*
** Locates a particular piece of data within a list.
*/

int		ft_lstfind(t_list *list, void *data, int (*cmp)(void*, void*))
{
	while (list)
	{
		if (cmp(data, list->data) == 0)
			return (1);
		list = list->next;
	}
	return (0);
}
