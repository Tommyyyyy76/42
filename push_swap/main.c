/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toguilmi <toguilmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:56:20 by toguilmi          #+#    #+#             */
/*   Updated: 2025/12/15 15:05:37 by toguilmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	countsplit(int argc, char **argv)
{
	int		count;
	int		i;
	int		j;
	char	**token;

	i = 1;
	count = 0;
	while (i < argc)
	{
		token = ft_split(argv[i], ' ');
		if (!token)
			return (-1);
		j = 0;
		while (token[j])
		{
			count++;
			j++;
		}
		free_tab(token, j);
		i++;
	}
	return (count);
}

void	valuefora(t_struct *st, char **argv)
{
	int	i;

	i = 0;
	while (i < st->asize)
	{
		st->a[i].value = ft_atoi(argv[i]);
		st->a[i].index = 0;
		i++;
	}
}

char	**forargc(int argc, char **argv, int *count)
{
	char	**argsplit;

	argsplit = NULL;
	if (argc < 2)
		return (NULL);
	if (argc == 2)
	{
		*count = countsplit(argc, argv);
		argsplit = ft_split(argv[1], ' ');
		if (!argsplit || forerror(*count, argsplit))
		{
			free_tab(argsplit, *count);
			return (NULL);
		}
	}
	else
	{
		*count = argc - 1;
		if (forerror(*count, argv + 1))
			return (NULL);
		argsplit = argv + 1;
	}
	return (argsplit);
}

void	forsort(t_struct st)
{
	indexoftab(&st, st.a);
	if (st.asize <= 3)
		sortthree(&st);
	else if (st.asize <= 5)
		sortfive(&st);
	else
		radixsort(&st);
}

int	main(int argc, char **argv)
{
	t_struct	st;
	char		**argsplit;

	if (argc == 2 && argv[1][0] == '\0')
	{
		write(2, "Error\n", 6);
		return (1);
	}
	argsplit = forargc(argc, argv, &st.asize);
	if (!argsplit)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	st.bsize = 0;
	st.count = 0;
	st.a = malloc(st.asize * sizeof(t_elem));
	st.b = malloc(st.asize * sizeof(t_elem));
	if (!st.a || !st.b)
		return (1);
	valuefora(&st, argsplit);
	forsort(st);
	freeall(&st);
	if (argc == 2)
		free_tab(argsplit, st.asize);
	return (0);
}
