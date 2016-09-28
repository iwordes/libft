#include "libft.h"
/*
** Given a t_list* list and a void function* func(), applies func() to each
** element of the list.
** - If func() modifies list->next, undefined behavior may occur!
*/
void		ft_lstiter(t_list *list, void (*func)(t_list*))
{
	while (list != NULL)
	{
		func(list);
		list = list->next;
	}
}
