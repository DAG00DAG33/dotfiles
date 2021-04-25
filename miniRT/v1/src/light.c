#include "src.h"

t_color   calculate_light(t_inter inter, t_light **lights)
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
	//float f = dot_product(inter->normal, normalize(sep_po_po(point(10, 10, 10), inter->point)));
	float f = 1;

	if (inter.figure)
	{
		inter.normal = normal_sphere(inter.figure->shape, inter.point);
		f = dot_product(inter.normal, normalize(sep_po_po(lights[0]->po, inter.point)));
		if (f < 0.2)
			f = 0.2;
	}
	return color(inter.color.R * f, inter.color.G * f, inter.color.B * f);
}

t_light	light(t_point po, float l)
{
	t_light li;

	li.po = po;
	li.l = l;
	return(li);
}

t_light	*new_light(t_point po, float l)
{
	t_light *li;

	li = (t_light *)malloc(sizeof(t_light));
	li->po = po;
	li->l = l;
	return(li);
}
