#ifndef SHAPES_H
#define SHAPES_H

#include "../geometry/libgeometry.h"

typedef	struct		s_shpere
{
	t_point			po;
	float			r;
}					t_sphere;

typedef	struct		s_triangle
{
	t_point			p0;
	t_point			p1;
	t_point			p2;
}					t_triangle;


t_sphere	sphere(t_point po, float r);
t_sphere*	new_sphere(t_point po, float r);
float		intersect_sphere(t_sphere *sp, t_ray ray);
t_vector	normal_sphere(t_sphere *sp, t_point po);
void		print_sphere(t_sphere *sp);

#endif
