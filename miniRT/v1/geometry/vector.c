#include "libgeometry.h"

t_vector	*new_vector(float x, float y, float z)
{
	t_vector* new;

	new = malloc(sizeof(t_vector));
	new->x = x;
	new->y = y;
	new->z = z;
	return (new);
}

t_vector	vector(float x, float y, float z)
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
