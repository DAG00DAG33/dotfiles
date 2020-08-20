/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 20:40:59 by digarcia          #+#    #+#             */
/*   Updated: 2020/08/20 18:11:50 by digarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	int				len2;

	i = 0;
	len2 = ft_strlen(to_find);
	if (to_find[0] == '\0')
		return ((char*)str);
	while (i < len && str[i])
	{
		j = 0;
		while (to_find[j] == str[i + j] && str[i + j] && len2 + i <= len)
		{
			if (to_find[1 + j] == '\0')
				return ((char *)(str + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
