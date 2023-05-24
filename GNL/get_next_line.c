/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 11:39:33 by kdlk99            #+#    #+#             */
/*   Updated: 2023/05/24 19:44:58 by ivagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

char	*get_next_line(int fd);

int	main(void)
{
	int	file = open("test.txt", O_RDONLY);
	char *str = get_next_line (file);

	printf("%s", str);
	while (str != NULL)
	{
		str = get_next_line (file);
		printf("%s", str);
	}
	close(file);
}

#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*c;
	char	*contiene;
	int		i;
	int		file;

	if (fd < 0)
		return (NULL);
	file = 1;
	c = malloc((BUFFER_SIZE + 1) * sizeof(char));
	i = 0;
	contiene = NULL;
	while (!contiene && file > 0)
	{
		i = i + BUFFER_SIZE;
		file = read(fd, &c[i], BUFFER_SIZE);
		contiene = ft_contiene_salto(&c[i]);
	}
	
	if (file == 0)
		return (NULL);
	return (c);
}
