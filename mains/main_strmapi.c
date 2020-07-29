#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "ft_strmapi.c"

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
char	char_function(unsigned int i, char c)
{
	if(c <= 'Z' && c >= 'A')
		return c + 32;
	return c;
}

int	main()
{
	char *a = "Hola Mundo";
	char *d;
	d = ft_strmapi("Hola Mundo", &char_function);
	ft_putstr(d);
	write(1,"\n",1);
	ft_putstrlen(d, 15);
}

