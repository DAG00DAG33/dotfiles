/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dag00dag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 18:17:10 by dag00dag          #+#    #+#             */
/*   Updated: 2020/07/25 20:24:08 by dag00dag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** returns the element of the lits that fits the function
*/

t_list	*ft_lstfindfnc(t_list *lst, int (*f)(void *content))
{
	if (lst == NULL)
		return (lst);
	while (lst)
	{
		if (f(lst->content))
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}
