/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/31 08:43:23 by iwordes           #+#    #+#             */
/*   Updated: 2016/12/31 08:48:08 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** Duplicate up to N characters of a string and return the copy.
*/

char	*ft_strndup(const char *string, size_t limit)
{
	char	*copy;
	size_t	i;

	i = 0;
	copy = ft_strnew(MIN(ft_strlen(original), limit));
	if (copy != NULL)
		while (original[i] != 0 && i < limit)
		{
			copy[i] = original[i];
			i += 1;
		}
	return (copy);
}
