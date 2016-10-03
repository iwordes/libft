/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chrcnt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 16:42:10 by iwordes           #+#    #+#             */
/*   Updated: 2016/10/02 16:42:11 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns the number of characters in the given string that match the given
** character.
** - If passed NULL, returns 0.
**
*/
size_t		ft_chrcnt(const char *string, char find)
{
	size_t	c;

	NULL_GUARD_CUSTOM_RETURN(string, 0);
	c = 0;
	while (*string != 0)
	{
		if (*string == find)
			c++;
		string++;
	return (c);
}
