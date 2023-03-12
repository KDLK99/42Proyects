/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 20:30:51 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/12 16:35:28 by ivagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>

void	ft_memcpy(char *dest, char *src, int n);

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

void	ft_memcpy(void *dest, void *src, size_t n)
{
	int	i;

	i = 0;
	while (dest[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
}
