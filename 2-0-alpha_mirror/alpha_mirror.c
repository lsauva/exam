/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 10:48:41 by exam              #+#    #+#             */
/*   Updated: 2017/12/12 17:04:29 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Pour l'effet mirroir, on soustrait le code ASCII du caractere rencontre dans
** la chaine a :	- 219 si c'est une min 'a' + 'z' = 97 + 122 = 219
**					- 155 si c'est une MAJ 'A' + 'Z' = 65 + 90 = 155
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	int i;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				ft_putchar(219 - av[1][i]);
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				ft_putchar(155 - av[1][i]);
			else
				ft_putchar(av[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
