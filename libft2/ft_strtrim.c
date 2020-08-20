/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 20:34:28 by digarcia          #+#    #+#             */
/*   Updated: 2020/08/01 15:13:04 by dag00dag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isinstr(char const *str, char c)
{
	while (*str)
		if (*str++ == c)
			return (1);
	return (0);
}

/*
** removes the char set from the begining and end of the string
** and returns the modified
*/

char			*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	end;

	i = 0;
	if (!s1)
		return (NULL);
	while (ft_isinstr(set, s1[i]))
		i++;
	end = ft_strlen(s1) - 1;
	while (ft_isinstr(set, s1[end]) && end > i)
		end--;
	return (ft_substr(s1, i, end - i + 1));
}
