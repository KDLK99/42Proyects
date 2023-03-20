/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdlk99 <kdlk99@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:55:37 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/19 19:03:21 by kdlk99           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n);

int	main()
{
	printf("%s\n", ft_memchr("bonjour", 's', 7));
	printf("%s", memchr("bonjour", 's', 7));
	return (0);
}*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*aux;

	aux = (char *)s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char) aux[i] == (unsigned char) c)
			return ((void *) &aux[i]);
		i++;
	}
	return (0);
}
