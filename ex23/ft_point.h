/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoustai <ironjedi4706@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 17:37:31 by ymoustai          #+#    #+#             */
/*   Updated: 2018/10/04 18:02:13 by ymoustai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H
# define FT_POINT_H

struct			s_point
{
	int		x;
	int		y;
};

typedef struct s_point	t_point;

void			set_point(t_point *point);

#endif
