
#include "libft.h"

void	del(void *content)
{
	free(content);
}
int	main()
{
	t_list *lst1;

	lst1 = ft_lstnew(ft_strdup("Mundo"));
	ft_lstadd_front(&lst1, ft_lstnew(ft_strdup("Hola")));
	ft_lstadd_back(&lst1, ft_lstnew(ft_strdup("Hello")));
	ft_lstadd_back(&lst1, ft_lstnew(ft_strdup("World")));
	ft_lstclear(&lst1, del);
	ft_printlst(lst1);
}
