#ifndef FIGURE_H
#define FIGURE_H
 
#include <math.h>
#include "../geometry/libgeometry.h"
#include "../shapes/libshapes.h"

typedef	struct		s_color
{
	int			R;
	int			G;
	int			B;

}					t_color;

typedef	struct		s_figure
{
	t_point			center;
	float			radius;
	t_color			color;
	int				type;
	//float			reflect;
	//float			trans;
	//kdfjkjdk type
	void			*shape;

}					t_figure;

typedef	struct		s_inter
{
	float			dis;
	t_point			point;
	t_vector		normal;
	t_color			color;
}					t_inter;

t_color		color(int R, int G, int B);
t_figure	figure(void *sp, int type, t_color col);
t_figure	*new_figure(void *sp, int type, t_color col);
t_inter		calc_intersec(t_figure *fig, t_ray ray, float dis, short normal);

#endif

