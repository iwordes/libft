/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_internal.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 10:50:09 by iwordes           #+#    #+#             */
/*   Updated: 2016/12/30 13:12:50 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_INTERNAL_H
# define FT_PRINTF_INTERNAL_H

# include <stdarg.h>
# include <stddef.h>
# include <stdint.h>
# include <sys/types.h>
# include <wchar.h>

# include <libft.h>

# include "ft_printf.h"

typedef struct	s_printer
{
	char		conv;

	char		left_just;
	char		zero_pad;

	char		alt;
	char		base;
	char		group;
	char		sign;
	char		pad;
	char		length;

	size_t		arg;
	size_t		width;
	ssize_t		prec;
}				t_printer;

intmax_t		ft_asprintf_cast_signed(va_list a, t_printer *p);
uintmax_t		ft_asprintf_cast_unsigned(va_list a, t_printer *p);
ssize_t			ft_asprintf_dispatch(char **s, va_list a, t_printer *p);
void			ft_asprintf_parse(const char **fmt, t_printer *p);
char			ft_asprintf_parse_flags(const char **fmt, t_printer *p);
char			ft_asprintf_parse_length(const char **fmt, t_printer *p);
char			ft_asprintf_parse_wargp(const char **fmt, t_printer *p);
char			*ft_asprintf_uitoa_base(uintmax_t integer, uint8_t base,
																t_printer *p);

ssize_t			ft_asprintf_conv_char_long(char **s, va_list a, t_printer *p);
ssize_t			ft_asprintf_conv_dec_long(char **s, va_list a, t_printer *p);
ssize_t			ft_asprintf_conv_hex_caps(char **s, va_list a, t_printer *p);
ssize_t			ft_asprintf_conv_octal_long(char **s, va_list a, t_printer *p);
ssize_t			ft_asprintf_conv_str_long(char **s, va_list a, t_printer *p);
ssize_t			ft_asprintf_conv_unsigned_long(char **string, va_list arg,
																t_printer *p);

ssize_t			ft_asprintf_conv_char(char **s, va_list a, t_printer *p);
ssize_t			ft_asprintf_conv_dec(char **s, va_list a, t_printer *p);
ssize_t			ft_asprintf_conv_hex(char **s, va_list a, t_printer *p);
ssize_t			ft_asprintf_conv_octal(char **s, va_list a, t_printer *p);
ssize_t			ft_asprintf_conv_ptr(char **s, va_list a, t_printer *p);
ssize_t			ft_asprintf_conv_str(char **s, va_list a, t_printer *p);
ssize_t			ft_asprintf_conv_unsigned(char **s, va_list a, t_printer *p);

ssize_t			ft_asprintf_conv_literal(char **s, va_list a, t_printer *p);

#endif
