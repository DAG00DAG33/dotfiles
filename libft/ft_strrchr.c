/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 20:38:20 by digarcia          #+#    #+#             */
/*   Updated: 2020/07/10 17:36:46 by dag00dag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *str, int c)
{
	int		i;
	char	*s;

	s = NULL;
	i = 0;
	while (str[i])
		if (str[i++] == c)
			s = (char*)(str + i - 1);
	if (str[i++] == c)
		s = (char*)(str + i - 1);
	return (s);
}
