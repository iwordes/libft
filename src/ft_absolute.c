/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_absolute.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 16:40:41 by iwordes           #+#    #+#             */
/*   Updated: 2016/10/02 16:40:46 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns the absolute value of a given input.
** ISSUE: You simply can't represent INT_MIN as a positive number while still
**        conforming to the C standard and not relying on platform-specific
**        behavior.
*/
int		ft_absolute(int integer)
{
	return (integer >= 0 ? integer : -integer);
}
