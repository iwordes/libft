/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_char_long.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 13:56:15 by iwordes           #+#    #+#             */
/*   Updated: 2016/12/29 16:17:15 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

ssize_t	ft_asprintf_conv_char_long(char **string, va_list arg, t_printer *p)
{
	(void)p;
	if ((*string = ft_strnew(4)) == NULL)
		return (-1);
	else if ((*(wchar_t*)*string = ft_utf8_encode(va_arg(arg, wchar_t))) == -1)
		return (-1);
	else
		return ((ssize_t)ft_strlen(*string));
}
