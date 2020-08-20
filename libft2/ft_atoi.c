/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 21:46:40 by digarcia          #+#    #+#             */
/*   Updated: 2020/08/04 18:42:12 by digarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** returns the number given in a string
** allows for just one +, -, or none sign
** overflows for int, but has a fixed return if it overflows a float
*/

static int		is_num(char *c)
{
	if (*c <= '9' && *c >= '0')
		return (1);
	return (0);
}

int				ft_atoi(char *str)
{
	long	nb;
	int		sign;

	nb = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n'
			|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign *= -1;
	while (is_num(str))
		nb = nb * 10 + *str++ - 48;
	if (nb < 0 && sign > 0)
		return (-1);
	if (nb < 0 && sign < 0)
		return (0);
	return (int)(nb * sign);
}
