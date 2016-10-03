/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 16:45:04 by iwordes           #+#    #+#             */
/*   Updated: 2016/10/02 16:45:05 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** h*: Haystack related
** n*: Needle related
*/
char		*ft_strstr(const char *haystack, const char *needle)
{
	size_t	hi;
	size_t	hsi;
	size_t	ni;

	hi = 0;
	ni = 0;
	if (ft_strlen(needle) == 0)
		return ((char*)haystack);
	while (haystack[hi] != 0)
	{
		hsi = hi;
		while (haystack[hsi] != 0 && haystack[hsi] == needle[ni])
		{
			if (needle[ni + 1] == 0)
				return ((char*)haystack + hsi - ni);
			hsi++;
			ni++;
		}
		ni = 0;
		hi++;
	}
	return ((char*)NULL);
}
