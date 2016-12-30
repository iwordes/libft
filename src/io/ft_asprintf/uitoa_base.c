/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uitoa_base.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 18:53:00 by iwordes           #+#    #+#             */
/*   Updated: 2016/12/27 13:13:20 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

/*
** Get the length of the string to allocate.
**
** If "alternate formatting" is enabled, more space will be allocated and
** replaced with zeroes. ('0')
** For alt-hex, one of those zeroes will become 'x'/'X'.
*/

static size_t	intsize(uintmax_t integer, uint8_t base, t_printer *p)
{
	size_t	l;

	l = ft_uintlen_base(integer, base);
	if (p->group)
		l += l / 3;
	if (p->alt)
	{
		if (integer > 0 && (p->conv == 'o' || p->conv == 'O'))
			l += 1;
		else if (integer > 0 && (p->conv == 'x' || p->conv == 'X'))
			l += 2;
	}
	if (p->pad || p->sign)
		l += 1;
	if (p->prec > 0 && (size_t)p->prec > l)
		l = (size_t)p->prec;
	return (l);
}

static char		*proper_base(t_printer *p)
{
	if (p->conv >= 'A' && p->conv <= 'Z')
		return (BASE64);
	else
		return (BASE64L);
}

char			*ft_asprintf_uitoa_base(uintmax_t integer, uint8_t base,
										t_printer *p)
{
	char	*string;
	size_t	i;
	size_t	l;

	if (base < 2 || base > 64)
		return (NULL);
	i = 0;
	l = intsize(integer, base, p);
	NULL_GUARD(string = ft_strnew(l));
	while (i < l - (p->pad || p->sign) ? 1 : 0)
	{
		if (p->group && i % 4 == 3)
			*(string + (l - 1) - i) = ',';
		else
		{
			*(string + (l - 1) - i) = proper_base(p)[integer % base];
			integer /= base;
		}
		i += 1;
	}
	if (p->pad || p->sign)
		*string = (p->sign) ? '+' : ' ';
	if (p->alt && (p->conv == 'x' || p->conv == 'X'))
		string[1] = p->conv;
	return (string);
}
