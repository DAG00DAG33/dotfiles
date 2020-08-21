/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 19:27:15 by marvin            #+#    #+#             */
/*   Updated: 2020/08/21 12:25:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#define FILE_NUM 256

int	get_next_line(const int fd, char **line)
{
	static t_buffer	b[FILE_NUM];
	char			*aux[2];
	int				ret;

	if (BUFFER_SIZE < 1 || !line || fd < 1 || fd > FILE_NUM)
		return (-1);
	if ((aux[0] = ft_strchr(&(b[fd].buff[b[fd].pos]), '\n')))
	{
		*line = ft_substr(b[fd].buff, b[fd].pos, (int)(aux[0] - &(b[fd].buff[b[fd].pos])));
		b[fd].pos += (int)(aux[0] - &(b[fd].buff[b[fd].pos])) + 1;
		return (1);
	}
	aux[1] = ft_substr(b[fd].buff, b[fd].pos, BUFFER_SIZE - b[fd].pos);
	b[fd].pos = 0;
	*line = aux[1];
	if ((ret = read(fd, b[fd].buff, BUFFER_SIZE)) < 1)
		return (ret + (b[fd].pos = BUFFER_SIZE) * 0);
	b[fd].buff[ret] = 0;
	ret = get_next_line(fd, &aux[0]);
	*line = ft_strjoin(aux[1], aux[0]);
	free(aux[0]);
	free(aux[1]);
	return (ret);
}
