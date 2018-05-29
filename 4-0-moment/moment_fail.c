/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moment_fail.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 15:19:36 by lsauvage          #+#    #+#             */
/*   Updated: 2018/05/29 16:21:31 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*moment(unsigned int duration)
{
	char			*ret;
	unsigned int	converter[5] = {60, 3600, 86400, 2592000, 31104000};
	char			**units;
	int				i;

	if (!(units = (char **)malloc(sizeof(char *) * 5)))
	{
		return (NULL);
	}
	ret = NULL;
	i = 0;
	units[0] = "seconds";
	units[1] = "minutes";
	units[2] = "hours";
	units[3] = "days";
	units[4] = "months";
	while (i < 5)
	{
		duration /= converter[i];
		if (duration == 0 || duration < converter[i])
		{
			return (units[i]);
		}
		i++;
	}
	return (0);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("secondes : %d\n", atoi(av[1]));
		printf("duree : %s\n", moment(atoi(av[1])));
	}
	return (0);
}
