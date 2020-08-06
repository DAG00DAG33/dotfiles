#include "get_next_line.h"

//#include "src/ft_strdup.c"		//-->
//#include "src/ft_strlen.c"
//#include "src/ft_substr.c"
//#include "src/ft_strjoin.c"
//#include "src/ft_strchr.c"
//#include "src/ft_bzero.c"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*return_string;

	i = 0;
	while (s[i])
		i++;
	if (i < start)
	{
		return_string = malloc(sizeof(char));
		*return_string = 0;
		return (return_string);
	}
	i = 0;
	while (s[start + i] && i < len)
		i++;
	if (!(return_string = malloc((i + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		return_string[i] = s[start + i];
		i++;
	}
	return_string[i] = 0;
	return (return_string);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i1;
	int		i2;
	char	*ret_str;

	i1 = 0;
	i2 = 0;
	while (s1[i1])
		i1++;
	while (s2[i2])
		i2++;
	//i1 = ft_strlen(s1);
	//i2 = ft_strlen(s2);
	if (!s1 || !s2 || !(ret_str = malloc((i1 + i2 + 1) * sizeof(char))))
		return (NULL);
	i1 = 0;
	i2 = 0;
	while (s1[i1])
	{
		ret_str[i1] = s1[i1];
		i1++;
	}
	while (s2[i2])
	{
		ret_str[i1 + i2] = s2[i2];
		i2++;
	}
	ret_str[i1 + i2] = 0;
	return (ret_str);
}

char	*ft_strchr(const char *str, int c)
{
	int i;

	i = 0;
	while (str[i])
		if (str[i++] == c)
			return (char*)(str + i - 1);
	if (str[i++] == c)
		return (char*)(str + i - 1);
	return (NULL);
}

void	ft_bzero(char *str, size_t num)
{
	if (!str)
		return ;
	while (num)
		str[--num] = 0;
}
