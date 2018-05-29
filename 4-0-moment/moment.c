/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moment.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 10:02:48 by exam              #+#    #+#             */
/*   Updated: 2018/05/15 13:03:31 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *s)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

unsigned int		ft_uintlen(unsigned int nb)
{
	unsigned int	i;

	i = 0;
	if (nb == 0)
		i = 1;
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char		*ft_strcat(char *s1, char *s2)
{
	char	*res;
	int		i;
	int		j;

	if (!(res = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		res[j++] = s1[i++];
	i = 0;
	while (s2[i])
		res[j++] = s2[i++];
	res[j] = '\0';
	return (res);
}

char		*ft_utoa(unsigned int nb)
{
	int		len;
	char	*tab;

	len = ft_uintlen(nb);
	if (!(tab = malloc(sizeof(char) * len + 1)))
		return (NULL);
	tab[len] = '\0';
	while (nb != 0)
	{
		tab[--len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (tab);
}

char	*moment(unsigned int duration)
{
	if (duration == 0)
		return ("0 seconds ago.");
	else if (duration == 1)
		return ("1 second ago.");
	else if (duration < 60)
		return (ft_strcat(ft_utoa(duration), " seconds ago."));
	else if (duration < 120)
		return ("1 minute ago.");
	else if (duration < 3600)
		return (ft_strcat(ft_utoa(duration / 60), " minutes ago."));
	else if (duration < 7200)
		return ("1 hour ago.");
	else if (duration < 86400)
		return (ft_strcat(ft_utoa(duration / 3600), " hours ago."));
	else if (duration < 172800)
		return ("1 day ago.");
	else if (duration < 2592000)
		return (ft_strcat(ft_utoa(duration / 86400), " days ago."));
	else if (duration < 5184000)
		return ("1 month ago.");
	else
		return (ft_strcat(ft_utoa(duration / 2592000), " months ago."));
}
