#include "src.h"
#include <math.h>


/*2*/
t_camera	camera(t_point po, t_vector vec, float fov)
{
	t_camera cam;

	cam.po = po;
	cam.vec = normalize(vec);
	cam.fov = fov;
	
	t_vector rig, forw, up;

	forw = vector( - cam.vec.x, - cam.vec.y, - cam.vec.z);
	/*if (camara mirando hacia rriba)
		rig = vector();
	else*/
	rig = normalize(cross_product(vector(0, 1, 0), forw));
	up = cross_product(forw, rig);
	cam.mat[0][0] = rig.x;
	cam.mat[0][1] = rig.y;
	cam.mat[0][2] = rig.z;
	cam.mat[1][0] = up.x;
	cam.mat[1][1] = up.y;
	cam.mat[1][2] = up.z;
	cam.mat[2][0] = forw.x;
	cam.mat[2][1] = forw.y;
	cam.mat[2][2] = forw.z;

	return cam;

}


t_vector	lookAt(t_camera cam, t_vector vec)
{
	return 	vector(	cam.mat[0][0] * vec.x + cam.mat[1][0] * vec.y + cam.mat[2][0] * vec.z,
					cam.mat[0][1] * vec.x + cam.mat[1][1] * vec.y + cam.mat[2][1] * vec.z,
					cam.mat[0][2] * vec.x + cam.mat[1][2] * vec.y + cam.mat[2][2] * vec.z
				);
}



t_ray   *ray_iter(t_camera camera, int height, int width)
{
  	static int x = -1;
	static int y = 0;
	int dis;
	t_vector vec;
	static t_ray new_ray;

	x++;
	if(x == width)
	{
		x = 0;
		y++;
	}
	if (y == height)
		return NULL;
	dis = width / (2 * tan((camera.fov * 3.1492) / 360));
	vec = normalize(vector(x - width / 2, y - height / 2, - dis)); //quizas se puede quitar  el normalize
	new_ray = ray(camera.po, lookAt(camera, vec));
	if (x == 0 && y == 0)
		print_ray(&new_ray);
		//print_vector(&vec);
	if (x == 0 && y == height-1)
		print_ray(&new_ray);
		//print_vector(&vec);
	if (x == width-1 && y == 0)
		print_ray(&new_ray);
		//print_vector(&vec);
	if (x == width-1 && y == height-1)
		print_ray(&new_ray);
		//print_vector(&vec);
	if (x == (width/2) && y == (height/2))
		print_ray(&new_ray);
		//print_vector(&vec);
	return (&new_ray);
}
