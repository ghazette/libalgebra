/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   vector.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ghazette <ghazette@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/03/23 17:19:07 by ghazette     #+#   ##    ##    #+#       */
/*   Updated: 2018/03/31 17:03:18 by ghazette    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/vector.h"

void	vec3_add(t_vec3 *v1, t_vec3 *v2, t_vec3 *res)
{
	res->x = v1->x + v2->x;
	res->y = v1->y + v2->y;
	res->z = v1->z + v2->z;
}

void	vec3_sub(t_vec3 *v1, t_vec3 *v2, t_vec3 *res)
{
	res->x = v1->x - v2->x;
	res->y = v1->y - v2->y;
	res->z = v1->z - v2->z;
}

double	vec3_magnitude(t_vec3 *v)
{
	return (sqrt((v->x * v->x) + (v->y * v->y) + (v->z * v->z)));
}

void	vec3_crossproduct(t_vec3 *v1, t_vec3 *v2, t_vec3 *res)
{
	res->x = (v1->y * v2->z) - (v1->z * v2->y);
	res->y = (v1->z * v2->x) - (v1->x * v2->z);
	res->z = (v1->x * v2->y) - (v1->y * v2->x);
}

void	vec3_scale(t_vec3 *v, double multiple)
{
	if (multiple < 0)
	{
		multiple = -multiple;
		v->x /= multiple;
		v->y /= multiple;
		v->z /= multiple;
	}
	else
	{
		v->x *= multiple;
		v->y *= multiple;
		v->z *= multiple;
	}
}
