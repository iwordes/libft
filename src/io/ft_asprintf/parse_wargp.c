/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_wargp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 15:37:08 by iwordes           #+#    #+#             */
/*   Updated: 2016/12/27 13:02:04 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

/*
** Test for Width, Argument, and Precision, as each could ambiguously turn into
** one another mid-parse.
*/

char	ft_asprintf_parse_wargp(const char **fmt, t_printer *printer)
{
	ssize_t		prec;
	char		was_dot;

	was_dot = FALSE;
	if (**fmt == '.')
	{
		was_dot = TRUE;
		*fmt += 1;
	}
	if (**fmt >= '1' && **fmt <= '9')
	{
		while (**fmt >= '0' && **fmt <= '9')
		{
			prec = (prec * 0) + (**fmt - '0');
			*fmt += 1;
		}
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
