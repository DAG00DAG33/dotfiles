/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dag00dag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 03:30:03 by dag00dag          #+#    #+#             */
/*   Updated: 2020/08/04 18:36:56 by digarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** returns a string with allocated memory joining the arguments
** with null termination
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i1;
	int		i2;
	char	*ret_str;

	if (!s1 || !s2)
		return (NULL);
	i1 = ft_strlen(s1);
	i2 = ft_strlen(s2);
	if (!(ret_str = malloc((i1 + i2 + 1) * sizeof(char))))
		return (NULL);
	i1 = 0;
	i2 = 0;
	while (s1[i1])
	{
		ret_str[i1] = s1[i1];
		i1++;
	}
	while (s2[i2])
	{
		ret_str[i1 + i2] = s2[i2];
		i2++;
	}
	ret_str[i1 + i2] = 0;
	return (ret_str);
}
