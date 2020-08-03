
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "ft_strjoin.c"

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
	char *d;
	d = ft_strjoin("Hello ", "World");
	d = ft_strjoin(d, " Hola");
	ft_putstr(d);
	write(1,"\n",1);
	ft_putstrlen(d, 20);
}
