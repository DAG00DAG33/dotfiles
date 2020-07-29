

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include "ft_toupper.c"


int main()
{
	int i = -100;

	while (i++ < 600)
		printf("%i-->%i, %i\n", i, toupper(i), ft_toupper(i));
}

