#include "geometry/libgeometry.h"
//#include "shapes/libshapes.h"
#include <math.h>

#include  <mlx.h>

t_vector*	norm(t_vector *vec);

typedef struct  s_data {
    void        *img;
    char        *addr;
    int         bits_per_pixel;
    int         line_length;
    int         endian;
}               t_data;

void            my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
    char    *dst;

    dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
    *(unsigned int*)dst = color;
}

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

	/*t_sphere sp = sphere(point(7, 4, -3), 10);
	t_ray r = ray(point(-1, -10, -30), vector(1, 3, 4));
	print_ray(&r);
	float t = intersect_sphere(sp, r);
	printf("t: %f\n", t);
	t_point po = point_plus_vec(r.po, t, r.vec);
	print_point(&po);*/


	void *mlx_ptr;
	void *win_ptr;


	int color = 0x00ffffff;
	t_data img;
	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window (mlx_ptr, 1920, 1080, "hola mundo");
	img.img = mlx_new_image(mlx_ptr, 1920, 1080);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);
	for (int x = 20; x < 500; x++)
		for (int y = 30; y < 400; y++)
			my_mlx_pixel_put(&img, x, y, color);
	mlx_put_image_to_window(mlx_ptr, win_ptr, img.img, 0, 0);
	mlx_loop(mlx_ptr);



}
