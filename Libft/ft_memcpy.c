/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 20:30:51 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/16 19:13:00 by ivagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>

void	*ft_memcpy(char *dest, char *src, int n);

int main()
{
	char	s[] = "Hola Mundosdfsdf";
	char	dest1[20];
	char	dest2[20];

	ft_memcpy(dest1, s, 4);
	memcpy(dest2, s, 4);
	printf("%s\n", dest1);
	printf("%s", dest2);
	return (0);
}*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*aux_dest;
	char	*aux_src;

	aux_dest = (char *) dest;
	aux_src = (char *) src;
	i = 0;
	if (dest == NULL && src == NULL)
		return (0);
	while (i < n)
	{
		aux_dest[i] = aux_src[i];
		i++;
	}
	return (dest);
}
