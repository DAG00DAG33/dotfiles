
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "ft_split.c"

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

void	ft_printarr(char **arr)
{
	int i;

	i = 0;
	while(arr[i] != NULL)
	{
		ft_putstr(arr[i]);
		write(1, "\n", 1);
		i++;
	}
}

int	main()
{
	char *a = "Hola///Mundo/que/tal/que/haces";
	char **d;
	d = ft_split(a, '/');
	ft_printarr(d);
//	write(1,"\n",1);
	//ft_putstrlen(d, 15);
}

