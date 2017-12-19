/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 16:03:10 by lsauvage          #+#    #+#             */
/*   Updated: 2017/12/18 17:44:20 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int		ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int		ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + 32);
	return (c);
}

int		ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - 32);
	return (c);
}

int		ft_isspace(int c)
{
	return (c == ' ' || c == '\t');
}

char	*rstr_cap(char *str)
{
	int		i;
	int		fin;

	i = 0;
	fin = 0;
	while (str[fin])
		fin++;
	while (i < fin)
	{
		if (ft_isspace(str[i + 1]) || str[i + 1] == '\0')
			str[i] = ft_toupper(str[i]);
		else
			str[i] = ft_tolower(str[i]);
		i++;
	}
	return (str);
}

int		main(int ac, char **av)
{
	int		i;

	i = 1;
	if (ac < 2)
		ft_putchar('\n');
	while (i < ac)
	{
		ft_putstr(rstr_cap(av[i]));
		i++;
		ft_putchar('\n');
	}
	return (0);
}
