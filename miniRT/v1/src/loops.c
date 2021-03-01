#include "../figure/figure.h"
#include "src.h"

t_inter *calc_intersections(t_ray *ray, t_figure **data)
{
	t_inter		*inter, *new_inter;
	t_figure	*figure;

	inter->dis = INFINITY;
	inter->color = color(0, 0, 0);//BACKGROUND_COLOR
	while(figure = figure_iter(data, NULL))
		if (new_inter = calc_one_intersec(figure, *ray, inter->dis, 1))
			inter = new_inter;
	return inter;
}

t_inter *calc_one_intersec(t_figure *fig, t_ray ray, float dis, short normal)
{
	static t_inter inter;

	//ajustar a cualquier fugura, o solo esfera
	inter.dis = intersect_sphere(fig->shape, ray);
	if (inter.dis >= dis)
		return NULL;
	inter.point = point_plus_vec(ray.po, inter.dis, ray.vec);
	if (normal)
		inter.normal = normal_sphere(fig->shape, inter.point);
	inter.color = fig->color;
	return &inter;
}

void	main_loop(t_figure **data, t_camera camera)
{
	t_color **arr;
	int x, y;
	int width = 1920, height = 1080;
	t_ray *ray;

	arr = malloc(sizeof(*arr) * width);
	for (int i = 0; i < width ; i++)
		arr[i] = malloc(sizeof(*(arr[i])) * height);
	x = 0;
	y = 0;
	while (ray = ray_iter(camera, height, width))
	{
		arr[x][y] = calculate_light(calculate_intersections(*ray, data), NULL);
		x++;
		if (x == width)
		{
			x = 0;
			y++;
		}
	}
	draw(arr, width, height);
}
