/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 20:14:18 by tidigov           #+#    #+#             */
/*   Updated: 2021/09/25 20:14:20 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>

int	ft_sqrt(int nb)
{
	int	a;

	a = 1;
	while (a * a <= nb && nb > 0)
	{
		if (a * a == nb)
			return (a);
		else if (a >= 46341)
			return (0);
		a++;
	}
	return (0);
}