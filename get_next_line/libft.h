/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dag00dag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 23:20:51 by dag00dag          #+#    #+#             */
/*   Updated: 2020/07/10 23:29:52 by dag00dag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

typedef	struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/*
** Part 2 functions
*/

char				*ft_substr(char const *s, unsigned int start, size_t len);

char				*ft_strjoin(char const *s1, char const *s2);

char				*ft_strtrim(char const *s1, char const *set);

char				**ft_split(char const *s, char c);

char				*ft_itoa(int n);

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void				ft_putchar_fd(char c, int fd);

void				ft_putstr_fd(char *s, int fd);

void				ft_putendl_fd(char *s, int fd);

void				ft_putnbr_fd(int n, int fd);

/*
** Part 1 functions
*/

void				*ft_memset(char *s, int c, size_t n);

void				ft_bzero(char *s, size_t n);

void				*ft_memcpy(void *dest, const void *src, size_t n);

void				*ft_memccpy(void *dest, const void *src, int c, size_t n);

void				*ft_memmove(char *dest, const char *src, int n);

void				*ft_memchr(const void *s, int c, size_t n);

int					ft_memcmp(unsigned const char *s1,
	unsigned const char *s2, size_t n);

size_t				ft_strlen(const char *s);

char				*ft_strchr(const char *s, int c);

char				*ft_strrchr(const char *s, int c);

int					ft_strncmp(unsigned const char *s1,
	unsigned const char *s2, size_t n);

int					ft_strcmp(const char *s1, const char *s2);

int					ft_atoi(const char *nptr);

int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
int					ft_isspace(int c);/////////

int					ft_toupper(int c);

int					ft_tolower(int c);

void				*ft_calloc(size_t nmemb, size_t size);

char				*ft_strdup(const char *s);

/*
** Bonus Part
*/

t_list				*ft_lstnew(void *content);

void				ft_lstadd_front(t_list **lst, t_list *new);

int					ft_lstsize(t_list *lst);

t_list				*ft_lstlast(t_list *lst);

void				ft_lstadd_back(t_list **lst, t_list *new);

void				ft_lstdelone(t_list *lst, void (*del)(void*));

void				ft_lstclear(t_list **lst, void (*del)(void*));

void				ft_lstiter(t_list *lst, void (*f)(void *));

t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
	void (*del)(void *));

/*
** Extra
*/

void				ft_printlst(t_list *lst);

void				ft_putstr(char *str);

void				ft_putnbr(int nb);

char				*ft_strstr(char *h, char *n);

#endif
