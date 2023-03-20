/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdlk99 <kdlk99@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:51:46 by kdlk99            #+#    #+#             */
/*   Updated: 2023/03/20 19:57:03 by kdlk99           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <fcntl.h>

void	ft_putendl_fd(char *s, int fd);

int	main()
{
	int	file;

	file = open("hola.txt", O_WRONLY);
	if (file == -1)
	{
		write(1, "Error", 5);
		return (0);
	}
	ft_putendl_fd("Hola Mundo", file);
	return (0);
}*/

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	if (s && fd)
		write(fd, "\n", 1);
}
