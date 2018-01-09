/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 16:43:01 by exam              #+#    #+#             */
/*   Updated: 2017/09/22 16:58:11 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int		i;
	int		size;
	int		*tab;

	i = 0;
	size = end - start;
	tab = (int*)malloc(sizeof(*tab) * size + 1);
	if (size <= 0)
		tab = 0;
	while (start <= end)
	{
		tab[i] = start;
		i++;
		start++;
	}
	return (tab);
}
