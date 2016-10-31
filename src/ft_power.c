/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 16:43:40 by iwordes           #+#    #+#             */
/*   Updated: 2016/10/05 10:08:07 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns the given number * itself power times.
** Watch out for overflow!
*/

int			ft_power(int base, unsigned int exponent)
{
	int		output;

	if (exponent == 0)
		return (1);
	else
	{
		output = base;
		while (--exponent != 0)
			output *= base;
	}
	return (output);
}
