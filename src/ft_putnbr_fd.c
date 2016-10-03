/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 16:43:53 by iwordes           #+#    #+#             */
/*   Updated: 2016/10/02 16:43:55 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int num, int fd)
{
	if (num < 0)
		ft_putchar_fd('-', fd);
	if (num / 10 != 0)
		ft_putnbr_fd(ft_absolute(num / 10), fd);
	ft_putchar_fd('0' + ft_absolute(num % 10), fd);
}
