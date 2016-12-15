/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 10:54:32 by iwordes           #+#    #+#             */
/*   Updated: 2016/11/16 10:54:33 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_strupcase(char *string)
{
	if (string)
		while (*string)
		{
			if (*string >= 'a' && *string <= 'z')
				*string -= 32;
			string++;
		}
}