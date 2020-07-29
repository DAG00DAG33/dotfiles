
#include "src/libft.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int	get_next_line(const int fd, char **line);

int	main()
{
	char *str;
	int fd;
	int fd2;
	int ret;

	//fd = open("half_marge_top", O_RDONLY);
	fd = 1;
	while((ret = get_next_line(fd, &str)))
	{
		ft_putnbr(ret);
		ft_putstr("\t");
		ft_putstr(str);
		ft_putstr("\n");
		free(str);
	}
	ft_putnbr(ret);
	ft_putstr("\t");
	ft_putstr(str);
	ft_putstr("\n");
	free(str);
}
