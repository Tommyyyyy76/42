/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toguilmi <toguilmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:51:29 by toguilmi          #+#    #+#             */
/*   Updated: 2025/10/17 12:01:08 by toguilmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while(s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

// int	main()
// {
// 	int fd = open("monfichier.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	ft_putstr_fd("victor le controleur", fd);
// }
