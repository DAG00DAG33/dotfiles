#include "libshapes.h"
#include "../geometry/libgeometry.h"
#include "../figure/figure.h"
#include <math.h>

double		dis_sq_po_po(t_point po1, t_point po2);

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
double	intersect_sphere(t_sphere *sp, t_ray ray)
{
	float d_sq;
	float a, b;

	if((d_sq = dis_sq_po_r(sp->po, ray)) > (sp->r * sp->r))
		return INFINITY;
	//printf("d_sq: %f, r_sq:%f\n",  d_sq, sp->r * sp->r);
	a = sqrt(dis_sq_po_po(ray.po, sp->po) - d_sq);
	b = sqrt(sp->r * sp->r - d_sq);
	//printf("a: %f, b: %f, a - b:%f\n", a, b, a - b);
	//check
	//if (fabs(dis_sq_po_po(point_plus_vec(ray.po, a - b, ray.vec), sp->po) - sp->r * sp->r) > 1e-5)
	if (dis_sq_po_po(point_plus_vec(ray.po, a - b, ray.vec), sp->po) > sp->r * sp->r)
	if(dot_product(ray.vec, sep_po_po(sp->po, ray.po)) < 0)
		return INFINITY;
	return (a - b);
}

/*4*/
t_vector	normal_sphere(t_sphere *sp, t_point po)
{
	return (normalize(sep_po_po(po, sp->po)));
}

void		print_sphere(t_sphere *sp)
{
	printf("Sphere: \n");;
	printf("\tradius: %f\n\t", sp->r);
	print_point(&(sp->po));


}
