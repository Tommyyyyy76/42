/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toguilmi <toguilmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:54:01 by toguilmi          #+#    #+#             */
/*   Updated: 2025/10/14 15:22:33 by toguilmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *str, int a)
{
	char	b;
	int		i;

	b = (char)a;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == b)
			return ((char *)(str + i));
		i++;
	}
	if (b == '\0')
	{
		return ((char *)(str + i));
	}
	return (NULL);
}

// int	main()
// {
// 	printf("%s\n", ft_strchr("ahf", 'z'));
// 	printf("%s", strchr("ahf", 'z'));
// 	return 0;
// }
