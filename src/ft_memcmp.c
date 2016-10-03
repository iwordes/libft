/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 16:43:30 by iwordes           #+#    #+#             */
/*   Updated: 2016/10/02 16:48:17 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_memcmp(const void *mem1, const void *mem2, size_t bytecount)
{
	size_t	i;
	t_byte	*bytearr1;
	t_byte	*bytearr2;

	i = 0;
	bytearr1 = (t_byte*)mem1;
	bytearr2 = (t_byte*)mem2;
	while (i < bytecount)
	{
		if (bytearr1[i] != bytearr2[i])
			return (bytearr1[i] - bytearr2[i]);
		i++;
	}
	return (0);
}
