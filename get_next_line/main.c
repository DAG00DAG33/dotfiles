#include "libft.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int	get_next_line(const int fd, char **line);

int	main()
{
	char *str;
	int fd;

	fd = open("pb", O_RDONLY);
	get_next_line(fd, &str);
	ft_putstr(str);
	ft_putstr("\n");
	get_next_line(fd, &str);
	ft_putstr(str);
	ft_putstr("\n");
	get_next_line(fd, &str);
	ft_putstr(str);
	ft_putstr("\n");
	get_next_line(fd, &str);
	ft_putstr(str);
	ft_putstr("\n");
	get_next_line(fd, &str);
	ft_putstr(str);
	ft_putstr("\n");
	get_next_line(fd, &str);
	ft_putstr(str);
	ft_putstr("\n");
}
