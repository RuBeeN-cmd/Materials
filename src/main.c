#include "materials.h"

int main(void)
{
	t_data	data = init_data("Materials", 500, 250);
	mlx_loop(data.mlx);
	destroy_data(data);
	return (0);
}