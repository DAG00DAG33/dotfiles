#ifndef SRC_H
#define SRC_H


#include "../geometry/libgeometry.h"
#include "../figure/figure.h"

typedef	struct		s_camera
{
	t_point			po;
	t_vector		vec;
	double			fov;
	double 			mat[3][3];
}					t_camera;

typedef struct		s_light

{
	t_point			po;
	float			l;
}					t_light;


t_camera	camera(t_point po, t_vector vec, float fov);
t_vector	lookAt(t_camera cam, t_vector vec);
t_ray  		*ray_iter(t_camera camera, int height, int width);


t_inter calc_intersections(t_ray ray, t_figure **data);
t_inter calc_one_intersec(t_figure *fig, t_ray ray, float dis, short normal);
t_color   calculate_light(t_inter inter, t_light **lights);

t_light	light(t_point po, float l);
t_light	*new_light(t_point po, float l);

#endif
