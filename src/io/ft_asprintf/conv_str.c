/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 14:40:11 by iwordes           #+#    #+#             */
/*   Updated: 2016/12/29 16:43:47 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

/*
** TODO
** Truncate string to precision length
*/

ssize_t		ft_asprintf_conv_str(char **string, va_list arg, t_printer *p)
{
	if ((p->length & 4) != 0)
		return (ft_asprintf_conv_str_long(string, arg, p));
	if ((*string = ft_strdup(va_arg(arg, char*))) == NULL)
		return (-1);
	else
		return (ft_strlen(*string));
}
