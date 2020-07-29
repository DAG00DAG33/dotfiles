#include "libft.h"

int	main()
{
	t_list *lst1;
	t_list *l = ((void*)0);
	char a[10] = "Mundo";
	lst1 = ft_lstnew(a);
	ft_lstadd_front(&lst1, ft_lstnew("Hola"));
	ft_lstadd_back(&lst1, ft_lstnew("Hello"));
	ft_lstadd_back(&lst1, ft_lstnew("World"));
	ft_lstadd_back(&l, lst1);
	ft_printlst(l);
}
