#include "libgeometry.h"


/*0*/
t_vector	sep_po_po(t_point po2, t_point po1)
{
	return (vector(po2.x - po1.x, po2.y - po1.y, po2.z - po1.z));
}

/*0*/
t_vector	sep_po_pl(t_point po, t_plane pl)
{
	double d, dist;

	d = - dot_product(pl.vec, *(t_vector*)&pl.po);
	dist = (dot_product(pl.vec, *(t_vector*)&po) + d);
	return (vector(pl.vec.x * dist, pl.vec.y * dist, pl.vec.z * dist));
}

/*0*/
t_vector	sep_po_r(t_point po, t_ray r)
{

	return cross_product(r.vec, cross_product(sep_po_po(po, r.po), r.vec));
}
