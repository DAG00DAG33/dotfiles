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
	new.type = type;
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
	new->type = type;
	return (new);
}
