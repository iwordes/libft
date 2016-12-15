/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 16:43:40 by iwordes           #+#    #+#             */
/*   Updated: 2016/12/14 09:17:23 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns the given number * itself power times.
** Watch out for overflow!
*/

intmax_t	ft_power(intmax_t base, int exponent)
{
	long long		output;

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
