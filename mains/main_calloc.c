
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "ft_calloc.c"

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
	char *a = "Holo Mundo";
	char *d;
	d = calloc(0, sizeof(char));
	int size = 8539;
	void *d1 = ft_calloc(size, sizeof(int));
	void *d2 = calloc(size, sizeof(int));
	if (memcmp(d1, d2, size * sizeof(int)))
		ft_putstr("failed");
	ft_putstr("success");
	ft_putstrlen(d1, 15);
	write(1,"\n",1);
	ft_putstrlen(d2, 15);
}

