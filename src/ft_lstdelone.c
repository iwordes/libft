#include "libft.h"
/*
** Given a t_list** link, deletes that link, then sets the original t_list* to
** NULL.
** - Passing in a pointer to a list not created with malloc in some form will
**   result in undefined behavior!
*/
void			ft_lstdelone(t_list **link, void (*del)(void*, size_t))
{
	if (*link != NULL)
	{
		del((*link)->content, (*link)->content_size);
		free(*link);
		*link = NULL;
	}
}
