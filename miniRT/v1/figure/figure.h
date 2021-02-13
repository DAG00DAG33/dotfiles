#ifndef FIGURE_H
#define FIGURE_H
 
#include <math.h>

typedef	struct		s_color
{
	float			R;
	float			G;
	float			B;

}					t_color;

typedef	struct		s_figure
{
	t_point			center;
	float			radius;
	t_color			color;
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

float	calculate_intersection(t_figure *fig, t_ray ray)

#endif

