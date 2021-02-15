#include "figure.h"


/*t_inter calculate_intersection(t_figure *fig, t_ray ray)
{
	t_inter inter;

	inter.dis = intersect_sphere(fig->shape, ray);
	if (inter.dis == INFINITY)
		return inter;
	inter.point = point_plus_vec(ray.po, inter.dis, ray.vec);
	inter.normal = normal_sphere(fig->shape, inter.point);
	inter.color = fig->color;
	return inter;
}*/

t_inter calc_intersec(t_figure *fig, t_ray ray, float dis, short normal)
{
		t_inter inter;

		inter.dis = intersect_sphere(fig->shape, ray);
		if (inter.dis >= dis)
			return (*(t_inter *)0);
		inter.point = point_plus_vec(ray.po, inter.dis, ray.vec);
		if (normal)
			inter.normal = normal_sphere(fig->shape, inter.point);
		inter.color = fig->color;
		return inter;
}
