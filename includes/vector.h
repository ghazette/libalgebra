/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   vector.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ghazette <ghazette@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/03/23 17:20:39 by ghazette     #+#   ##    ##    #+#       */
/*   Updated: 2018/03/31 17:03:11 by ghazette    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H
# include <math.h>

typedef struct	s_vec3
{
	double x;
	double y;
	double z;

}				t_vec3;

void			vec3_normalize(t_vec3 *v);
double			vec3_length(t_vec3 *v1, t_vec3 *v2);
void			vec3_add(t_vec3 *v1, t_vec3 *v2, t_vec3 *res);
void			vec3_sub(t_vec3 *v1, t_vec3 *v2, t_vec3 *res);
double			vec3_magnitude(t_vec3 *v);
void			vec3_crossproduct(t_vec3 *v1, t_vec3 *v2, t_vec3 *res);
void			vec3_scale(t_vec3 *v, double multiple);

#endif
