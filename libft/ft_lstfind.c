/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dag00dag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/25 20:26:28 by dag00dag          #+#    #+#             */
/*   Updated: 2020/07/26 01:49:35 by dag00dag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** returns the element of the lits that fits the deff
*/

t_list	*ft_lstfind(t_list *lst, void *deff, int n)
{
	if (lst == NULL)
		return (lst);
	while (lst)
	{
		if (!ft_memcmp(lst->content, deff, n))
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}
