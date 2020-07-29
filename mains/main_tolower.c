


#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include "ft_tolower.c"


int main()
{
	int i = -100;

	while (i++ < 300)
		printf("%i-->%i, %i\n", i, tolower(i), ft_tolower(i));
}

