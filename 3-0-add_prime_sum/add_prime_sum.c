/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 14:16:28 by lsauvage          #+#    #+#             */
/*   Updated: 2018/01/08 14:33:57 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr(2);
		ft_putnbr(147483648);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int		ft_atoi(const char *str)
{
	int i;
	int toi;
	int neg;

	i = 0;
	toi = 0;
	neg = 1;
	while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
				|| str[i] == '\v' || str[i] == '\r' || str[i] == '\f'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = -neg;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		toi = (toi * 10) + (str[i] - '0');
		i++;
	}
	return (neg * toi);
}

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		add_prime_sum(int nb)
{
	int res;

	res = 0;
	while (nb > 1)
	{
		if (ft_is_prime(nb))
			res += nb;
		nb--;
	}
	return (res);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		ft_putnbr(add_prime_sum(ft_atoi(av[1])));
	else
		ft_putnbr(0);
	ft_putchar('\n');
	return (0);
}
