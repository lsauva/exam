/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cycle_detector.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 16:53:59 by lsauvage          #+#    #+#             */
/*   Updated: 2018/04/11 17:14:24 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "./list.h"

int		cycle_detector(const t_list *list)
{
	const t_list *lst1;
	const t_list *lst2;

	if (list == NULL)
		return (1);
	lst1 = list;
	lst2 = list;
	while (1)
	{
		lst1 = lst1->next;
		if (lst2->next != NULL)
			lst2 = lst2->next->next;
		else
			return (0);
		if (lst1 == NULL || lst2 == NULL)
			return (0);
		if (lst1 == lst2)
			return (1);
	}
}
