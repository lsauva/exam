/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 15:16:46 by lsauvage          #+#    #+#             */
/*   Updated: 2018/01/12 17:08:25 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_open_brackets(int c)
{
	return (c == '(' || c == '[' || c == '{');
}

int		is_close_brackets(int c)
{
	return (c == ')' || c == ']' || c == '}');
}

int		brackets(char *str, int c)
{
	int	i;
	int	open;
	int	close;

	i = 0;
	open = 0;
	close = 0;
	while (str[i])
	{
		if (is_open_brackets(str[i]))
			open++;
		else if (is_close_brackets(str[i]))
			close++;
		i++;
	}
	if (open != close)
		return(0);
	return (1);
}

int		main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac > 1)
	{
		while (++i < ac)
			brackets(av[i], 0) ? write(1, "OK\n", 3) : write(1, "Error\n", 6);
	}
	else
		write(1, "\n", 1);
	return (0);
}
