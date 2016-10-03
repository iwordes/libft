/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 16:42:47 by iwordes           #+#    #+#             */
/*   Updated: 2016/10/02 16:42:49 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Uses modulo arithmetic to convert any number to a string of the proper base.
** - Limited to the range of base-2 to base-62 (alphanumeric range)
** - base-36 is the maximum range of case-insensitive numbers. (0-9, Aa-Bb)
** - Does not pad numbers with zeroes. Use
*/
#include <stdio.h>
char		*ft_itoa_base(int integer, unsigned int base)
{
	char	*string;
	int		places;

	if (base >= 2 && base <= 62)
	{
		places = ft_intlen_base(integer, base);
		NULL_GUARD(string = ft_strnew(places + ((integer < 0) ? 1 : 0)));
		if (integer < 0 && base == 10)
			string[0] = '-';
		while (1)
		{
			string[--places] = CHRMAP[ft_absolute(integer % base)];
			if ((integer /= base) == 0)
				break ;
		}
		return (string);
	}
	return (NULL);
}
