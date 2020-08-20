/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printlst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dag00dag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 03:50:44 by dag00dag          #+#    #+#             */
/*   Updated: 2020/07/10 03:51:13 by dag00dag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printlst(t_list *lst)
{
	while (lst->next != NULL)
	{
		ft_putstr(lst->content);
		ft_putstr("\t");
		lst = lst->next;
	}
	ft_putstr(lst->content);
	ft_putstr("\n");
}
