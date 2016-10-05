/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstend.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 16:42:59 by iwordes           #+#    #+#             */
/*   Updated: 2016/10/05 10:05:22 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Given a t_list list, non-destructively returns the last link of that list.
** - If the list is only one link long, returns the list immediately.
** - If the list is NULL, returns immediately.
**
** Yes, nesting a while under an if is less pretty, but it doesn't need to check
** every time if the given list is NULL.
*/

t_list		*ft_lstend(t_list *list)
{
	if (list != NULL)
		while (list->next != NULL)
			list = list->next;
	return (list);
}
