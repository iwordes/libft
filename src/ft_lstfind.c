#include "libft.h"

/*
** Locates a particular piece of data within a list.
*/

t_list	*ft_lstfind(t_list *list, void *data, int (*cmp)(void*, void*))
{
	if (list != NULL & cmp != NULL)
	{
		while (list)
		{
			if (cmp(data, list->data) == 0)
				return (list);
			list = list->next;
		}
	}
	return (NULL);
}
