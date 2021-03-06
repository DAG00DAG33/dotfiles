#include "libgeometry.h"
#include <math.h>

double		inter_pl_r(t_plane pl, t_ray r)
{
	double t;
	double d;

	if (dot_product(pl.vec, r.vec) < 1e-5)
	{
		return INFINITY;
	}
	d = - dot_product(pl.vec, *(t_vector*)&pl.po);
	t = -(dot_product(pl.vec, *(t_vector*)&(r.po)) + d)/dot_product(pl.vec, r.vec);
	return (t);
}

t_point		point_plus_vec(t_point po, double t, t_vector vec)
{
	return point(po.x + t * vec.x, po.y + t * vec.y, po.z + t * vec.z);
}
