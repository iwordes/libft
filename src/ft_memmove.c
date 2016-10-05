/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 16:43:36 by iwordes           #+#    #+#             */
/*   Updated: 2016/10/05 09:52:15 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Performs a non-destructive copy of n bytes from memory_src to memory_dest.
*/

void				*ft_memmove(void *mem_dest, const void *mem_src, size_t n)
{
	t_byte			*dest;
	const t_byte	*src;

	if (mem_src == mem_dest || n == 0)
		return (mem_dest);
	else if (mem_dest < mem_src)
		return (ft_memcpy(mem_dest, mem_src, n));
	else
	{
		dest = (t_byte*)mem_dest;
		src = (const t_byte*)mem_src;
		while (--n)
			dest[n] = src[n];
		dest[0] = src[0];
		return (mem_dest);
	}
}
