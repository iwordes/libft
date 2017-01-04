/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vstrjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 17:20:55 by iwordes           #+#    #+#             */
/*   Updated: 2017/01/03 20:13:27 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** Join together multiple strings. ft_vstrjoin is faster with more joins, as
** allocation is done only once, and all strings are then copied to the new
** string at once.
** The last argument must be NULL.
*/

char	*ft_vstrjoin(const char *current, ...)
{
	va_list		args;
	char		*str;
	
	va_start(args, current);
	str = ft_vstrjoin_(current, args);
	va_end(args);
	return (str);
}
