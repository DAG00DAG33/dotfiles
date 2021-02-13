#include <string.h>
#include <math.h>
#include "utils.c"
#include "ft_litoa.c"


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
	printBits(&m1, sizeof(m1));
	printf("m1: %li, e1: %li", m1, e1);
}

void	ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

char	*ft_ftoa(float f, int precission)
{
	union u_funion u;
	long long m1_num;
	int e1, e2;
	char *m1;
	u.f = f;
	m1_num = (u.i & 0x000fffffffffffff) + pow(2 ,52);
	m1 = ft_litoa(m1_num);
	e1 = ((u.i & 0xfff0000000000000) >> 52);
	e2 = e1 - 1023 - 52;
	printf("%li", m1_num);
	printf("\n%s, %i\n", m1, e2);
	if (e2 >= 0)
		mlt_pow_str(&m1, 2, e2);
	else
		mlt_pow_str(&m1, 5, -e2);
	return m1;
}

