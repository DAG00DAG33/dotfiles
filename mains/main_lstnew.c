#include "libft.h"
int	main()
{
	t_list *lst1;

	char a[10] = "Hola";
	lst1 = ft_lstnew(a);
	ft_printlst(lst1);
}
