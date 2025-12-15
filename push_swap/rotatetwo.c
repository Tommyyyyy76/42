/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotatetwo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toguilmi <toguilmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 10:31:14 by toguilmi          #+#    #+#             */
/*   Updated: 2025/12/11 17:52:41 by toguilmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_struct *st)
{
	int		i;
	t_elem	tmp;

	if (st->bsize < 2)
		return ;
	i = 0;
	tmp = st->b[0];
	while (i < st->bsize - 1)
	{
		st->b[i] = st->b[i + 1];
		i++;
	}
	st->b[st->bsize - 1] = tmp;
	write(1, "rb\n", 3);
	st->count++;
}

void	rrb(t_struct *st)
{
	int		i;
	t_elem	tmp;

	i = st->bsize - 1;
	if (st->bsize < 2)
		return ;
	tmp = st->b[st->bsize - 1];
	while (i > 0)
	{
		st->b[i] = st->b[i - 1];
		i--;
	}
	st->b[0] = tmp;
	write(1, "rrb\n", 4);
	st->count++;
}

void	rrr(t_struct *st)
{
	int		i;
	t_elem	tmp;

	i = st->asize - 1;
	tmp = st->a[st->asize - 1];
	while (i > 0)
	{
		st->a[i] = st->a[i - 1];
		i--;
	}
	st->a[0] = tmp;
	i = st->bsize - 1;
	tmp = st->b[st->bsize - 1];
	while (i > 0)
	{
		st->b[i] = st->b[i - 1];
		i--;
	}
	st->b[0] = tmp;
	write(1, "rrr\n", 4);
	st->count++;
}
