/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toguilmi <toguilmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 10:32:52 by toguilmi          #+#    #+#             */
/*   Updated: 2025/12/11 17:53:14 by toguilmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_struct *st)
{
	t_elem	tmp;

	if (st->asize < 2)
		return ;
	tmp = st->a[0];
	st->a[0] = st->a[1];
	st->a[1] = tmp;
	write(1, "sa\n", 3);
	st->count++;
}

void	sb(t_struct *st)
{
	t_elem	tmp;

	if (st->bsize < 2)
		return ;
	tmp = st->b[0];
	st->b[0] = st->b[1];
	st->b[1] = tmp;
	write(1, "sb\n", 3);
	st->count++;
}

void	ss(t_struct *st)
{
	t_elem	tmp;

	if (st->asize >= 2)
	{
		tmp = st->a[0];
		st->a[0] = st->a[1];
		st->a[1] = tmp;
	}
	if (st->bsize >= 2)
	{
		tmp = st->b[0];
		st->b[0] = st->b[1];
		st->b[1] = tmp;
	}
	write(1, "ss\n", 3);
	st->count++;
}
