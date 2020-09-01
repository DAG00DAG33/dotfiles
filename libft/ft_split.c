/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dag00dag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 03:36:18 by dag00dag          #+#    #+#             */
/*   Updated: 2020/08/26 17:49:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
** returns an array of string with the different separations
** it doesn over separate if there are several separators together
** it ends the array with NULL
*/

int			ft_count(char const *str, char c)
{
	int		cnt;
	int		i;

	cnt = 0;
	i = 0;
	while (str[i] && str[i] == c)
		i++;
	while (str[i])
	{
		while (str[i] && str[i] != c)
			i++;
		while (str[i] && str[i] == c)
			i++;
		cnt++;
	}
	return (cnt);
}

char		**ft_split(char const *s, char c)
{
	char	**ret_arr;
	int		beg;
	int		end;
	int		i;

	beg = 0;
	end = 0;
	i = 0;
	if (!s || !(ret_arr = malloc((ft_count(s, c) + 1) * sizeof(char*))))
		return (NULL);
	while (s[end] && (s[end] == c))
		beg = ++end;
	while (s[end] && i < ft_count(s, c))
	{
		while (s[end] != c && s[end])
			end++;
		if (!(ret_arr[i] = ft_substr((char*)s, beg, end - beg)))
			return (NULL);
		while (s[end] && s[end] == c)
			beg = ++end;
		i++;
	}
	ret_arr[i] = NULL;
	return (ret_arr);
}
