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
	cam = camera(point(0, 1, 1), vector(1, 1, 1.3), 100);

	t_figure *data[10];
	data[0] = new_figure(new_sphere(point(3, 3, 3), 2), sp, color(100, 100, 100));
	data[1] = new_figure(new_sphere(point(3, 4, 5), 4), sp, color(0, 100, 100));
	data[2] = NULL;

	t_figure *fig;
	while (fig = figure_iter(data, NULL))
		print_figure(fig);

	main_loop(data, camera);
}
