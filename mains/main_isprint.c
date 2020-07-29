

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include "ft_isprint.c"


int main()
{
	int i = -1;

	while (i++ < 300)
		printf("%i-->%i, %i\n", i, isprint(i), ft_isprint(i));
}

