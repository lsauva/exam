/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_z.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/01 18:13:46 by exam              #+#    #+#             */
/*   Updated: 2017/09/01 19:35:38 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void only_a(char c)
{
	write(1,&c,1);
}

int main(void)
{
	int a;

	a = 97;
	only_a(a);
	return (0);
}
