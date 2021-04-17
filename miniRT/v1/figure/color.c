#include "figure.h"


t_color		color(int R, int G, int B)
{
	t_color col;
	col.R = R;
	col.G = G;
	col.B = B;
	return (col);
}

void	print_color(t_color col)
{
	printf("R: %d,\t G: %d,\t, B: %d\t", col.R, col.G, col.B);
}
