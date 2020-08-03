#include "get_next_line.h"


/*char	*ft_strdup(const char *str)
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
}*/

int	get_next_line(const int fd, char **line)
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
	aux[1] = ft_substr(buff, pos, BUFFER_SIZE - pos);
	//aux[1] = ft_strdup(&buff[pos]);
	pos = 0;
	*line = aux[1];
	ft_bzero(buff, BUFFER_SIZE + 1);
	if ((ret = read(fd, buff, BUFFER_SIZE)) < 1)
		return (ret + 0 * (pos = BUFFER_SIZE));
	ret = get_next_line(fd, &aux[0]);
	*line = ft_strjoin(aux[1], aux[0]);
	free(aux[0]);
	free(aux[1]);
	return (ret);
}
