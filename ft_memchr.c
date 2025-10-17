/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toguilmi <toguilmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:23:53 by toguilmi          #+#    #+#             */
/*   Updated: 2025/10/14 15:42:10 by toguilmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*a;
	size_t	i;

	i = 0;
	a = (const unsigned char *)s;
	while (i < n)
	{
		if (a[i] == (unsigned char)c)
			return ((void *)(a + i));
		i++;
	}
	return (NULL);
}

// int	main()
// {
// 	char a[] = "abcdef";
// 	char *b = ft_memchr(a, 'd', 3);
// 	char c[] = "abcdef";
// 	char *d = memchr(a, 'd', 4);
// 	printf("%s", d);
// 	return (0);
// }
