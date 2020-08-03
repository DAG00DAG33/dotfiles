#include "get_next_line_bonus.h"

/*
** allocates and returns a new buffer initialized with 0s and pos=0
*/

t_buffer	*new_buffer(int fd)
{
	t_buffer *b;

	b = malloc(sizeof(t_buffer));
	b->fd = fd;
	b->pos = 0;
	b->buff[0] = 0;
	//ft_bzero(b->buff, BUFFER_SIZE + 1);
	return (b);
}

/*
** it find the element list that contains the buffer with fd
** return the t_list element
*/

t_list	*find_buff(t_list *lst, const int fd)
{
	while (lst)
	{
		if (((t_buffer*)lst->content)->fd == fd)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}

/*
** manages finding the corresponding buffer from the list
** creates and allocates a new buffer if necesary
** (it is added to the list in the front)
*/

t_buffer	*get_buffer(t_list **lst, const int fd)
{
	t_list			*l;

	if (!lst || !(l = find_buff(*lst, fd)))
	{
		l = ft_lstnew(new_buffer(fd));
		l->next = *lst;
		*lst = l;
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
	aux[0] = ft_substr(b->buff, b->pos, BUFFER_SIZE - b->pos);
	*line = aux[0];
	b->pos = 0;
	//ft_bzero(b->buff, BUFFER_SIZE + 1);
	if ((ret = read(b->fd, b->buff, BUFFER_SIZE)) < 1)
		return (0 * !ft_lstdel(&lst, find_buff(lst, fd)) + ret);
	b->buff[ret] = 0;
	ret = get_next_line(b->fd, &aux[1]);
	*line = ft_strjoin(aux[0], aux[1]);
	return (ret);
}

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

/*---------------------------------------------------------------------------*/

/*
** deletes one list element without breaking the list
*/

t_list	*ft_lstdel(t_list **lst, t_list *to_del)
{
	t_list *ne;
	t_list *l;

	l = *lst;
	if (to_del == l)
		*lst = l->next;
	while (lst && to_del)
	{
		if (l->next == to_del || to_del == l)
		{
			ne = to_del->next;
			l->next = ne;
			free(to_del->content);
			free(to_del);
			return (ne);
		}
		l = l->next;
	}
	return (NULL);
}
