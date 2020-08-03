
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "src/ft_strchrfnc.c"

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

int ft_streq(char *str)
{
	return (!ft_strncmp("Mundo", str, 5));
}

int main()
{
	char *a = "Holo Mundo  Hello World";
	char *d;
	d = ft_strchrfnc(a, &ft_streq);
	ft_putstr(a);
	write(1,"\n",1);
	ft_putstrlen(d, 10);
}
