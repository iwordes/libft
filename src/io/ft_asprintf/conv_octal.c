/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_octal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 16:37:45 by iwordes           #+#    #+#             */
/*   Updated: 2016/12/12 16:40:42 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

ssize_t		ft_asprintf_conv_octal(char **string, va_list arg, t_printer *p)
{
	*string = ft_asprintf_uitoa_base(ft_asprintf_cast_unsigned(arg, p), 8, p);
	if (*string == NULL)
		return (-1);
	else
		return (ft_strlen(*string));
}
