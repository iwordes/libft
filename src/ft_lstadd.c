#include "libft.h"
/*
** Given a t_list** list and a t_list* link, prepends the given link to the
** beginning of the list.
** - If the given list or link is NULL, does nothing.
*/
void	ft_lstadd(t_list **list, t_list *link)
{
	ft_lstunshift(list, link);
}
