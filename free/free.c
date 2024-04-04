#include "../cub3d.h"

void	free_double_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

void	ft_free_all(t_cub3d *data)
{
	if (data->map != NULL)
		free_double_tab(data->map);
	if (data->no != NULL)
		free(data->no);
	if (data->so != NULL)
		free(data->so);
	if (data->we != NULL)
		free(data->we);
	if (data->ea != NULL)
		free(data->ea);
	if (data->f != NULL)
		free(data->f);
	if (data->c != NULL)
		free(data->c);
}
