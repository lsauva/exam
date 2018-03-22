/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 18:04:44 by exam              #+#    #+#             */
/*   Updated: 2018/03/22 21:49:07 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_intlen(int nbr)
{
	int len;

	if (nbr == 0)
		return (1);
	len = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		len = ft_intlen(nbr) + 1;
	}
	else
	{
		while (nbr > 0)
		{
			len += 1;
			nbr = nbr / 10;
		}
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char	*toa;
	int		len;

	len = ft_intlen(nbr);
	toa = (char *)malloc(sizeof(char) * len + 1);
	toa[len + 1] = '\0';
	if (nbr == (-2 ^ 31) || nbr == (2^31) - 1)
	{
			return (0);
	}
	if (nbr < 0)
	{
		nbr = -nbr;
		while (len > 0)
		{
			toa[len - 1] = nbr % 10 + '0';
			nbr /= 10;
			len--;
		}
		toa[0] = '-';
	}
	else
	{
		while (len > 0)
		{
			toa[len - 1] = nbr % 10 + '0';
			nbr /= 10;
			len--;
		}
	}
	return (toa);
}

int main(int ac, const char *av[])
{
	if (ac == 2)
	{
		printf("ItoA : %s\n", ft_itoa(atoi(av[1])));
	}
	return 0;
}
