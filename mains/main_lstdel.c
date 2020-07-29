#include "src/libft.h"

void	del(void *content)
{
	free(content);
}
int	main()
{
	t_list *lst1;

	char *a;
	a = ft_strdup("Mundo");
	lst1 = ft_lstnew(a);
	ft_lstadd_front(&lst1, ft_lstnew(ft_strdup("Hola")));
	ft_lstadd_back(&lst1, ft_lstnew(ft_strdup("Hello")));
	ft_lstadd_back(&lst1, ft_lstnew(ft_strdup("World")));
	ft_printlst(lst1);
	ft_lstdel(&lst1, ft_lstfind(lst1, "Hola", 4));
	ft_printlst(lst1);
}
