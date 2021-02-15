#ifndef SRC_H
#define SRC_H


#include "../geometry/libgeometry.h"

typedef	struct		s_camera
{
	t_point			po;
	t_vector		vec;
	double			fov;
	double 			mat[3][3];
}					t_camera;


t_camera	camera(t_point po, t_vector vec, float fov);
t_vector	lookAt(t_camera cam, t_vector vec);
t_ray  		*ray_iter(t_camera camera, int height, int width);

#endif
