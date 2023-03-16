/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:55:37 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/15 17:15:33 by ivagarci         ###   ########.fr       */
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
		if (aux[i] == c)
			return ((void *) &aux[i]);
		i++;
	}
	return (0);
}
