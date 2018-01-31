/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 12:32:16 by lsauvage          #+#    #+#             */
/*   Updated: 2018/01/12 15:12:22 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_isblank(int c)
{
	return (c == ' ' || c == '\t');
}

void	rev_wstr(char *s)
{
	int		wc;
	int		i;
	int		len;
	int		a;

	wc = 0;
	i = 0;
	while (s[i])
		if (!ft_isblank(s[i++]) && (!wc || ft_isblank(s[i - 2])))
			++wc;
	while (s[--i])
	{
		if (!ft_isblank(s[i]) && wc--)
		{
			a = 0;
			len = 1;
			while (s[i - 1] && !ft_isblank(s[i - 1]) && ++len)
				--i;
			while (len-- && write(1, &s[i + a++], 1));
			(wc) ? write(1, " ", 1) : 0;
		}
	}
}

int		main(int ac, char **av)
{
	if (ac == 2 && *av[1])
		rev_wstr(av[1]);
	write(1, "\n", 1);
	return (0);
}
