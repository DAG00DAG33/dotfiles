t_color   calculate_light(t_inter *inter, t_light **lights)
{
	int i;
	t_color col;

	/*col = color(amx.R, amb.G, amb.B);
	i = 0;
	while(lights[i])
	{
		while(figure = figure_iter(data, ray))
			if (calculate_intersec(figure, ray(inter.po, ), dis(lighs[i].po, inter.po), 0))//
				continue x2;
		col = color(col.R + lights[i].R, col.G + lights[i].G, col.B + lights[i].B);
	}
	return gcolor(inter.color.R*col.R, ...);*/
	return inter->color;
}
