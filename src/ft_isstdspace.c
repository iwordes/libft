/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isstdspace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 16:42:32 by iwordes           #+#    #+#             */
/*   Updated: 2016/10/02 16:42:33 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Determines whether the given character is a Standard WhiteSPACE.
*/
int		ft_isstdspace(int ch)
{
	return (ch == ' ' || ch == '\t' || ch == '\n');
}
