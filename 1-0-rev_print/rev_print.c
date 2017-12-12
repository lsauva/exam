/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 16:29:56 by lsauvage          #+#    #+#             */
/*   Updated: 2017/12/06 17:46:44 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Assignment name  : rev_print
** Expected files   : rev_print.c
** Allowed functions: write
** ----------------------------------------------------------------------------
**
** Écrire un programme qui prend une chaîne et l'affiche en ordre inverse suivie
** d'un newline.
**
** Si le nombre d'arguments n'est pas 1, le programme affiche un newline.
**
**Exemples:
**
** $> ./rev_print "zaz" | cat -e
** zaz$
** $> ./rev_print "dub0 a POIL" | cat -e
** LIOP a 0bud$
** $> ./rev_print | cat -e
** $
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
			i++;
		while (i > 0)
		{
			ft_putchar(argv[1][i - 1]);
			i--;
		}
	}
	ft_putchar('\n');
	return (0);
}
