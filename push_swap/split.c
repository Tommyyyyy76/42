/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toguilmi <toguilmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 14:05:46 by toguilmi          #+#    #+#             */
/*   Updated: 2025/12/11 18:33:49 by toguilmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count(const char *str, char c)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			j++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (j);
}

char	*lencountandmalloc(const char *str, char c)
{
	int		i;
	char	*res;
	int		j;

	j = 0;
	i = 0;
	while (str[i] && str[i] != c)
		i++;
	res = malloc(sizeof(char) * (i + 1));
	if (!res)
		return (NULL);
	while (j < i)
	{
		res[j] = str[j];
		j++;
	}
	res[j] = '\0';
	return (res);
}

void	free_tab(char **tab, int i)
{
	while (i--)
		free(tab[i]);
	free(tab);
}

char	**splittwo(char **res, char const *s, char c)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (s[j])
	{
		if (s[j] != c)
		{
			res[i] = lencountandmalloc(s + j, c);
			if (!res[i])
			{
				free_tab(res, i);
				return (NULL);
			}
			i++;
			while (s[j] && s[j] != c)
				j++;
		}
		else
			j++;
	}
	res[i] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	res = malloc(sizeof(char *) * (count(s, c) + 1));
	if (!res)
		return (NULL);
	res = splittwo(res, s, c);
	return (res);
}
