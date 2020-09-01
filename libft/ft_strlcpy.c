/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 22:02:57 by digarcia          #+#    #+#             */
/*   Updated: 2020/08/01 15:09:13 by dag00dag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (!dest || !src)
		return (0);
	while (i + 1 < n)
	{
		dest[i] = src[i];
		if (src[i] == 0)
			break ;
		i++;
	}
	if (i == n - 1)
		dest[i] = 0;
	while (src[i] != 0)
		i++;
	return (i);
}
