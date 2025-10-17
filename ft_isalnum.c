/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toguilmi <toguilmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:18:17 by toguilmi          #+#    #+#             */
/*   Updated: 2025/10/13 14:24:40 by toguilmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(char str)
{
	if ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z'))
		return (1);
	else if (str >= '0' && str <= '9')
		return (1);
	else
		return (0);
}

// int	main()
// {
// 	printf("%d", ft_isalnum('>'));
// 	return 0;
// }