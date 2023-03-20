/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdlk99 <kdlk99@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:23:42 by kdlk99            #+#    #+#             */
/*   Updated: 2023/03/20 20:37:45 by kdlk99           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd);

int	main()
{
	int	file;

	file = open("hola.txt", O_WRONLY);
	if (file == -1)
	{
		write(1, "Error", 5);
		return (0);
	}
	ft_putchar_fd(0, file);
	return (0);
}*/

#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	if (fd)
		write(fd, &c, 1);
}
