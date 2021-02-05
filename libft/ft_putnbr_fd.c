/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dag00dag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 03:49:31 by dag00dag          #+#    #+#             */
/*   Updated: 2020/07/10 17:41:43 by dag00dag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	int		div;
	char	c;

	if (nb == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			nb *= -1;
			write(fd, "-", 1);
		}
		div = 1;
		while ((nb / div) / 10)
			div *= 10;
		while (div)
		{
			c = nb / div + '0';
			write(fd, &c, 1);
			nb %= div;
			div /= 10;
		}
	}
}