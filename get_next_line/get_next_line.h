//#define BUFFER_SIZE 2
#include <unistd.h>
#include <stdio.h>
#include "src/libft.h"

typedef	struct		s_buffer
{
	int 	fd;
	char 	buff[BUFFER_SIZE + 1];
	int 	pos;
}			t_buffer;

int get_next_line(const int fd, char **line);
