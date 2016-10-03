/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 16:42:46 by iwordes           #+#    #+#             */
/*   Updated: 2016/10/02 16:42:47 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** 1. We get the number of places in the integer.
** 2. If the integer is negative, another place will be needed for the sign.
** 3. We create a new string of the proper size.
** 4. If the integer is negative, we add the proper sign to the start.
*/
char		*ft_itoa(int integer)
{
	char	*string;
	int		places;

	places = ft_intlen(integer);
	if (integer < 0)
		places++;
	string = ft_strnew(places);
	if (string != NULL)
	{
		if (integer < 0)
			string[0] = '-';
		while (true)
		{
			string[--places] = '0' + ft_absolute(integer % 10);
			integer /= 10;
			if (integer == 0)
				break;
		}
	}
	return (string);
}
