/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 10:53:16 by iwordes           #+#    #+#             */
/*   Updated: 2016/11/17 10:42:27 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_realloc Mk.I
** ==========
** A completely inefficient function that takes a void pointer, allocates a new
** buffer of the target size, then copies from the old location in memory to the
** new one, returning the copy after freeing the original pointer.
** + Should allocation fail, the function will return without any harm done.
*/

void		*ft_realloc(void *original, size_t target, size_t orig_size)
{
	void	*copy;

	NULL_GUARD(copy = (t_byte*)malloc(target));
	if (original != NULL && copy != NULL)
	{
		ft_memcpy(copy, original, ft_lesser(target, orig_size));
		free(original);
	}
	return (copy);
}
