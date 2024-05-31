/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   object.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvoicu <fvoicu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 01:54:16 by fvoicu            #+#    #+#             */
/*   Updated: 2024/05/31 18:18:08 by fvoicu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OBJECT_H
# define OBJECT_H
# include "vec3.h" 

typedef enum e_obj_type
{
	SPHERE,
	PLANE,
	CYLINDER
}	t_obj_type;

typedef struct s_sphere
{
	t_vec	center;
	float	diameter;
	t_vec	color;
}	t_sphere;

typedef struct s_plane
{
	t_vec	point;
	t_vec	normal;
	t_vec	color;
}	t_plane;

typedef struct s_cylinder
{
	t_vec	center;
	t_vec	axis;
	float	diameter;
	float	height;
	t_vec	color;
}	t_cylinder;

typedef union u_obj_data
{
	t_sphere	sphere;
	t_plane		plane;
	t_cylinder	cylinder;
}	t_obj_data;

typedef struct s_object
{
	t_obj_type	type;
	t_obj_data	data;
}	t_object;

typedef void	(*t_init_funcs)(t_object *, void *);

void	init_sphere(t_object *object, void *params);
void	init_plane(t_object *object, void *params);
void	init_cylinder(t_object *object, void *params);

typedef struct s_init_array
{
	t_init_funcs	func[3];
}	t_init_array;

void	init_object(t_obj_type type, t_object *obj, void *params, \
					t_init_array *init_array);

#endif