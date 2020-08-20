/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dag00dag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/27 23:27:38 by dag00dag          #+#    #+#             */
/*   Updated: 2020/07/29 16:48:34 by dag00dag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** deletes one list element without breaking the list
*/

t_list	*ft_lstdel(t_list **lst, t_list *to_del)
{
	t_list *ne;
	t_list *l;

	l = *lst;
	if (to_del == l)
	{
		*lst = l->next;
		free(to_del->content);
		free(to_del);
		return (*lst);
	}
	while (lst && to_del)
	{
		if (l->next == to_del)
		{
			ne = to_del->next;
			l->next = ne;
			free(to_del->content);
			free(to_del);
			return (ne);
		}
		l = l->next;
	}
	return (NULL);
}
