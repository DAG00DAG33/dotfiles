#include "libgeometry.h"

/*normalizar el vector quizas*/

/*4*/
t_plane		*new_plane(t_point po, t_vector vec)
{
	t_plane* new;

	new = malloc(sizeof(t_plane));
	new->po = po;
	new->vec = vec;
	norm(&(new->vec));
	return (new);
}

/*4*/
t_plane		plane(t_point po, t_vector vec)
{
	t_plane new;

	new.po = po;
	new.vec = vec;
	norm(&(new.vec));
	return (new);
}

void		print_plane(t_plane *pl)
{
	printf("plane:\n");
	printf("\tpoint:\tx: %f y: %f z: %f\n", pl->po.x, pl->po.y, pl->po.z);
	printf("\tvec:\tx: %f y: %f z: %f\n", pl->vec.x, pl->vec.y, pl->vec.z);
}
