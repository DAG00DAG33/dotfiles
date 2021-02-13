#include "geometry/libgeometry.h"
#include "shapes/libshapes.h"
#include <math.h>


t_vector*	norm(t_vector *vec);


int main()
{

	/*t_point po1, po2;

	po1 = point(1, 2, 3);
	po2 = point(8, 7, 6);
	t_vector v = sep_po_po(po2, po1);
	print_vector(&v);
	printf("%f\n", mod(v));
	norm(&v);
	print_vector(&v);*/

	/*t_vector vec = vector(2, 3, 4);
	t_point po = point(10, 10, 10);
	t_line l = line(po, vec);
	print_line(&l);*/

	/*t_vector v1, v2;
	v1 = vector(300, -40, 1);
	v2 = vector(-30, -77, -1000);
	printf("angle: %f", angle_vectors(v1, v2));*/

	t_sphere sp = sphere(point(7, 4, -3), 10);
	t_ray r = ray(point(-1, -10, -30), vector(1, 3, 4));
	print_sphere(&sp);
	print_ray(&r);
	float t = intersect_sphere(&sp, r);
	printf("t: %f\n", t);
	t_point po = point_plus_vec(r.po, t, r.vec);
	print_point(&po);


}
