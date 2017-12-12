/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 11:38:02 by exam              #+#    #+#             */
/*   Updated: 2017/12/12 13:20:16 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_min(unsigned int a, unsigned int b)
{
	return (a < b ? a : b);
}

unsigned int	ft_max(unsigned int a, unsigned int b)
{
	return (a > b ? a : b);
}

unsigned int	hcf(unsigned int a, unsigned int b)
{
	unsigned int i;
	unsigned int pgcd;

	i = 1;
	pgcd = 1;
	while (i <= ft_min(a, b))
	{
		if (a % i == 0 && b % i == 0)
			pgcd = i;
		i++;
	}
	return (pgcd);
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int i;
	unsigned int ppcm;

	i = 1;
	ppcm = 1;
	if (a == 0 || b == 0)
		ppcm = 0;
	else if (a % b == 0 || b % a == 0)
		ppcm = ft_max(a, b);
	else
		ppcm = (a * b) / hcf(a, b);
	return (ppcm);
}
