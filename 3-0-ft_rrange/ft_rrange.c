/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 10:04:58 by exam              #+#    #+#             */
/*   Updated: 2018/01/09 11:47:42 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_abs(int nb)
{
	return (nb < 0 ? -nb : nb);
}

int		*ft_rrange(int start, int end)
{
	int		size;
	int		*tab;
	int		i;

	size = 0;
	if (start > 0 && end < 0)
		size = ft_abs(end) + ft_abs(start) + 1;
	else if (start < 0 && end < 0)
		size = ft_abs(end) - ft_abs(start) + 1;
	else
		size = ft_abs(end) - start + 1;
	tab = (int *)malloc(sizeof(size));
	i = 0;
	if (end > start)
	{
		while (end > start)
		{
			tab[i] = end;
			i++;
			end--;
		}
	}
	else if (end < start)
	{
		while (end < start)
		{
			tab[i] = end;
			i++;
			end++;
		}
	}
	tab[i] = end;
	return (tab);
}
