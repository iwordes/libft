#include "libft.h"

/*
** Create a new link of a linked list and initialize it to a usable state.
*/
t_list		*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*link;

	link = (t_list*)malloc(sizeof(t_list));
	if (link != NULL)
	{
		link->content = (void*)content;
		if (content != NULL)
			link->content_size = content_size;
		else
			link->content_size = 0;
		link->next = NULL;
	}
	return (link);
}
