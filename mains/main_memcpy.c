#include <stdio.h>
#include <unistd.h>
#include <string.h>
//#include "ft_memcpy.c"
#include "libft.h"

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

int	main()
{
/**	char *a = "Hola Mundo";
	char c[40];
	strcpy(c, "aaaaaaaaaa");
	char *d;**/
	int *d;
	int c, a;
	a = 10;
	d = ft_memcpy(NULL, NULL, sizeof(int));
	ft_putnbr(c);
	write(1,"\n",1);
	ft_putnbr(*d);
}

