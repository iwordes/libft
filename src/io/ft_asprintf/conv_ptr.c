/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_ptr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 18:31:29 by iwordes           #+#    #+#             */
/*   Updated: 2016/12/29 16:20:48 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

ssize_t	ft_asprintf_conv_ptr(char **string, va_list arg, t_printer *p)
{
	p->alt = TRUE;
	p->conv = 'x';
	p->pad = FALSE;
	p->sign = FALSE;
	return (ft_asprintf_conv_hex(string, arg, p));
}
