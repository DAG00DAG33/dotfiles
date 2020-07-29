#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "ft_memset.c"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != 0)
		write(1, &str[i++], 1);
}

int main()
{
	char a[40] = "aaaa";
	char *c;
	c = ft_memset(a, 'c', 9);
	ft_putstr(a);
	write(1,"\n",1);
	ft_putstr(c);
}

