/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dag00dag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 03:34:18 by dag00dag          #+#    #+#             */
/*   Updated: 2020/07/10 03:42:28 by dag00dag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** return a pointer to char c in the the string str
** char c can be the 0 for termination
*/

char	*ft_strchr(const char *str, int c)
{
	int i;

	i = 0;
	while (str[i])
		if (str[i++] == c)
			return (char*)(str + i - 1);
	if (str[i++] == c)
		return (char*)(str + i - 1);
	return (NULL);
}
