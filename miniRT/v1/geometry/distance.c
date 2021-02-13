#include "libgeometry.h"
#include <math.h>


/*0*/
float		dis_sq_po_po(t_point po1, t_point po2)
{
	return (mod_sq(vector(po2.x - po1.x, po2.y - po1.y, po2.z - po1.z)));
}

/*0*/
float		dis_po_pl(t_point po, t_plane pl)
{
	float d;

	d = - dot_product(pl.vec, *(t_vector*)&pl.po);
	printf("(d:%f)", d);
	return(fabs(dot_product(pl.vec, *(t_vector*)&po) + d));
}


/*0*/
float		dis_sq_po_r(t_point po, t_ray r)
{
	return (mod_sq(cross_product(sep_po_po(po, r.po), r.vec)));
}
