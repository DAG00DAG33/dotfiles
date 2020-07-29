


#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "ft_strrchr.c"

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
	char *a = "Holo Mundo \0 Hello World";
	char *d;
	d = ft_strrchr(a, '\0');
	ft_putstr(a);
	write(1,"\n",1);
	ft_putstrlen(d, 10);
}

