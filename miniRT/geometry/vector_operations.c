#include "libgeometry.h"
#include <math.h>

inline float		mod_sqr(t_vector vec)
{
	return (vec.x * vec.x + vec.y * vec.y + vec.z * vec.z);
}

/*1*/
inline float		mod(t_vector vec)
{
	return (sqrt(mod_sqr(vec)));
}

inline float		dot_product(t_vector v1, t_vector v2)
{
	return (v1.x * v2.x + v1.y * v2.y + v1.z * v2.z);
}

inline t_vector		cross_product(t_vector v1, t_vector v2)
{
	return (vector(	v1.y * v2.z - v2.y * v1.z,
					v1.z * v2.x - v1.x * v2.z,
					v1.x * v2.y - v2.x * v1.y));
}

/*4*/
t_vector*	norm(t_vector *vec)
{
	float size;

	size = mod(*vec);
	if (fabs(size - 1.0) < 1e-5)
		printf("HAY UNA NORMALIZACION EXTRA");
	vec->x /= size;
	vec->y /= size;
	vec->z /= size;
	return (vec);
}


float		angle_vectors(t_vector vec1, t_vector vec2)
{
	return (acos(dot_product(vec1, vec2) / (mod(vec1) * mod(vec2))));
}

float		angle_vectors_norm(t_vector vec1, t_vector vec2)
{
	return (acos(dot_product(vec1, vec2)));
}
