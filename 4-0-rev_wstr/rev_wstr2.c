/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 11:29:37 by lsauvage          #+#    #+#             */
/*   Updated: 2018/02/01 14:48:22 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ft_isblank(int c)
{
    return (c == ' ' || c == '\t');
}

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

void    rev_wstr(char *str)
{
    int wc;
    int i;
    int len;
    int a;

    wc = 1;
    i = 0;
    a = 0;
    len = ft_strlen(str);
    while (--len && !ft_isblank(str[len]))
        i++;
    while(a < i)
    {
        write(1, str[len], i);
        a++;
    }
}

int     main(int ac, char **av)
{
    if (ac == 2 && *av[1])
        rev_wstr(av[1]);
    write(1, "\n", 1);
    return (0);
}
