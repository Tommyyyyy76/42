/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toguilmi <toguilmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:10:38 by toguilmi          #+#    #+#             */
/*   Updated: 2025/10/15 17:00:32 by toguilmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *a)
{
	int	i;

	i = 0;
	while (a[i])
	{
		i++;
	}
	return (i);
}
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;
	size_t	j;

	j = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = 0;
	if (len_dst >= size)
	{
		return (len_src + size);
	}
	while (src[i] && (len_dst + i) < size - 1)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}

// int	main()
// {
// 	char	dest[12] = "bonjour";
// 	const char	*src = " tous le monde";
// 	size_t len = sizeof(dest);
// 	size_t result = ft_strlcat(dest, src, len);
// 	printf("%s\n", dest);
// 	printf("%zu", result);
// 	return 0;
// }
