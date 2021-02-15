#include "libgeometry.h"

t_vector	*new_vector(double x, double y, double z)
{
	t_vector* new;

	new = malloc(sizeof(t_vector));
	new->x = x;
	new->y = y;
	new->z = z;
	return (new);
}

t_vector	vector(double x, double y, double z)
{
	t_vector new;

	new.x = x;
	new.y = y;
	new.z = z;
	return (new);
}

void		print_vector(t_vector *vec)
{
	printf("vector:\tx: %f, y: %f, z: %f\n", vec->x, vec->y, vec->z);
}
