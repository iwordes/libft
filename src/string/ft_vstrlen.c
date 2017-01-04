/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 19:47:52 by iwordes           #+#    #+#             */
/*   Updated: 2017/01/03 19:49:31 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** Get the combined length of several strings.
*/

size_t	ft_vstrlen(const char *str, ...)
{
	va_list	args;
	size_t	l;

	va_start(args, str);
	l = ft_vstrlen_(str, args);
	va_end(args, str);
	return (l);
}
