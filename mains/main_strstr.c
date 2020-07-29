#include "libft.h"
#include "string.h"

int	main()
{
	char *s1 = "MZIRIBMZIRIBMZP";
	char *s2 = "MZIRIBMZP";
	
	char *i1 = strstr(s1, s2);
	char *i2 = ft_strstr(s1, s2);

	ft_putstr(i2);
}
