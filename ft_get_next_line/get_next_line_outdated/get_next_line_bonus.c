#include "get_next_line.h"

/*
** allocates and returns a new buffer initialized with 0s and pos=0
*/

t_buffer	*new_buffer(int fd)
{
	t_buffer *b;

	b = malloc(sizeof(t_buffer));
	b->fd = fd;
	b->pos = 0;
	ft_bzero(b->buff, BUFFER_SIZE + 1);
	return (b);
}

/*
** manages finding the corresponding buffer from the list
** creates and allocates a new buffer if necesary
*/

t_buffer	*get_buffer(t_list **lst, const int fd)
{
	t_list			*l;

	if (!lst || !(l = ft_lstfind(*lst, (void*)&fd, sizeof(int))))
	{
		ft_lstadd_front(lst, ft_lstnew(new_buffer(fd)));
		l = *lst;
	}
	return ((t_buffer*)l->content);
}

int	get_next_line(const int fd, char **line)
{
	static t_list	*lst;
	t_buffer		*b;
	char			*aux[2];
	int				ret;

	
	b = get_buffer(&lst, fd);
	if ((aux[0] = ft_strchr(&(b->buff)[b->pos], '\n')))
	{
		*line = ft_substr(b->buff, b->pos, (int)(aux[0] - &(b->buff)[b->pos]));
		b->pos += (int)(aux[0] - &(b->buff)[b->pos]) + 1;
		return (1);
	}
	aux[0] = ft_strdup(&(b->buff)[b->pos]);
	*line = aux[0];
	b->pos = 0;
	ft_bzero(b->buff, BUFFER_SIZE + 1);
	if ((ret = read(b->fd, b->buff, BUFFER_SIZE)) < 1)
		return (0 * !ft_lstdel(&lst, ft_lstfind(lst, (void*)&fd, sizeof(int))) + ret);
	ret = get_next_line(b->fd, &aux[1]);
	*line = ft_strjoin(aux[0], aux[1]);
	free(aux[0]);
	free(aux[1]);
	return (ret);
}

/*int	get_next_line(const int fd, char **line)
{
	static char	buff[BUFFER_SIZE + 1];
	static int	pos = 0;
	char		*aux[2];
	int		ret;

	if ((aux[0] = ft_strchr(&buff[pos], '\n')))
	{
		*line = ft_substr(buff, pos, (int)(aux[0] - &buff[pos]));
		pos += (int)(aux[0] - &buff[pos]) + 1;
		return (1);
	}
	aux[1] = ft_strdup(&buff[pos]);
	pos = 0;
	*line = aux[1];
	ft_bzero(buff, BUFFER_SIZE + 1);
	if ((ret = read_padd(fd, buff, BUFFER_SIZE)) < 1)
		return (ret + 0 * (pos = BUFFER_SIZE));
	ret = get_next_line(fd, &aux[0]);
	*line = ft_strjoin(aux[1], aux[0]);
	free(aux[0]);
	free(aux[1]);
	return (ret);
}*/

/*int	get_next_line(const int fd, char **line)
{
	static char	buff[BUFF_SIZE];
	static int	pos = 0;
	char		*end;
	char		*tmp;

	if ((end = ft_strchr(&buff[pos], '\n')))
	{
		*line = ft_substr(buff, pos, (int)(end - &buff[pos]));
		pos += (int)(end - &buff[pos]) + 1;
		return (1);
	}
	tmp = ft_strdup(&buff[pos]);
	read_padd(fd, buff, BUFF_SIZE);
	pos = 0;
	get_next_line(fd, line); //return detection here
	*line = ft_strjoin(tmp, *line);
}*/
