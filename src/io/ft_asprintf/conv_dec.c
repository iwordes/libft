/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_dec.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 10:32:42 by iwordes           #+#    #+#             */
/*   Updated: 2017/01/01 19:27:09 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

ssize_t		ft_asprintf_conv_dec(char **string, va_list arg, t_printer *p)
{
	intmax_t	integer;

	integer = ft_asprintf_cast_signed(arg, p);
	if (integer < 0)
	{
		p->neg = TRUE;
		p->pad = TRUE;
	}
	*string = ft_asprintf_uitoa_base(ABS(integer), 10, p);
	if (*string == NULL)
		return (-1);
	if (integer < 0 && (!p->zero_pad || p->width == 0))
		**string = '-';
	else if ((p->pad || p->sign) && (!p->zero_pad || p->width == 0))
		**string = (p->sign) ? '+' : ' ';
	return (ft_strlen(*string));
}
