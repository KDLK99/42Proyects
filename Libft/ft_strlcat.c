/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:57:04 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/12 17:49:46 by ivagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>

void ft_strlcat(char *dest, char *src, int n);

int main()
{
	char dest1[42];
	char dest2[42];
	char src[] = "";

	ft_memmove(dest1, src, 0);
	memmove(dest2, src, 0);
	printf("%s\n", dest1);
	printf("%s\n", dest2);
	return (0);
}*/

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	return (i + j);
}
