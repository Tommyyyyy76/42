/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toguilmi <toguilmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 16:11:07 by toguilmi          #+#    #+#             */
/*   Updated: 2025/12/11 17:51:51 by toguilmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_struct *st)
{
	int		i;
	t_elem	tmp;

	i = 0;
	if (st->asize < 2)
		return ;
	tmp = st->a[0];
	while (i < st->asize - 1)
	{
		st->a[i] = st->a[i + 1];
		i++;
	}
	st->a[st->asize - 1] = tmp;
	write(1, "ra\n", 3);
	st->count++;
}

void	rra(t_struct *st)
{
	int		i;
	t_elem	tmp;

	i = st->asize - 1;
	if (st->asize < 2)
		return ;
	tmp = st->a[st->asize - 1];
	while (i > 0)
	{
		st->a[i] = st->a[i - 1];
		i--;
	}
	st->a[0] = tmp;
	write(1, "rra\n", 4);
	st->count++;
}

void	rr(t_struct *st)
{
	int		i;
	t_elem	tmp;

	if (st->asize < 2 || st->bsize < 2)
		return ;
	i = 0;
	tmp = st->a[0];
	while (i < st->asize - 1)
	{
		st->a[i] = st->a[i + 1];
		i++;
	}
	st->a[st->asize - 1] = tmp;
	i = 0;
	tmp = st->b[0];
	while (i < st->bsize - 1)
	{
		st->b[i] = st->b[i + 1];
		i++;
	}
	st->b[st->bsize - 1] = tmp;
	write(1, "rr\n", 3);
	st->count++;
}
