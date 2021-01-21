#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "ft_ftoa.c"


int main()
{
	char *str = strdup("567890");
	//printf("%s", str);
	for(int i = 0; i < strlen(str); i++)
		printf("%d", str[i] - '0');
	printf("\n");
	mult_str(&str, 2);
	for(int i = 0; i < strlen(str); i++)
		printf("%d", str[i] - '0');

	//ft_printf("%s", mult)
}
