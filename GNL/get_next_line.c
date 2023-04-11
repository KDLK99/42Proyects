/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 11:39:33 by kdlk99            #+#    #+#             */
/*   Updated: 2023/04/11 20:20:23 by ivagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

char	*get_next_line(int fd);

int	main(void)
{
	int	file = open("test.txt", O_RDONLY);
	char *str;
	int	res;

	str = get_next_line (file);
	printf("%s", str);
	scanf("%d", &res);
	while (res == 1 && str != NULL)
	{
		str = get_next_line (file);
		printf("%s", str);
		scanf("%d", &res);
	}
	close(file);
}

#include <stdlib.h>
#include <unistd.h>

char	*get_next_line(int fd)
{
	char	*c;
	char	aux;
	int		i;
	int		file;

	if (fd < 0)
		return (NULL);
	file = read(fd, &aux, 1);
	c = malloc(file * sizeof(char));
	i = 0;
	c[i] = aux;
	while (c[i] != '\n' && file)
	{
		i++;
		file = read(fd, &c[i], 1);		
	}
	if (file == 0)
		return (NULL);
	return (c);
}
