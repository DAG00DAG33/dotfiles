#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include "ft_isascii.c"


int main()
{
	int i = -100;

	while (i++ < 600)
		printf("%i-->%i, %i\n", i, isascii(i), ft_isascii(i));

}

