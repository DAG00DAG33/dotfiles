#ifndef LIBGEOMETRY_H
# define LIBGEOMETRY_H

#include <stdio.h>
#include <stdlib.h>

typedef	struct		s_point
{
	double			x;
	double			y;
	double			z;
	short			n;
}					t_point;

typedef	struct		s_vector
{
	double			x;
	double			y;
	double			z;
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

t_point*	new_point(double x, double y, double z);
t_point		point(double x, double y, double z);

t_vector*	new_vector(double x, double y, double z);
t_vector	vector(double x, double y, double z);

t_plane*	new_plane(t_point po, t_vector vec);
t_plane		plane(t_point po, t_vector vec);

t_ray*		new_ray(t_point po, t_vector vec);
t_ray		ray(t_point po, t_vector vec);


double		inter_pl_r(t_plane pl, t_ray r); //hecer que solo lo haga si es delante???
//t_point		inter_po_l(t_point po, t_line l);

double		dis_sq_po_po(t_point po1, t_point po2);
double		dis_po_pl(t_point po, t_plane pl);
double		dis_sq_po_r(t_point po, t_ray ray);

t_vector*	norm(t_vector *vec);
t_vector	normalize(t_vector vec);
double		mod_sq(t_vector v);
double		mod(t_vector v);
double		dot_product(t_vector vec1, t_vector vec2);
t_vector	cross_product(t_vector vec1, t_vector vec2);
double		angle_vectors(t_vector vec1, t_vector vec2);

t_vector	sep_po_po(t_point po1, t_point po2);
t_vector	sep_po_pl(t_point po, t_plane pl);
t_vector	sep_po_r(t_point po, t_ray l);

void		print_point(t_point *po);
void		print_vector(t_vector *vec);
void		print_ray(t_ray *ray);
void		print_plane(t_plane *pl);

t_point		point_plus_vec(t_point po, double t, t_vector vec);

# endif
