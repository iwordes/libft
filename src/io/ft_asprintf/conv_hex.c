/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_hex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 16:38:09 by iwordes           #+#    #+#             */
/*   Updated: 2016/12/27 10:01:17 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

ssize_t	ft_asprintf_conv_hex(char **string, va_list arg, t_printer *p)
{
	*string = ft_asprintf_uitoa_base(ft_asprintf_cast_unsigned(arg, p), 16, p);
	if (*string == NULL)
		return (-1);
	else
		return (ft_strlen(*string));
}
