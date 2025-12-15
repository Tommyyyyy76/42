/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toguilmi <toguilmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 17:34:44 by toguilmi          #+#    #+#             */
/*   Updated: 2025/12/15 13:01:14 by toguilmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	notinteger(char *s)
{
	int	i;

	i = 0;
	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		i++;
	if (s[i] == '-' || s[i] == '+')
		i++;
	if (!s[i])
		return (1);
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

int	doubleinteger(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	upintmaxandmin(const char *nptr)
{
	int			i;
	int			sign;
	long long	result;

	i = 0;
	sign = 1;
	result = 0;
	if (nptr[i] == '-')
	{
		sign = -sign;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		if (sign == 1 && result > INT_MAX)
			return (1);
		if (sign == -1 && result < INT_MIN)
			return (1);
		i++;
	}
	return (0);
}

int	issorted(int argc, char **argv)
{
	int	i;

	i = 0;
	while (i < argc - 1)
	{
		if (ft_atoi(argv[i]) > ft_atoi(argv[i + 1]))
			return (0);
		i++;
	}
	return (1);
}

int	forerror(int argc, char **argv)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		if (notinteger(argv[i]) || upintmaxandmin(argv[i]))
		{
			return (1);
		}
		i++;
	}
	if (doubleinteger(argc, argv))
		return (1);
	if (issorted(argc, argv))
		return (1);
	return (0);
}
