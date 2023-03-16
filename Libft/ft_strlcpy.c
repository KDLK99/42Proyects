/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:57:11 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/16 16:36:48 by ivagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dest, char const *src, const size_t n);

int main()
{
	char dest1[42];
	char dest2[42];
	char src[] = "lorem ipsum";

	ft_strlcpy(dest1, src, 3);
	strlcpy(dest2, src, 3);
	printf("%s\n", dest1);
	printf("%s\n", dest2);
	return (0);
}*/

#include "libft.h"

size_t	ft_strlcpy(char *dest, char const *src, const size_t n)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	i = 0;
	if (n == 0)
		return (len);
	while ((i < len) && i < (n - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
