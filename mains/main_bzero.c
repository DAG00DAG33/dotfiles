
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "ft_bzero.c"

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
	char a[40] = "aaaaaHola Mundo";
	ft_bzero(a, 4);
	ft_putstrlen(a, 20);
}

