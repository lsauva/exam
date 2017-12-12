/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 13:27:25 by exam              #+#    #+#             */
/*   Updated: 2017/12/12 13:54:29 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_isspace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

int		ft_isprint(char c)
{
	return (c >= ' ' && c <= '~');
}

int		ft_isgraph(char c)
{
	return (c > ' ' && c <= '~');
}

char	**ft_split(char *str)
{
	int i;
	int j;
	int k;
	char **tab;

	i = 0;
	j = 0;
	k = 0;
	tab = (char **)malloc(sizeof((char) * ft_strlen(str) + 1));
	while (str[i])
	{
		if (ft_isgraph(str[i]))
		{
			tab[j][k] = str[i];
			i++;
			k++;
		}
		if (ft_isspace(str[i]))
		{
			i++;
			j++;
			k = 0;
		}
	}
	tab[j + 1] = NULL;
	return (tab);
}
