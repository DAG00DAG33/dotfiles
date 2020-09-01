/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dag00dag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 20:02:50 by dag00dag          #+#    #+#             */
/*   Updated: 2020/07/21 00:03:21 by dag00dag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** uses del in case of failed allocation
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void *))
{
	t_list	*l;
	t_list	*nex;

	if (!f)
		return (NULL);
	l = NULL;
	while (lst != NULL)
	{
		nex = ft_lstnew((*f)(lst->content));
		if (nex == NULL)
		{
			ft_lstclear(&lst, del);
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&l, nex);
		lst = lst->next;
	}
	return (l);
}
