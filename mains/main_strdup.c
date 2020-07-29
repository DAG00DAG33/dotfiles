


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "ft_substr.c"

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
	char  *ptr;
	ptr = ft_strdup("lol");
	printf("%p", ptr);
	ft_putstr(ptr);
	if (!ptr)
		ft_putstr("okey");
	ft_putstr("failed");
}
