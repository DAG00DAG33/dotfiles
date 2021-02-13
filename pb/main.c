#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "ft_ftoa.c"


int main()
{
	char *str = strdup("567899");
	printf("%s\n", str);
	mlt_pow_str(&str, 2, 10);
	printf("%s\n", str);

	//double f = 0.3;
	//ft_print_float_info(f);
	float f = 10e30;
	printf("%s\n", ft_ftoa(f, 10));
	printf("%.100f", f);
}
