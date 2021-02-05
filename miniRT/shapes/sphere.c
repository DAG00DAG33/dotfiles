#include "libshapes.h"
#include <math.h>

float		dis_sqr_po_po(t_point po1, t_point po2);

t_sphere	sphere(t_point po, float r)
{
	t_sphere new;

	new.po = po;
	new.r = r;
	return (new);
}


t_sphere*	new_sphere(t_point po, float r)
{
	t_sphere *new;

	new = malloc(sizeof(t_sphere));
	new->po = po;
	new->r = r;
	return (new);
}

/*2*/
float	intersect_sphere(t_sphere *sp, t_ray ray)
{
	float d_sqr;
	float a, b;

	if((d_sqr = dis_sqr_po_r(sp.po, ray)) > sp->r * sp->r)
		return INFINITY;
	a = sqrt(dis_sqr_po_po(ray.po, sp->po) - d_sqr);
	b = sqrt(sp->r * sp->r - d_sqr);
	printf("d: %f\n",  d_sqr);
	printf("a: %f, b: %f\n", a, b);
	//check
	if (fabs(dis_sqr_po_po(point_plus_vec(ray.po, a - b, ray.vec), sp->po) - sp->r * sp->r) > 1e-5)
		return INFINITY;
	return (a - b);
}

/*4*/
t_vector	normal_shpere(t_sphere *sp, t_point po)
{
	return (normalize(sep_po_po(po, sp->po)));
}
