#include "libgeometry.h"

/*normalizar el vector quizas*/

/*4*/
t_ray		*new_ray(t_point po, t_vector vec)
{
	t_ray* new;

	new = malloc(sizeof(t_ray));
	new->po = po;
	new->vec = vec;
	norm(&(new->vec));
	return (new);
}

/*4*/
t_ray		ray(t_point po, t_vector vec)
{
	t_ray new;

	new.po = po;
	new.vec = vec;
	norm(&(new.vec));
	return (new);
}

void		print_ray(t_ray *r)
{
	printf("line:\n");
	printf("\tpoint:\tx: %f y: %f z: %f\n", r->po.x, r->po.y, r->po.z);
	printf("\tvec:\tx: %f y: %f z: %f\n", r->vec.x, r->vec.y, r->vec.z);
}
