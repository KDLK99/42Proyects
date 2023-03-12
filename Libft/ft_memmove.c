/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:56:20 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/12 17:49:21 by ivagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>

void *ft_memmove(char *dest, char *src, int n);

int main()
{
	char	dest1[42];
	char	dest2[42];
	const char	src[] = "lorem ipsum dolor sit amet";

	ft_memmove(dest1, src, 8);
	memmove(dest2, src, 8);
	printf("%s\n", dest1);
	printf("%s\n", dest2);
	return (0);
}*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, int n)
{
	void	*aux;
	int	i;

	i = 0;
	aux = dest;
	if (src < dest)
	{
		while (n > 0)
		{
			(char *)dest[n] = (char *)src[n];
			n--;
		}
	}
	else
	{
		while (n > 0)
		{
			(char *)dest[i] = (char *)src[i];
			i++;
			n--;
		}
	}
	return (dest);
}
