/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toguilmi <toguilmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:33:56 by toguilmi          #+#    #+#             */
/*   Updated: 2025/10/14 17:37:03 by toguilmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	const unsigned char	*s;
	size_t	i;

	i = 0;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;

	if (d < s)
	{
		while(i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else if (d > s)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	return (dest);
}

int main(void)
{
	char str1[20] = "abcdefghij";
	char str2[20] = "abcdefghij";

	printf("Avant ft_memmove (chevauchement): %s\n", str1);
	ft_memmove(str1 + 2, str1, 5);
	printf("Après ft_memmove (chevauchement):  %s\n", str1);

	printf("\nAvant ft_memmove (sans chevauchement): %s\n", str2);
	ft_memmove(str2, str2 + 2, 5);
	str2[5] = '\0';  // <== Important !
	printf("Après ft_memmove (sans chevauchement):  %s\n", str2);

	return 0;
}
