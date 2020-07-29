
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include "ft_isalnum.c"


int main()
{
	int i = -100;

	while (i++ < 300)
		printf("%i-->%i, %i\n", i, isalnum(i), ft_isalnum(i));
}

