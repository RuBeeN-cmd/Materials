#include "materials.h"

static void	set_hook(t_data *data)
{
	mlx_hook(data->win, 17, 0, mlx_loop_end, data->mlx);
	mlx_hook(data->win, 2, 1, key_hook, data);
}

t_data	init_data(char title[], int width, int height)
{
	t_data	data;

	data.width = width;
	data.height = height;
	data.mlx = mlx_init();
	data.win = mlx_new_window(data.mlx, width, height, title);
	set_hook(&data);
	return (data);
}

void	destroy_data(t_data data)
{
	mlx_destroy_window(data.mlx, data.win);
	mlx_destroy_display(data.mlx);
	free(data.mlx);
}