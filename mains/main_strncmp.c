#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"
#include "ft_strncmp.c"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != 0)
		write(1, &str[i++], 1);
}
void	ft_putstrlen(char *str, int n)
{
	int i;

	i = 0;
	while(i < n)
		write(1, &str[i++], 1);
}

int main()
{
	int  d, e;
	d = ft_strncmp("\0", "\200", 5);
	e = strncmp("\0", "\200", 5);
	ft_putnbr(d);
	write(1,"\n",1);
	ft_putnbr(e);
}

