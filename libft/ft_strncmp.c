/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 20:41:42 by digarcia          #+#    #+#             */
/*   Updated: 2020/07/30 02:54:59 by dag00dag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** man strnstr
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while ((s1[i] != 0 || s2[i] != 0) && i < n)
	{
		if (s1[i] != s2[i])
			return (int)((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	i--;
	if (n == 0)
		return (0);
	return (int)((unsigned char)s1[i] - (unsigned char)s2[i]);
}
