#include "geometry/libgeometry.h"
//#include "shapes/libshapes.h"
#include <math.h>
#include "display/display.h"
#include "src/src.h"


t_vector*	norm(t_vector *vec);


int main()
{


	/*t_color **arr;
	int width = 1920, height = 1080;
	arr = malloc(sizeof(*arr) * width);
	for (int i = 0; i < width ; i++)
		arr[i] = malloc(sizeof(*(arr[i])) * height);

	for (int x = 0 ; x < width; x++)
		for (int y = 0; y < height; y++)
			arr[x][y] = color (40, 40, 40);
	for (int x = 40 ; x < 400; x++)
		for (int y = 700; y < 900; y++)
			arr[x][y] = color (200, 0, 0);
	draw(arr, width, height);*/


	/*t_ray *ray;
	t_camera cam;
	cam = camera(point(3, 3, 3), vector(-1, 3, 4), 100);

	while ((ray = ray_iter(cam, 1080, 1920)))
		;//print_ray(ray);
	*/

	t_camera cam;
	cam = camera(point(0, 1, 1), vector(1.3, 1, 1.3), 100);

	t_figure *data[10];
	data[0] = new_figure(new_sphere(point(300, 300, 300), 200), sp, color(100, 100, 100));
	data[1] = new_figure(new_sphere(point(100, 400, 500), 100), sp, color(0, 100, 100));
	data[2] = new_figure(new_sphere(point(1, 6, 2), 1), sp, color(100, 0, 100));
	data[3] = new_figure(new_sphere(point(9, 2, 5), 1.3), sp, color(0, 100, 0));
	data[4] = new_figure(new_sphere(point(7, 4, 5), 0.3), sp, color(100, 100, 0));
	data[5] = NULL;

	t_light	*lights[2];
	lights[0] = new_light(point(10, 10, 10), 1);
	lights[1] = NULL;

	t_figure *fig;
	while (fig = figure_iter(data, NULL))
		print_figure(fig);

	main_loop(data, cam, lights);
}
