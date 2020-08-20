/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 19:27:15 by marvin            #+#    #+#             */
/*   Updated: 2020/08/20 19:27:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_next_line(const int fd, char **line)
{
	static char	buff[BUFFER_SIZE + 1];
	static int	pos = 0;
	char		*aux[2];
	int			ret;

	if (BUFFER_SIZE < 1 || !line)
		return (-1);
	if ((aux[0] = ft_strchr(&buff[pos], '\n')))
	{
		*line = ft_substr(buff, pos, (int)(aux[0] - &buff[pos]));
		pos += (int)(aux[0] - &buff[pos]) + 1;
		return (1);
	}
	aux[1] = ft_substr(buff, pos, BUFFER_SIZE - pos);
	pos = 0;
	*line = aux[1];
	if ((ret = read(fd, buff, BUFFER_SIZE)) < 1)
		return (ret + (pos = BUFFER_SIZE) * 0);
	buff[ret] = 0;
	ret = get_next_line(fd, &aux[0]);
	*line = ft_strjoin(aux[1], aux[0]);
	free(aux[0]);
	free(aux[1]);
	return (ret);
}
