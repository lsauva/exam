/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 12:29:43 by exam              #+#    #+#             */
/*   Updated: 2018/01/09 13:55:01 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 0)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	fprime(int nb)
{
	int	i;
	if (ft_is_prime(nb))
		printf("%d", nb);
	else
	{
		i = 2;
		while (i <= nb)
		{
			if (ft_is_prime(i))
			{
				while (nb % i == 0)
				{
					nb = nb / i;
					if (nb != 1)
						printf("%d*", i);
					else
						printf("%d", i);
				}
			}
			i++;
		}
	}
}

int		main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		fprime(atoi(av[1]));
	}
	printf("\n");
	return(0);
}
