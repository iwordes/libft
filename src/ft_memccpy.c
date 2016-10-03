/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 16:43:26 by iwordes           #+#    #+#             */
/*   Updated: 2016/10/02 16:43:27 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *restrict dest, const void *restrict src,
					int character, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((t_byte*)dest + i) = *((t_byte*)src + i);
		if (*((t_byte*)src + i) == (t_byte)character)
			return ((void*)((t_byte*)dest + i + 1));
		i++;
	}
	return (NULL);
}
