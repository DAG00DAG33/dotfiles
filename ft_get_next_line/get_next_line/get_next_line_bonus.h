//#define BUFFER_SIZE 2
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
//#include "src/libft.h"

typedef	struct		s_buffer
{
	int 	fd;
	char 	buff[BUFFER_SIZE + 1];
	int 	pos;
}			t_buffer;

typedef	struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

char				*ft_strchr(const char *s, int c);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strdup(const char *s);
void				ft_bzero(char *s, size_t n);
char				*ft_strjoin(char const *s1, char const *s2);
t_list				*ft_lstnew(void *content);
t_list				*ft_lstdel(t_list **lst, t_list *to_del);
t_list				*find_buff(t_list *lst, const int fd);

int					get_next_line(const int fd, char **line);
