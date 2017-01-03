/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatch.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 19:29:32 by iwordes           #+#    #+#             */
/*   Updated: 2017/01/02 09:17:22 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

static char		g_conv_c[] =
{
	'C',
	'D',
	'O',
	'S',
	'U',
	'X',

	'c',
	'd',
	'i',
	'o',
	'p',
	's',
	'u',
	'x',

	0
};

static ssize_t	(*g_conv_f[])(char**, va_list, t_printer*) =
{
	ft_asprintf_conv_char_long,
	ft_asprintf_conv_dec_long,
	ft_asprintf_conv_octal_long,
	ft_asprintf_conv_str_long,
	ft_asprintf_conv_unsigned_long,
	ft_asprintf_conv_hex_caps,

	ft_asprintf_conv_char,
	ft_asprintf_conv_dec,
	ft_asprintf_conv_dec,
	ft_asprintf_conv_octal,
	ft_asprintf_conv_ptr,
	ft_asprintf_conv_str,
	ft_asprintf_conv_unsigned,
	ft_asprintf_conv_hex,

	ft_asprintf_conv_literal
};

/*
** Launch the proper conversion delegate and enforce minimum field width.
*/

ssize_t			ft_asprintf_dispatch(char **str, va_list arg, size_t *a,
															t_printer *p)
{
	int		i;
	char	*raw;
	ssize_t	l;

	i = 0;
	while (g_conv_c[i] != p->conv && g_conv_c[i] != 0)
		i += 1;
	if (g_conv_c[i] != 0)
		*a += 1;
	if ((l = g_conv_f[i](&raw, arg, p)) < 0)
		return (l);
	return (ft_asprintf_format(str, raw, l, p));
}
