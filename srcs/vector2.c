/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   vector2.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ghazette <ghazette@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/03/31 17:01:33 by ghazette     #+#   ##    ##    #+#       */
/*   Updated: 2018/03/31 17:01:53 by ghazette    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/vector.h"

void	vec3_normalize(t_vec3 *v)
{
	double mag;

	mag = vec3_magnitude(v);
	v->x /= mag;
	v->y /= mag;
	v->z /= mag;
}

double	vec3_length(t_vec3 *v1, t_vec3 *v2)
{
	t_vec3 v3;

	vec3_sub(v2, v1, &v3);
	return (vec3_magnitude(&v3));
}
