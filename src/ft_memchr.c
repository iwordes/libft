/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 16:43:28 by iwordes           #+#    #+#             */
/*   Updated: 2016/10/02 16:48:12 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *memory, int find, size_t bytecount)
{
	size_t	i;
	t_byte	*bytearr;

	i = 0;
	bytearr = (t_byte*)memory;
	while (i < bytecount)
	{
		if (bytearr[i] == (t_byte)find)
			return ((void*)(bytearr + i));
		i++;
	}
	return (NULL);
}
