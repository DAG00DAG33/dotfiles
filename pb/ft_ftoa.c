#include <string.h>
#include <math.h>
#include "utils.c"

char	*ft_ftoa(float f, int precission)
{
 return NULL;
}

char	*mult_str(char **str, int mul)
{
	int i;
	int len;
	char *new_str;

	i = 0;
	len = strlen(*str);
	for(int i = 0; i < (len); i++)
		(*str)[i] -= '0';
	i = len;
	while(i >= 0)
		(*str)[i--] *= mul;
	i = len;
	while(i > 0)
	{
		if ((*str)[i--] >= 10 && i > -1)
		{
			(*str)[i] += (*str)[i + 1] / 10;
			(*str)[i + 1] %= 10;
		}
	}
	
	if ((*str)[0] > 10)
	{
		i = 0;
		if((new_str = (char *)malloc(sizeof(char) * (len + 1))) == NULL)
		{
			write(1 ,"hola", 4);
			return NULL;
		}
		while(i++ <= len)
			new_str[i] = (*str)[i - 1];
		new_str[i] = 0;
		len++;
		new_str[0] = new_str[1] / 10;
		new_str[1] %= 10;
		free(*str);
		*str = new_str;
	}
	for(int i = 0; i < (len); i++)
		(*str)[i] += '0';
}

char	*mlt_pow_str(char **str, int mul, int pow)
{
	while(pow--)
		mult_str(str, mul);
}

 union u_funion
{
	unsigned long long i;
	double f;
}	u;
void	ft_print_float_info(float f)
{
	union u_funion u;
	long long m1, e1;
	u.f = f;
	m1 = (u.i & 0x000fffffffffffff) + pow(2 ,52);
	e1 = ((u.i & 0xfff0000000000000) >> 52);
	printBits(&u.f, sizeof(u.f));
	printBits(&u.i, sizeof(u.i));
	printf("m1: %d, e1: %d", m1, e1);
}
