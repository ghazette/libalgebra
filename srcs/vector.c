/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   vector.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ghazette <ghazette@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/03/23 17:19:07 by ghazette     #+#   ##    ##    #+#       */
/*   Updated: 2018/03/23 19:08:04 by ghazette    ###    #+. /#+    ###.fr     */
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

double	vec3_norm(t_vec3 *v1)
{
	return (sqrt((v1->x * v1->x) + (v1->y * v1->y) + (v1->z * v1->z)));
}

double	vec3_length(t_vec3 *v1, t_vec3 *v2)
{
	t_vec3 v3;

	vec3_sub(v2, v1, &v3);
	return (vec3_norm(&v3));
}