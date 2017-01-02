/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 14:42:06 by iwordes           #+#    #+#             */
/*   Updated: 2017/01/01 14:41:49 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

/*
** Parsing loops through the stages prior to a conversion until all stages fail.
** After that, parsing ends, and the conversion-or-not is set as this
** t_printer's conversion.
*/

void	ft_asprintf_parse(const char **fmt, t_printer *printer)
{
	*fmt += 1;
	while (ft_asprintf_parse_wargp(fmt, printer)
		|| ft_asprintf_parse_flags(fmt, printer)
		|| ft_asprintf_parse_length(fmt, printer))
		(void)0;
	printer->conv = **fmt;
	if (printer->left_just || (PF_NUM(printer->conv) && printer->prec >= 0))
		printer->zero_pad = FALSE;
	*fmt += 1;
}
