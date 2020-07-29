
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "src/libft.h"

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
	ft_putnbr(ft_atoi("99999999999999999999999999"));
	write(1,"\n",1);
	ft_putnbr(atoi("99999999999999999999999999"));

	//ft_putnbr(d);
//	ft_putnbr(e);
	ft_putstr("Hello World");
}
