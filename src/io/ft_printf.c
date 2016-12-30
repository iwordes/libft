/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 09:07:38 by iwordes           #+#    #+#             */
/*   Updated: 2016/12/14 20:08:03 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

/*
** printf() runs through the various format specifier components in the
** following order:
** [ Argument selector (N$) ] [ Flags ] [ Width (N) ] [ Precision (.N) ] ...
** [ Length modifier (e.g. l, ll, etc) ] { Conversion (e.g. `d`, `f`) }
*/

int				ft_printf(const char *fmt, ...)
{
	va_list	args;
	ssize_t	ret;

	va_start(args, fmt);
	ret = ft_vprintf(fmt, args);
	va_end(args);
	return (ret);
}
