/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toguilmi <toguilmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:54:24 by toguilmi          #+#    #+#             */
/*   Updated: 2025/10/13 13:59:38 by toguilmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int nb)
{
	if (nb >= '0' && nb <= '9')
		return (2048);
	else
		return (0);
}

// int main()
// {
//     printf("%d", ft_isdigit('4'));
//     return 0;
// }