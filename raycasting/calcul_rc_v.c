#include"../cub3d.h"

void	calcul_angle_v(t_cub3d *data, t_rt *rt, float angle, int *top)
{
	rt->ntan = -tan(angle);
	if (angle > P2 && angle < P3)
	{
		rt->v_rx = (((int)data->px >> 5) << 5);
		rt->v_ry = (data->px - rt->v_rx) * rt->ntan + data->py;
		rt->v_xo = -32;
		rt->v_yo = -rt->v_xo * rt->ntan;
	}
	if (angle < P2 || angle > P3)
	{
		rt->v_rx = (((int)data->px >> 5) << 5) + 32;
		rt->v_ry = (data->px - rt->v_rx) * rt->ntan + data->py;
		rt->v_xo = 32;
		rt->v_yo = -rt->v_xo * rt->ntan;
	}
	if (angle == 0 || angle == PI)
	{
		rt->v_rx = data->px * 32;
		rt->v_ry = data->py * 32;
		*top = 1;
	}
}

void	calcul_v_dist_bis(t_cub3d *data, t_rt *rt, float angle, int *top)
{
	(void)angle;
	if ((int)rt->v_rx >> 5 >= get_width(data->map))
		rt->v_rx = get_width(data->map) * 32;
	if ((int)rt->v_rx >> 5 <= 0)
		rt->v_rx = 0;
	if ((int)rt->v_ry >> 5 >= get_length(data->map))
		rt->v_ry = get_length(data->map) * 32;
	if ((int)rt->v_ry >> 5 <= 0)
		rt->v_rx = 0;
	*top = 1;
}

void	calcul_v_dist(t_cub3d *data, t_rt *rt, float angle)
{
	int	top;

	top = 0;
	calcul_angle_v(data, rt, angle, &top);
	while (top == 0)
	{
		if ((int)rt->v_rx >> 5 <= 0 || (int)rt->v_ry >> 5 <= 0
			|| (int)rt->v_rx >> 5 >= get_width(data->map)
			|| (int)rt->v_ry >> 5 >= get_length(data->map))
			calcul_v_dist_bis(data, rt, angle, &top);
		else if ((data->px > rt->v_rx)
			&& data->map[(int)rt->v_ry >> 5][((int)rt->v_rx >> 5) - 1] == '1')
			top = 1;
		else if (data->map[(int)rt->v_ry >> 5][((int)rt->v_rx >> 5)] == '1')
			top = 1;
		else
		{
			rt->v_rx += rt->v_xo;
			rt->v_ry += rt->v_yo;
		}
	}
	rt->v_dist = dist(data, rt->v_rx, rt->v_ry, angle);
}
