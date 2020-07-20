#define BUFF_SIZE 10
#include <unistd.h>
#include "libft.h"

int	get_next_line(const int fd, char **line)
{
	static char	buff[BUFF_SIZE];
	static int	pos = 0;
	char		*end;
	char		*tmp;
	
	if (end = ft_strchr(&buff[pos], '\n'))
	{
		*line = ft_substr(buff, pos, (int)(end - &buff[pos]));
		pos += (int)(end - &buff[pos]) + 1;
		
	}
	else
	{
		tmp = ft_strdup(&buff[pos]);
		read(fd, buff, BUFF_SIZE);
		pos = 0;
		get_next_line(fd, line);
		*line = ft_strjoin(tmp, *line);
	}
		
}
