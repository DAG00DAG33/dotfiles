#include "figure.h"


t_inter calculate_intersection(t_figure *fig, t_ray ray)
{
	t_inter inter;

	inter.dis = intersect_sphere(fig->shape, ray);
	if (inter.dis == INFINITY)
		return inter;
	inter.point = point_plus_vec(ray.po, inter.dis, ray.vec);
	inter.normal = normal_shpere(fig->shape, inter.point);
	inter.color = fig->color;
	return inter;
}
