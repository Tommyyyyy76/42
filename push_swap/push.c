/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pusha.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toguilmi <toguilmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 16:34:51 by toguilmi          #+#    #+#             */
/*   Updated: 2025/12/09 10:30:19 by toguilmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_struct *st)
{
	int	i;

	i = st->bsize;
	if (st->asize == 0)
		return ;
	while (i > 0)
	{
		st->b[i] = st->b[i - 1];
		i--;
	}
	st->b[0] = st->a[0];
	i = 0;
	while (i < st->asize - 1)
	{
		st->a[i] = st->a[i + 1];
		i++;
	}
	(st->asize)--;
	(st->bsize)++;
	st->count++;
	write(1, "pb\n", 3);
}

void	pa(t_struct *st)
{
	int	i;

	i = st->asize;
	if (st->bsize == 0)
		return ;
	while (i > 0)
	{
		st->a[i] = st->a[i - 1];
		i--;
	}
	st->a[0] = st->b[0];
	i = 0;
	while (i < st->bsize - 1)
	{
		st->b[i] = st->b[i + 1];
		i++;
	}
	(st->asize)++;
	(st->bsize)--;
	st->count++;
	write(1, "pa\n", 3);
}
