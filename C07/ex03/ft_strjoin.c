/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 13:33:27 by tidigov           #+#    #+#             */
/*   Updated: 2021/09/27 13:33:28 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **str, char *sep)
{
	char	*end;
	int		a;
	int		b;
	int		c;
	int		taille;

	a = 0;
	c = 0;
	taille = 0;
	while (a < size)
		taille += ft_strlen(str[a++]) + ft_strlen(sep);
	end = malloc(sizeof(char) * (taille + 1));
	a = 0;
	while (a < size)
	{
		b = 0;
		while (str[a][b])
			end[c++] = str[a][b++];
		b = 0;
		while (sep[b] && a < size - 1)
			end[c++] = sep[b++];
		a++;
	}
	end[c] = '\0';
	return (end);
}
