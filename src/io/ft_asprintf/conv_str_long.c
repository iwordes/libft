/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_str_long.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 09:30:40 by iwordes           #+#    #+#             */
/*   Updated: 2016/12/30 10:37:03 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

/*
** Things to watch out for:
** - What does printf do when given a prematurely NUL-terminated UTF-8 string?
*/
/*
** TODO
** - Truncate string to precision length
*/

ssize_t		ft_asprintf_conv_str_long(char **string, va_list arg, t_printer *p)
{
	(void)p;
	if ((*string = (char*)ft_utf32to8(va_arg(arg, uint32_t*))) == NULL)
		return (-1);
	else
		return ((ssize_t)ft_strlen(*string));
}
