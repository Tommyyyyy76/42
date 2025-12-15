/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radixsort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toguilmi <toguilmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 13:26:33 by toguilmi          #+#    #+#             */
/*   Updated: 2025/12/15 11:39:29 by toguilmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max_bits(t_struct *st)
{
	int	bits;
	int	maxindex;

	bits = 0;
	maxindex = st->asize - 1;
	while ((maxindex >> bits) != 0)
		bits++;
	return (bits);
}

void	radixsort(t_struct *st)
{
	int	i;
	int	size;
	int	bitsmax;
	int	j;

	i = 0;
	bitsmax = max_bits(st);
	while (i < bitsmax)
	{
		size = st->asize;
		j = 0;
		while (j < size)
		{
			if ((st->a[0].index >> i) & 1)
				ra(st);
			else
				pb(st);
			j++;
		}
		i++;
		while (st->bsize > 0)
			pa(st);
	}
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
		{
			sign = -sign;
		}
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}
