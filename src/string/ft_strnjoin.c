/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/31 19:39:49 by iwordes           #+#    #+#             */
/*   Updated: 2016/12/31 19:53:09 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** Join together up to x + y characters of two strings.
*/

char	*ft_strnjoin(const char *str1, const char *str2, size_t x, size_t y)
{
	char	*string;
	size_t	l1;
	size_t	l2;

	NULL_GUARD(str1);
	NULL_GUARD(str2);
	l1 = ft_strlen(str1);
	l2 = ft_strlen(str2);
	NULL_GUARD(string = ft_strnew(MIN(x + y, l1 + l2)));
	ft_strncat(string, str1, MIN(x, l1));
	ft_strncat(string, str2, MIN(y, l2));
	return (string);
}
