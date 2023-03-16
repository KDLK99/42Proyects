/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 20:24:39 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/16 19:04:48 by ivagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n);

int main()
{
	char	s1[] = "Hola Mundosdfsdf";
	char	s2[] = "Hola Mundosdfsdf";

	ft_bzero(s1, 4);
	bzero(s2, 4);
	printf("%s\n", &s1[3]);
	printf("%s", &s2[3]);
	return (0);
}*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*aux;

	aux = (char *)s;
	i = 0;
	while (i < n)
	{
		aux[i] = '\0';
		i++;
	}
}
