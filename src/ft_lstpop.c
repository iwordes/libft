/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 16:43:17 by iwordes           #+#    #+#             */
/*   Updated: 2016/10/05 10:02:39 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Given a t_list*, detaches the last link from the list and returns a t_list*
** to it.
** - If the given list has only one link, returns that link.
** - If the given list is NULL, returns NULL.
**
** I'm sure this can be done more efficiently.
*/

t_list			*ft_lstpop(t_list *list)
{
	t_list		*second_last_link;
	t_list		*last_link;

	last_link = list;
	second_last_link = last_link;
	while (last_link->next != NULL)
	{
		second_last_link = last_link;
		last_link = last_link->next;
	}
	if (second_last_link != last_link && second_last_link != NULL)
		second_last_link->next = NULL;
	return (last_link);
}
