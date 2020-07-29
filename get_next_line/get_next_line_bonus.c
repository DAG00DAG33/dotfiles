#include "get_next_line.h"

static int 	read_padd(int fd, char *str, int size)
{
	int i;

	i = read(fd, str, size);
	if (i == 0)
		return (0);
	if (i == -1)
		return (-1);
	while (i < size)
		str[i++] = 0;
	str[i++] = 0;
	return (1);
}

t_buffer 	*new_buffer(int fd)
{
	t_buffer *b;

	b = malloc(sizeof(t_buffer));
	b->fd = fd;
	b->pos = 0;
	ft_bzero(b->buff, BUFFER_SIZE + 1);
	return(b);
}

void 	*get_content(t_list *lst)
{
	if (lst)
		return (lst->content);
	return (NULL);
}

int	get_next_line(const int fd, char **line)
{
	static t_list 	*lst;
	t_buffer	*buff;
	char		*aux;
	char		*tmp;
	int		ret;

	if (!lst || !(buff = get_content(ft_lstfind(lst, (void*)&fd, sizeof(int)))))
	{
		ft_lstadd_front(&lst, ft_lstnew(new_buffer(fd)));
		buff = (t_buffer*)lst->content;
	}
	if ((aux = ft_strchr(&(buff->buff)[buff->pos], '\n')))
	{
		*line = ft_substr(buff->buff, buff->pos, (int)(aux - &(buff->buff)[buff->pos]));
		//-(buff->pos + 1 - (buff->pos += (int)(aux - &(buff->buff)[buff->pos] + 1)))
		buff->pos += (int)(aux - &(buff->buff)[buff->pos]) + 1;
	}
	else
	{
		tmp = ft_strdup(&(buff->buff)[buff->pos]);
		buff->pos = 0;
		*line = tmp;
		if ((ret = read_padd(buff->fd, buff->buff, BUFFER_SIZE)) < 1)
			return (0 * !ft_lstdel(&lst, ft_lstfind(lst, (void*)&fd, sizeof(int))) + ret);
		ret = get_next_line(buff->fd, &aux);
		*line = ft_strjoin(tmp, aux);
		free(aux);
		free(tmp);
		return (ret);
	}
	return(1);
}

/*int	get_next_line(const int fd, char **line)
{
	static char	buff[BUFFER_SIZE];
	static int	pos = 0;
	char		*aux;
	char		*tmp;
	int		ret;

	if ((aux = ft_strchr(&buff[pos], '\n')))
	{
		*line = ft_substr(buff, pos, (int)(aux - &buff[pos]));
		pos += (int)(aux - &buff[pos]) + 1;
	}
	else
	{
		tmp = ft_strdup(&buff[pos]);
		pos = 0;
		*line = tmp;
		if ((ret = read_padd(fd, buff, BUFFER_SIZE)) < 1)
			return (ret + 0 * (pos = BUFFER_SIZE));
		ret = get_next_line(fd, &aux);
		*line = ft_strjoin(tmp, aux);
		free(aux);
		free(tmp);
		return (ret);
	}
	return (1);
}*/

/*int	get_next_line(const int fd, char **line)
{
	static char	buff[BUFF_SIZE];
	static int	pos = 0;
	char		*end;
	char		*tmp;

	if (!line || fd < 1)
		return (-1);
	if ((end = ft_strchr(&buff[pos], '\n')))
	{
		*line = ft_substr(buff, pos, (int)(end - &buff[pos]));
		pos += (int)(end - &buff[pos]) + 1;
	}
	else
	{
		tmp = ft_strdup(&buff[pos]);
		read_padd(fd, buff, BUFF_SIZE);
		pos = 0;
		get_next_line(fd, line); //return detection here
		*line = ft_strjoin(tmp, *line);
	}
	return (1);
}*/
