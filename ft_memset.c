/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toguilmi <toguilmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:40:20 by toguilmi          #+#    #+#             */
/*   Updated: 2025/10/14 14:17:39 by toguilmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *ss;
	unsigned char val;
	size_t	i;

	ss = (unsigned char *)s;
	val = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		ss[i] = val;
		i++;
	}
	return ss;
}

// int main(void)
// {
//     char test[10];
// 	ft_memset(test, 'A', 3);
// 	test[9] = '\0';
// 	printf("%s", test);
// 	return 0;
// }
