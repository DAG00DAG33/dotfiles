//#define BUFFER_SIZE 2
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef	struct		s_buffer
{
	char 	buff[BUFFER_SIZE + 1];
	int 	pos;
}			t_buffer;

char				*ft_strchr(const char *s, int c);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strdup(const char *s);
void				ft_bzero(char *s, size_t n);
char				*ft_strjoin(char const *s1, char const *s2);


int get_next_line(const int fd, char **line);
