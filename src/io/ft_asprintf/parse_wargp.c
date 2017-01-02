/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_wargp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 15:37:08 by iwordes           #+#    #+#             */
/*   Updated: 2017/01/01 20:50:01 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

/*
** Test for Width, Argument, and Precision, as each could ambiguously turn into
** one another mid-parse.
*/

static void	parsenum(const char **fmt, ssize_t *prec)
{
	while (**fmt >= '0' && **fmt <= '9')
	{
		*prec = (*prec * 10) + (**fmt - '0');
		*fmt += 1;
	}
}

char		ft_asprintf_parse_wargp(const char **fmt, t_printer *printer)
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
	if ((**fmt >= ((was_dot) ? '0' : '1')) && **fmt <= '9')
	{
		parsenum(fmt, &prec);
		if (**fmt == '$')
			printer->arg = prec;
		else if (was_dot)
			printer->prec = prec;
		else
			printer->width = prec;
		return (TRUE);
	}
	return (FALSE);
}
