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


	t_ray *ray;
	t_camera cam;
	cam = camera(point(3, 3, 3), vector(-1, 3, 4), 100);

	while ((ray = ray_iter(cam, 1080, 1920)))
		;//print_ray(ray);
}
