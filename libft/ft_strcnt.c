#include "libft.h"

int		ft_strcnt(char *str, char c)
{
	int cnt;

	cnt = 0;
	while(*str)
		if (*str++ == c)
			cnt++;
	return (cnt);
}
