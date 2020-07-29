


#include <stdio.h>
#include <unistd.h>
#include <string.h>
//#include "ft_memmove.c"
#include "libft.h"

//void	*ft_memmove(char *dest, const char *src,size_t num);

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
	char c[40];
	strcpy(c, "Hola Mudo");
	char *d;
	d = ft_memmove(c + 5, c, 4);
	ft_putstr(c);
	write(1,"\n",1);
	ft_putstr(d);
}

