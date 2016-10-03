/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 16:43:18 by iwordes           #+#    #+#             */
/*   Updated: 2016/10/02 16:47:52 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Given a t_list* list and a t_list* link, appends the link to the end of the
** list.
** - Given NULL for either argument, it does nothing.
*/
void		ft_lstpush(t_list *list, t_list *link)
{
	t_list	*last_link;

	if (list != NULL && link != NULL)
	{
		last_link = list;
		last_link = ft_lstend(list);
		last_link->next = link;
	}
}