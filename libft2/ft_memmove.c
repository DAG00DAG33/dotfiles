/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dag00dag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 03:52:11 by dag00dag          #+#    #+#             */
/*   Updated: 2020/07/10 17:29:54 by dag00dag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(char *dest, const char *src, int num)
{
	int	i;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = dest > src ? num - 1 : 0;
	while (i > -1 && i < num)
	{
		dest[i] = src[i];
		i += dest > src ? -1 : 1;
	}
	return ((void*)dest);
}
