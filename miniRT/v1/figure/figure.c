#include "figure.h"

t_figure	figure(void *sp, int type, t_color col)
{
	t_figure new;
	//calc center bien !!!
	//calc radius bien !!!
	new.color = col;
	new.shape= sp;
	new.center = ((t_sphere *)sp)->po;
	new.radius = ((t_sphere *)sp)->r;
	new.typ = type;
	return (new);
}

t_figure	*new_figure(void *sp, int type, t_color col)
{
	t_figure *new;
	new = malloc(sizeof(*new));
	//calc center bien !!!
	//calc radius bien !!!
	new->color = col;
	new->shape= sp;
	new->center = ((t_sphere *)sp)->po;
	new->radius = ((t_sphere *)sp)->r;
	new->typ = type;
	return (new);
}


void		print_figure(t_figure *fig)
{
	printf("figure: type(%d) --> ", fig->typ);
	(g_figures[fig->typ].print)(fig->shape);
	printf("\tcolor: %d, %d, %d\n", fig->color.R, fig->color.G, fig->color.B);
}

t_figure	*figure_iter(t_figure **data, t_ray *ray)
{
	static i = 0;

	//printf("\n%d\n", i);
	if (data[i] == 0)
	{
		i = 0;
		return NULL;
	}
	else
		return data[i++];
	//return (NULL);
}

