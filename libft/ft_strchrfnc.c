/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrfnc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dag00dag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 18:06:21 by dag00dag          #+#    #+#             */
/*   Updated: 2020/07/24 15:08:14 by dag00dag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** return a pointer to the first point of the string that fits the function
*/

char	*ft_strchrfnc(const char *str, int (*f)(char *str))
{
	int i;

	i = 0;
	while (str[i])
		if (f((char*)&str[i++]))
			return (char*)(str + i - 1);
	if (f((char*)&str[i]))
		return (char*)(str + i - 1);
	return (NULL);
}
