/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoustai <ironjedi4706@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 17:29:36 by ymoustai          #+#    #+#             */
/*   Updated: 2018/10/04 17:29:57 by ymoustai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*tab;

	if (min >= max)
		return (0);
	tab = (int*)malloc((max - min) * sizeof(*tab));
	if (tab == 0)
		return (0);
	i = min;
	while (i < max)
	{
		tab[i - min] = i;
		i++;
	}
	return (tab);
}
