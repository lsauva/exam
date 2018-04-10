/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 16:10:20 by lsauvage          #+#    #+#             */
/*   Updated: 2018/02/12 16:23:53 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *list;

	list = begin_list;
	while (list)
	{
		(*f)(list->data);
		list = list->next;
	}
}
