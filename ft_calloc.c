/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toguilmi <toguilmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:04:39 by toguilmi          #+#    #+#             */
/*   Updated: 2025/10/17 14:06:20 by toguilmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void ft_bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char	*a;

	i = 0;
	a = (unsigned char *)s;
	while (i < n)
	{
		a[i] = 0;
		i++;
	}
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;
	size_t	len;

	len = nmemb * size;
	tab = malloc(len);
	if (!tab)
		return (NULL);
	ft_bzero(tab, len);
	return (tab);
}

// int	main()
// {
// 	int	i = 0;
// 	int	nb = 5;
// 	int	*tab = calloc(nb, sizeof(int));
// 	while(i < nb)
// 	{
// 		printf("%d\n", tab[i]);
// 		i++;
// 	}
// 	free(tab);
// 	return 0;
// }
