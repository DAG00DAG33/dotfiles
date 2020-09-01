/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dag00dag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 03:56:52 by dag00dag          #+#    #+#             */
/*   Updated: 2020/07/10 03:57:30 by dag00dag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_memccpy(char *dest, const char *src, char c, int n)
{
	int	i;

	i = -1;
	while (++i < n)
	{
		dest[i] = src[i];
		if (src[i] == c)
			return (&dest[i + 1]);
	}
	return (NULL);
}
