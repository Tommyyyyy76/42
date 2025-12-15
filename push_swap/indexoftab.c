/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexoftab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toguilmi <toguilmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 15:13:24 by toguilmi          #+#    #+#             */
/*   Updated: 2025/12/11 17:47:51 by toguilmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	j = 0;
	while (j < size - 1)
	{
		i = 0;
		while (i < size - j - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
		j++;
	}
}

void	tabcopy(t_elem *a, int *tmp, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < size)
	{
		tmp[i] = a[j].value;
		i++;
		j++;
	}
}

void	indexoftab(t_struct *st, t_elem *el)
{
	int	i;
	int	j;
	int	*tmp;

	tmp = malloc(st->asize * sizeof(int));
	if (!tmp)
		return ;
	tabcopy(st->a, tmp, st->asize);
	sort(tmp, st->asize);
	i = 0;
	while (i < st->asize)
	{
		j = 0;
		el[i].value = st->a[i].value;
		while (j < st->asize)
		{
			if (tmp[j] == st->a[i].value)
			{
				el[i].index = j;
			}
			j++;
		}
		i++;
	}
	free(tmp);
}
