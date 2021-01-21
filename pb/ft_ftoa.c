#include <string.h>

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
		new_str = (char *)malloc(sizeof(char) * (strlen(*str) + 1));
		while((*str)[i++])
		{
			new_str[i] = (*str)[i - 1];
		}
		new_str[i] = 0;
		new_str[0] = new_str[1] / 10;
		new_str[1] %= 10;
		free (*str);
		*str = new_str;
	}
	for(int i = 0; i < (len); i++)
		(*str)[i] += '0';
}
