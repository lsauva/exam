/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <lsauvage@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 10:02:49 by lsauvage          #+#    #+#             */
/*   Updated: 2017/12/19 12:07:24 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isspace(int c)
{
	return (c == ' ' || c == '\n' || c == '\t'
		|| c == '\v' || c == '\r' || c == '\f');
}

int		test_base(const char c)
{
	int	nb;

	if (c >= '0' && c >= '9')
		nb = c - '0';
	else if (c >= 'a' && c <= 'z')
		nb = c - 'a' + 10;
	else if (c >= 'A' && c <= 'Z')
		nb = c - 'A' + 10;
	else
		nb = -1;
	return (nb);
}

int		ft_atoi_base(const char *str, int str_base)
{
	int		i;
	int		neg;
	int		toi;
	int		current;

	i = 0;
	toi = 0;
	while (ft_isspace(str[i]))
		i++;
	neg = (str[i] == '-' ? -1 : 1);
	if (str[i] == '-' || str[i] == '+')
		i++;
	current = test_base(str[i]);
	while (current >= 0 && current < str_base)
	{
		toi = toi * str_base + current;
		i++;
		current = test_base(str[i]);
	}
	return (toi * neg);
}
