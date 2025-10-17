/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toguilmi <toguilmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:58:30 by toguilmi          #+#    #+#             */
/*   Updated: 2025/10/15 12:31:03 by toguilmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *str, int a)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (str[i] == a)
			return ((char *)(str + i));
		i--;
	}
	return (NULL);
}

int	main()
{
	printf("%s", ft_strrchr("deo mots", 'o'));
	return 0;
}
