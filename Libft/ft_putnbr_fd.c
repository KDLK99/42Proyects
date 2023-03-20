/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdlk99 <kdlk99@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:59:45 by kdlk99            #+#    #+#             */
/*   Updated: 2023/03/20 20:15:44 by kdlk99           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <fcntl.h>

void	ft_putnbr_fd(int n, int fd);

int	main()
{
	int	file;

	file = open("hola.txt", O_WRONLY);
	if (file == -1)
	{
		write(1, "Error", 5);
		return (0);
	}
	ft_putnbr_fd(-2147483648, file);
	return (0);
}*/

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
	}
	else
	{	
		if (n < 0)
		{
			write(fd, "-", 1);
			n *= -1;
		}
		if (n >= 10)
		{
			ft_putnbr_fd(n / 10, fd);
			n = n % 10;
		}
		c = n + '0';
		write(fd, &c, 1);
	}
}
