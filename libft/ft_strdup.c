/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dag00dag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 03:32:53 by dag00dag          #+#    #+#             */
/*   Updated: 2020/07/10 17:40:45 by dag00dag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** allocates memory and copies the strign
*/

char	*ft_strdup(const char *str)
{
	int		i;
	char	*new_string;

	i = 0;
	while (str[i])
		i++;
	i++;
	new_string = malloc(i * sizeof(char));
	if (new_string == NULL)
		return (NULL);
	while (i--)
		new_string[i] = str[i];
	return (new_string);
}
