/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strctrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 16:44:13 by iwordes           #+#    #+#             */
/*   Updated: 2016/10/02 16:49:29 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Delivers a copy of a given *string* sans leading or trailing *c*haracters.
*/
char		*ft_strctrim(const char *string, const char c)
{
	size_t	length;
	size_t	start;
	char	*trimmed;

	start = 0;
	while (string[start] == c)
		start++;
	length = ft_strlen(string + start);
	while (string[length - 1] == c)
		length--;
	trimmed = ft_strsub(string, start, length);
	return (trimmed);
}
