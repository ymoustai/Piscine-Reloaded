/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoustai <ironjedi4706@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 17:13:11 by ymoustai          #+#    #+#             */
/*   Updated: 2018/10/03 18:19:08 by ymoustai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;

	i = nb - 1;
	if (nb < 0 || nb > 12)
		return (0);
	else if (nb == 0)
		return (1);
	else
		while (i >= 1)
		{
			nb *= i;
			i--;
		}
	return (nb);
}
