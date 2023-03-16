/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:57:04 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/16 17:03:01 by ivagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t n);

int main()
{
	char dest1[42] = "a";
	char dest2[42] = "a";
	char src[] = "lorem";

	ft_strlcat(dest1, src, 15);
	strlcat(dest2, src, 15);
	printf("%s\n", dest1);
	printf("%s\n", dest2);
	return (0);
}*/

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0' && i < n)
		i++;
	if (n == 0)
		return (ft_strlen(src));
	if (i >= n)
		return (i + ft_strlen(src));
	while (src[j] != '\0' && (i + j) < (n - 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + ft_strlen(src));
}
