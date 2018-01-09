/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_mate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 12:03:41 by exam              #+#    #+#             */
/*   Updated: 2018/01/09 12:20:12 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	check_mate(char **plateau, int taille)
{
	int		i;

	i = 0;
	while (i < taille)
	{
		write(1, plateau[i], taille);
		write(1, "\n", 1);
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac > 2)
	{
		check_mate(++av, ac - 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
