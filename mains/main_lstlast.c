#include "libft.h"

int	main()
{
	t_list *lst1;

	char a[10] = "Mundo";
	lst1 = ft_lstnew(a);
	ft_lstadd_front(&lst1, ft_lstnew("Hola"));
	ft_lstadd_front(&lst1, ft_lstnew("Hello"));
	ft_lstadd_front(&lst1, ft_lstnew("World"));
	ft_printlst(lst1);
	ft_putstr(ft_lstlast(lst1)->content);
}
