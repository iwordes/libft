/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strins.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 11:37:43 by iwordes           #+#    #+#             */
/*   Updated: 2017/02/02 11:51:46 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** Insert a string at some point within another string.
** The first string must have enough space to accomodate the second, or else
** the outcome is undefined (and may lead to a segmentation fault).
*/

char	*ft_strins(char *str, const char *substr, size_t st)
{
	size_t	sl;
	size_t	i;

	i = ft_strlen(str);
	sl = ft_strlen(substr);
	str[i-- + sl] = 0;
	while (i > st)
	{
		str[i + sl] = str[i];
		i -= 1;
	}
	ft_strncpy(str + i, substr, sl);
	return (str);
}
