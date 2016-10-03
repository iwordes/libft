/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 16:43:09 by iwordes           #+#    #+#             */
/*   Updated: 2016/10/02 16:47:26 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Given a t_list* list and a size_t n, returns the Nth index of that list.
** - If the list is NULL, returns NULL.
** - If the given value for n is 0, the original list is returned.
** - If the given list is too short, returns the last element of that list.
*/
t_list		*ft_lstn(t_list *list, size_t n)
{
	size_t	i;

	if (list != NULL)
	{
		i = 0;
		while (i < n && list->next != NULL)
		{
			list = list->next;
			i++;
		}
		return (list);
	}
	return (NULL);
}