/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dag00dag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 04:03:27 by dag00dag          #+#    #+#             */
/*   Updated: 2020/07/20 23:48:10 by dag00dag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Adds element list to the end of the list
*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if ((*lst) == NULL)
		(*lst) = new;
	else
		ft_lstlast(*lst)->next = new;
}
