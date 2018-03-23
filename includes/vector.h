/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   vector.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ghazette <ghazette@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/03/23 17:20:39 by ghazette     #+#   ##    ##    #+#       */
/*   Updated: 2018/03/23 19:08:06 by ghazette    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef H_VECTOR
# define H_VECTOR
# include <math.h>

typedef struct	s_vec3
{
	double x;
	double y;
	double z;

}				t_vec3;

void	vec3_add(t_vec3 *v1, t_vec3 *v2, t_vec3 *res);
void	vec3_sub(t_vec3 *v1, t_vec3 *v2, t_vec3 *res);
double	vec3_norm(t_vec3 *v1);
double	vec3_length(t_vec3 *v1, t_vec3 *v2);

#endif