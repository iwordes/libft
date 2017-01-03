/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_wargp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 15:37:08 by iwordes           #+#    #+#             */
/*   Updated: 2017/01/02 09:17:09 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

/*
** Test for Width, Argument, and Precision, as each could ambiguously turn into
** one another mid-parse.
*/

static int	parse_num(const char **fmt, char was_dot, t_printer *printer)
{
	ssize_t	num;

	num = 0;
	if ((**fmt >= ((was_dot) ? '0' : '1')) && **fmt <= '9')
	{
		while (**fmt >= '0' && **fmt <= '9')
		{
			num = (num * 10) + (**fmt - '0');
			*fmt += 1;
		}
		if (**fmt == '$')
			printer->arg = num;
		else if (was_dot)
			printer->prec = num;
		else
			printer->width = num;
		return (TRUE);
	}
	return (FALSE);
}

static int	parse_star(const char **fmt, va_list arg, char dot, t_printer *p)
{
	int		star_num;

	if (**fmt != '*')
		return (FALSE);
	star_num = va_arg(arg, int);
	p->stars += 1;
	*fmt += 1;
	if (dot)
		p->prec = star_num;
	else
		p->width = star_num;
	return (TRUE);
}

char		ft_asprintf_parse_wargp(const char **fmt, va_list arg,
															t_printer *printer)
{
	ssize_t		prec;
	char		was_dot;

	prec = 0;
	was_dot = FALSE;
	if (**fmt == '.')
	{
		*fmt += 1;
		was_dot = TRUE;
		printer->prec = (printer->prec >= 0) ? printer->prec : 0;
	}
	if (parse_num(fmt, was_dot, printer))
		return (TRUE);
	else if (parse_star(fmt, arg, was_dot, printer))
		return (TRUE);
	return (was_dot);
}
