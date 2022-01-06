/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 12:38:15 by tidigov           #+#    #+#             */
/*   Updated: 2021/10/20 17:27:18 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	tab = malloc(sizeof(int) * (max - min));
	if (min >= max)
		return (NULL);
	while (max > min)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}