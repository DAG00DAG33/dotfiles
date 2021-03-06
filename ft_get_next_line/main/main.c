#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "libft/libft.h"
#include "libft/ft_putstr.c"		//
#include "libft/ft_putnbr.c"		//

int	get_next_line(const int fd, char **line);

int	main()
{
	char *str;
	int fd;
	int fd2;
	int ret;

	fd = open("files/half_marge_top", O_RDONLY);
	fd2 = open("files/half_marge_bottom", O_RDONLY);
	while((ret = get_next_line(fd, &str)) > 0)
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
	ft_putstr("\n");
	free(str);
	while((ret = get_next_line(fd2, &str)) > 0)
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
	ft_putstr("\n");
	free(str);
	fd = open("files/a", O_RDONLY);
	while((ret = get_next_line(fd, &str)) > 0)
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
	ft_putstr("\n");
	free(str);
}
