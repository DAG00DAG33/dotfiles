/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 19:27:43 by marvin            #+#    #+#             */
/*   Updated: 2020/08/20 19:27:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*return_string;

	i = 0;
	while (s[i])
		i++;
	if (i < start)
	{
		return_string = malloc(sizeof(char));
		*return_string = 0;
		return (return_string);
	}
	i = 0;
	while (s[start + i] && i < len)
		i++;
	if (!(return_string = malloc((i + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		return_string[i] = s[start + i];
		i++;
	}
	return_string[i] = 0;
	return (return_string);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		i[2];
	char	*ret_str;

	i[0] = 0;
	i[1] = 0;
	while (s1[i[0]])
		i[0]++;
	while (s2[i[1]])
		i[1]++;
	if (!s1 || !s2 || !(ret_str = malloc((i[0] + i[1] + 1) * sizeof(char))))
		return (NULL);
	i[0] = 0;
	i[1] = 0;
	while (s1[i[0]])
	{
		ret_str[i[0]] = s1[i[0]];
		i[0]++;
	}
	while (s2[i[1]])
	{
		ret_str[i[0] + i[1]] = s2[i[1]];
		i[1]++;
	}
	ret_str[i[0] + i[1]] = 0;
	return (ret_str);
}

char		*ft_strchr(const char *str, int c)
{
	int i;

	i = 0;
	while (str[i])
		if (str[i++] == c)
			return (char*)(str + i - 1);
	if (str[i++] == c)
		return (char*)(str + i - 1);
	return (NULL);
}

t_list		*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = malloc(sizeof(t_list));
	if (lst == NULL)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}

/*
** deletes one list element without breaking the list
*/

t_list		*ft_lstdel(t_list **lst, t_list *to_del)
{
	t_list *ne;
	t_list *l;

	l = *lst;
	if (to_del == l)
		*lst = l->next;
	while (lst && to_del)
	{
		if (l->next == to_del || to_del == l)
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
