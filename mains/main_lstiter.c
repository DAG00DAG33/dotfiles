#include "libft.h"

void	del(void *content)
{
	free(content);
}
void	f(void *content)
{
	int i;
	char *str;

	str = (char*)content;
	i = -1;
	while(str[++i])
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
}
int	main()
{
	t_list *lst1;

	lst1 = ft_lstnew(ft_strdup("Mundo"));
	ft_lstadd_front(&lst1, ft_lstnew(ft_strdup("Hola")));
	ft_lstadd_back(&lst1, ft_lstnew(ft_strdup("Hello")));
	ft_lstadd_back(&lst1, ft_lstnew(ft_strdup("World")));
	ft_lstiter(lst1, &f);
	ft_printlst(lst1);
}
