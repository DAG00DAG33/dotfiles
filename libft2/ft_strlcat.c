/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 18:40:28 by digarcia          #+#    #+#             */
/*   Updated: 2020/07/31 19:06:10 by digarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
** man strlcat
*/

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	i;

	dest_size = 0;
	while (dest[dest_size] != 0 && dest_size < size)
		dest_size++;
	i = 0;
	while (src[i] != 0 && ((dest_size + i + 1) < size))
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	if ((dest_size + i) < size)
		dest[dest_size + i] = 0;
	i = 0;
	while (src[i] != 0)
		i++;
	if (size < dest_size)
		return (i + size);
	return (dest_size + i);
}
