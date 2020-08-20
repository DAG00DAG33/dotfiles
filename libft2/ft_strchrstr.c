/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dag00dag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/27 23:26:20 by dag00dag          #+#    #+#             */
/*   Updated: 2020/07/27 23:26:23 by dag00dag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** return a pointer to char c in the the string str
** char c is any char in string c
** char c can NOT be the 0 for termination
*/

static int		ft_isinstr(char const *str, char c)
{
	while (*str)
		if (*str++ == c)
			return (1);
	return (0);
}

char			*ft_strchrstr(const char *str, const char *c)
{
	int i;

	i = 0;
	while (str[i])
		if (ft_isinstr(c, str[i++]))
			return (char*)(str + i - 1);
	return (NULL);
}
