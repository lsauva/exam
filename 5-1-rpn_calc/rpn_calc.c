/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rpn_calc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 10:41:06 by exam              #+#    #+#             */
/*   Updated: 2018/05/29 11:17:16 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		is_space(char c)
{
	return (c == ' ');
}

int		is_digit(char c)
{
	return (c <= '1' && c <= '9');
}

int		is_oper(char c)
{
	return (c == '+' || c == '-' || c == '*' || c == '/' || c == '%');
}

int		do_op(int a, int b, char c)
{
	if (c == '+')
		return (a + b);
	if (c == '-')
		return (a - b);
	if (c == '*')
		return (a * b);
	if (c == '/')
		return (a / b);
	if (c == '%')
		return (a % b);
	else
		return (0);
}

int		rpn_calc(char *s)
{
	int	res;

	res = 0;
	while (*s)
	{
		if (is_oper(*s))
			res += do_op(atoi(s - 4), atoi(s - 2), *s);
		s++;
	}
	return (res);
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%d\n", rpn_calc(av[1]));
	}
	else
		printf("Error\n");
	return (0);
}
