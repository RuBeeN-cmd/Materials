#ifndef MATERIALS_H
#define MATERIALS_H

#include "mlx.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct	s_data
{
	void	*mlx;
	void	*win;
	int		width;
	int		height;
}				t_data;

// data/init.c
t_data	init_data(char title[], int width, int height);
void	destroy_data(t_data data);

// data/hook.c
int		key_hook(int keycode, t_data *data);

#endif