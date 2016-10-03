/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 16:43:38 by iwordes           #+#    #+#             */
/*   Updated: 2016/10/02 16:48:31 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *memory, int value, size_t length)
{
	size_t	i;
	t_byte	*bytearr;

	i = 0;
	bytearr = (t_byte*)memory;
	while (i < length)
		bytearr[i++] = (t_byte)value;
	return (memory);
}
