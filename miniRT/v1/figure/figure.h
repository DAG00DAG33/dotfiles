#ifndef FIGURE_H
#define FIGURE_H
 
#include <math.h>
#include "../geometry/libgeometry.h"
#include "../shapes/libshapes.h"

enum type {sp = 0};



typedef	struct		s_color
{
	int			R;
	int			G;
	int			B;

}					t_color;

typedef	struct		s_figure
{
	void			*shape;
	t_point			center;
	float			radius;
	t_color			color;
	//float			reflect;
	//float			trans;
	enum type		typ;

}					t_figure;

typedef	struct		s_inter
{
	float			dis;
	t_point			point;
	t_vector		normal;
	t_color			color;
	t_figure		*figure;
}					t_inter;

typedef	struct		s_figure_function
{
	void		(*print)(void *);
	t_vector	(*normal)(void *, t_point);
	float		(*intersect)(void *, t_ray);


}					t_figure_function;

static t_figure_function g_figures[] = 
	{
		print_sphere, normal_sphere, intersect_sphere
	};

t_color		color(int R, int G, int B);
t_figure	figure(void *sp, int type, t_color col);
t_figure	*new_figure(void *sp, int type, t_color col);
void		print_figure(t_figure *fig);
t_figure	*figure_iter(t_figure **data, t_ray *ray);

//t_inter		*calc_intersec(t_figure *fig, t_ray ray, float dis, short normal);
//t_inter		*calc_one_intersec(t_figure *fig, t_ray ray, float dis, short normal);

//t_color  	calculate_light(t_inter *inter, t_light **lights);

void	print_color(t_color col);

#endif

