/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dag00dag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 03:55:33 by dag00dag          #+#    #+#             */
/*   Updated: 2020/08/07 18:48:16 by digarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const char *str, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
		if (*(unsigned char*)&str[i++] == (unsigned char)c)
			return ((void*)&str[i - 1]);
	return (NULL);
}
