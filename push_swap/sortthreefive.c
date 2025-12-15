/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortthreefive.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toguilmi <toguilmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 10:36:20 by toguilmi          #+#    #+#             */
/*   Updated: 2025/12/15 13:00:23 by toguilmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sortthree(t_struct *st)
{
	if (st->asize == 2 && st->a[0].index > st->a[1].index)
		sa(st);
	if (st->a[0].index > st->a[1].index && st->a[1].index > st->a[2].index)
	{
		sa(st);
		rra(st);
	}
	else if (st->a[0].index > st->a[1].index
		&& st->a[1].index < st->a[2].index && st->a[0].index < st->a[2].index)
		sa(st);
	else if (st->a[0].index > st->a[1].index
		&& st->a[1].index < st->a[2].index && st->a[0].index > st->a[2].index)
		ra(st);
	else if (st->a[0].index < st->a[1].index
		&& st->a[1].index > st->a[2].index && st->a[0].index > st->a[2].index)
		rra(st);
	else if (st->a[0].index < st->a[1].index
		&& st->a[1].index > st->a[2].index && st->a[0].index < st->a[2].index)
	{
		sa(st);
		ra(st);
	}
}

void	sortfive(t_struct *st)
{
	if (st->asize == 5)
	{
		while (st->asize > 3)
		{
			if (st->a[0].index == 0 || st->a[0].index == 1)
				pb(st);
			else
				ra(st);
		}
	}
	else if (st->asize == 4)
	{
		while (st->asize > 3)
		{
			if (st->a[0].index == 0)
				pb(st);
			else
				ra(st);
		}
	}
	sortthree(st);
	if (st->bsize == 2 && st->b[0].index < st->b[1].index)
		sb(st);
	while (st->bsize > 0)
		pa(st);
}

void	freeall(t_struct *st)
{
	free(st->a);
	free(st->b);
	st->a = NULL;
	st->b = NULL;
}
