#ifndef LIBGEOMETRY_H
# define LIBGEOMETRY_H

#include <stdio.h>
#include <stdlib.h>

typedef	struct		s_point
{
	float			x;
	float			y;
	float			z;
	short			n;
}					t_point;

typedef	struct		s_vector
{
	float			x;
	float			y;
	float			z;
}					t_vector;


typedef	struct		s_ray
{
	t_point			po;
	t_vector		vec;
}					t_ray;

typedef	struct		s_plane
{
	t_point			po;
	t_vector		vec;
}					t_plane;


t_point*	new_point(float x, float y, float z);
t_point		point(float x, float y, float z);

t_vector*	new_vector(float x, float y, float z);
t_vector	vector(float x, float y, float z);

t_plane*	new_plane(t_point po, t_vector vec);
t_plane		plane(t_point po, t_vector vec);

t_ray*		new_ray(t_point po, t_vector vec);
t_ray		ray(t_point po, t_vector vec);


float		inter_pl_r(t_plane pl, t_ray r); //hecer que solo lo haga si es delante???
//t_point		inter_po_l(t_point po, t_line l);

float		dis_sqr_po_po(t_point po1, t_point po2);
float		dis_po_pl(t_point po, t_plane pl);
float		dis_sqr_po_r(t_point po, t_ray ray);

t_vector*	norm(t_vector *vec);
float		mod_sqr(t_vector v);
float		mod(t_vector v);
float		dot_product(t_vector vec1, t_vector vec2);
t_vector	cross_product(t_vector vec1, t_vector vec2);
float		angle_vectors(t_vector vec1, t_vector vec2);

t_vector	sep_po_po(t_point po1, t_point po2);
t_vector	sep_po_pl(t_point po, t_plane pl);
t_vector	sep_po_r(t_point po, t_ray l);

void		print_point(t_point *po);
void		print_vector(t_vector *vec);
void		print_ray(t_ray *ray);
void		print_plane(t_plane *pl);

t_point		point_plus_vec(t_point po, float t, t_vector vec);

# endif
