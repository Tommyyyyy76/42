/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toguilmi <toguilmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:18:52 by toguilmi          #+#    #+#             */
/*   Updated: 2025/10/15 15:33:53 by toguilmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*destin;
	const unsigned char	*srcc;
	size_t	i;

	i = 0;
	destin = (unsigned char *)dest;
	srcc = (unsigned char *)src;
	while (i < n)
	{
		destin[i] = srcc[i];
		i++;
	}
	return (destin);
}

// int	main()
// {
// 	char	dest[5];
// 	char	*src = "abcde";
// 	ft_memcpy(dest, src, 4);
// 	printf("%s", dest);
// 	return 0;
// }
