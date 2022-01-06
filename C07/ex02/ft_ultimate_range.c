/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 13:16:29 by tidigov           #+#    #+#             */
/*   Updated: 2021/09/27 13:16:30 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	max -= min;
	*range = malloc(sizeof(int) * max);
	if (!*range)
		return (-1);
	while (i < max)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max);
}
