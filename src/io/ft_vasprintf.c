/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vasprintf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 08:18:01 by iwordes           #+#    #+#             */
/*   Updated: 2017/01/01 21:12:12 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

/*
** Return the plain-text portion of the given format string.
**
** 1. Determine the index of the next '%' character. (or '\0')
**    The above index is (also) the length of our substring.
** 2. Create a substring of the above length from the format string.
** 3. Null guard the new substring.
** 4. Increment the format string pointer by the substring length.
** 5. Return the length of the new substring.
*/

static ssize_t	get_text_segment(char **string, const char **fmt)
{
	ssize_t		length;

	length = ft_struntil(*fmt, '%');
	*string = ft_strsub(*fmt, 0, length);
	if (*string == NULL)
		return (-1);
	*fmt += length;
	return (length);
}

/*
** Return the output conversion spec of the given format string.
**
** 1. Determine if there is a conversion spec available.
**    If not, terminate early with an empty string.
** 2. Zero out and initialize a t_printer struct.
** 3. Parse the conversion spec, storing its data in the t_printer.
**    If there literally was no conversion (EOL was hit), return error.
** 4. Get the proper argument. If an $argument selector was parsed, it will be
**    used instead of the current argument index.
**    NOTE: This implementation is at risk of deviating from standard printf
**    behavior and may skip arguments when an argsel has been specified.
**        while (TRUE) { get_arg(); a++ }
**    NOTE: This may not work as intended due to the unknown internal
**    implementation of va_list.
** 5. Run the proper convspec function as defined in the t_printer.
**    Its return value is passed to our caller.
*/

static ssize_t	get_conv_segment(char **string, const char **fmt,
								va_list args, size_t *a)
{
	t_printer	printer;
	ssize_t		length;
	va_list		arg;
	size_t		i;

	if (**fmt != '%')
	{
		*string = ft_strnew(0);
		return (0);
	}
	ft_bzero(&printer, sizeof(t_printer));
	printer.arg = *a;
	printer.prec = -1;
	ft_asprintf_parse(fmt, &printer);
	if (printer.conv == 0)
		return (-1);
	va_copy(arg, args);
	i = 0;
	while (i++ < printer.arg)
		va_arg(arg, int);
	length = ft_asprintf_dispatch(string, arg, a, &printer);
	va_end(arg);
	return (length);
}

/*
** * could be accounted for by double calling va_arg()
*/

int				ft_vasprintf(char **string, const char *fmt, va_list args)
{
	char		*seg[2];
	ssize_t		l[3];
	size_t		a;

	a = 0;
	l[2] = 0;
	*string = ft_strnew(0);
	while (*fmt != 0)
	{
		if ((l[0] = get_conv_segment(seg + 0, &fmt, args, &a)) < 0)
			break ;
		if ((l[1] = get_text_segment(seg + 1, &fmt)) < 0)
			free(seg[0]);
		if (l[1] < 0)
			break ;
		if ((seg[0] = ft_asprintf_segdjoin(seg[0], seg[1], l[0], l[1])) == NULL)
			break ;
		seg[1] = ft_asprintf_segjoin(*string, seg[0], l[2], l[0] + l[1]);
		free(seg[0]);
		if (seg[1] == NULL)
			break ;
		*string = seg[1];
		l[2] += l[0] + l[1];
	}
	return (l[2]);
}
