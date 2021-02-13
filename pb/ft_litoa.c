
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dag00dag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 04:05:06 by dag00dag          #+#    #+#             */
/*   Updated: 2021/01/26 19:58:32 by digarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** saves a signed int into a string and returns it
*/

char	*ft_litoa(long nb)
{
	long long	div;
	long long	n;
	char	c;
	char	*str;
	long		i;

	n = (long long)nb;
	i = 1;
	div = 1;
	while ((n / div) / 10 && i++)
		div *= 10;
	str = malloc(((nb < 0) ? i + 2 : i + 1) * sizeof(*str));
	if (str == NULL)
		return (NULL);
	if ((i = 0) || n < 0)
		str[i++] = '-';
	while (div)
	{
		c = ((n > 0) ? n : -n) / div + '0';
		str[i++] = c;
		n %= div;
		div /= 10;
	}
	str[i] = 0;
	return (str);
}
