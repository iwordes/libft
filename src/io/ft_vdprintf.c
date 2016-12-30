/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 09:07:23 by iwordes           #+#    #+#             */
/*   Updated: 2016/12/14 09:07:24 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

/*
** Print a formatted string to a file descriptor.
*/

int		ft_vdprintf(int fd, const char *fmt, va_list args)
{
	char	*string;
	ssize_t	ret;

	ret = ft_vasprintf(&string, fmt, args);
	if (string != NULL && ret >= 0)
		write(fd, string, ret);
	free(string);
	return (ret);
}