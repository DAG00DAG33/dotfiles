#include "display.h"

typedef struct  s_data {
    void        *img;
    char        *addr;
    int         bits_per_pixel;
    int         line_length;
    int         endian;
}               t_data;

static void            my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
    char    *dst;

    dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
    *(unsigned int*)dst = color;
}

static int				calculate_color(t_color col)
{
	int color;

	if(col.R > 255 || col.G > 255 || col.B > 255)
		printf("Color fuera del rango: %d, %d, %d\n", col.R, col.G, col.B);

	color = ((col.R & 0x000000ff) << 16) | ((col.G & 0x000000ff) << 8) | ((col.B & 0x000000ff));
	return color;
}


void	draw(t_color **arr, int width, int height)
{
	void *mlx_ptr;
	void *win_ptr;

	t_data img;
	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window (mlx_ptr, width, height, "hola mundo");
	img.img = mlx_new_image(mlx_ptr, width, height);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);
	for (int x = 0; x < width; x++)
		for (int y = 0; y < height; y++)
			my_mlx_pixel_put(&img, x, y, calculate_color(arr[x][y]));
	mlx_put_image_to_window(mlx_ptr, win_ptr, img.img, 0, 0);
	mlx_loop(mlx_ptr);
}
