/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdlk99 <kdlk99@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:37:44 by kdlk99            #+#    #+#             */
/*   Updated: 2023/03/20 19:44:14 by kdlk99           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <fcntl.h>

void	ft_putstr_fd(char *s, int fd);

int	main()
{
	int	file;

	file = open("hola.txt", O_WRONLY);
	if (file == -1)
	{
		write(1, "Error", 5);
		return (0);
	}
	ft_putstr_fd("Hola Mundo", file);
	return (0);
}*/

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (s && fd)
	{
		while (*s != '\0')
		{
			write(fd, s, 1);
			s++;
		}
	}
}
