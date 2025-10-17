/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toguilmi <toguilmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:56:58 by toguilmi          #+#    #+#             */
/*   Updated: 2025/10/17 15:44:06 by toguilmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	len;

	len = ft_strlen(s);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
	{
		return (NULL);
	}
	ft_strcpy(dest, s);
	return (dest);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	lenght;
	size_t	i;
	char	*a;

	i = 0;
	if (!s)
		return (NULL);
	lenght = ft_strlen(s);
	if (start >= lenght)
		return (ft_strdup(""));
	if (start + len > lenght)
	{
		len = lenght - start;
	}
	a = malloc(sizeof(char) * (len + 1));
	if (!a)
		return (NULL);
	while (i < len)
	{
		a[i] = s[start];
		i++;
		start++;
	}
	a[i] = '\0';
	return ((char *)(a));
}

// int	main()
// {
// 	char	*dest;
// 	dest = ft_substr(NULL, 3, 5);
// 	printf("%s", dest);
// 	free(dest);
// 	return 0;
// }
