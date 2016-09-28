#include "libft.h"
/*
** Given a t_list* list and a t_list* function *func(), applies func() to each
** link in the list, and returns a new list consisting of the sum output of all
** calls to func().
** = If the given list is NULL, nothing is done.
** - If func() modifies link->next, undefined behavior may occur!
** - If func() frees link, undefined behavior may occur!
**   This is because it is impossible to tell if a pointer has been freed
**   prior to freeing it, hence re-pointing freed pointers to NULL.
*/
t_list		*ft_lstmap(t_list *list, t_list *(*func)(t_list*))
{
	t_list	*map;
	t_list	*link;
	t_list	*map_item;

	if (list != NULL && func != NULL)
	{
		link = list;
		map = func(link);
		map_item = map;
		while (link != NULL && map_item != NULL)
		{
			map_item->next = func(link);
			link = link->next;
			map_item = map_item->next;
		}
		return (map);
	}
	return (NULL);
}
