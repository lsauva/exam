/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 17:00:37 by lsauvage          #+#    #+#             */
/*   Updated: 2018/03/29 17:50:31 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		brackets(char *s)
{
	int		a;
	int		p;
	int		c;
	char	last;

	a = 0;
	p = 0;
	c = 0;
	while (*s)
	{
		if (*s == '(')
			++p;
		if (*s == '{')
			++a;
		if (*s == '[')
			++c;
		if (*s == ')')
		{
			--p;
			if (last == '{' || last == '[')
				return (0);
		}
		if (*s == '}')
		{
			--a;
			if (last == '(' || last == '[')
				return (0);
		}
		if (*s == ']')
		{
			--c;
			if (last == '(' || last == '{')
				return (0);
		}
		if (*s == '(' || *s == ')' || *s == '[' 
				|| *s == ']' || *s == '{' || *s == '}')
			last = *s;
		++s;
	}
	return (a == 0 && c == 0 && p == 0);
}

int main(int ac, char **av)
{
	int i;

	i = 1;
	if (ac > 1)
	{
		while (i < ac)
		{
			if (brackets(av[i]))
				write(1, "OK\n", 3);
			else
				write(1, "Error\n", 6);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
