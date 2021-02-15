#include "libgeometry.h"

t_point		*new_point(double x, double y, double z)
{
	t_point* new;

	new = malloc(sizeof(t_point));
	new->x = x;
	new->y = y;
	new->z = z;
	new->n = 0;
	return (new);
}

t_point		point(double x, double y, double z)
{
	t_point new;

	new.x = x;
	new.y = y;
	new.z = z;
	new.n = 0;
	return (new);
}

void		print_point(t_point *po)
{
	printf("point:\tx: %f, y: %f, z: %f\n", po->x, po->y, po->z);
}
