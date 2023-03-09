/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdlk99 <kdlk99@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:51:47 by kdlk99            #+#    #+#             */
/*   Updated: 2023/03/09 18:12:40 by kdlk99           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>

void *ft_memmove(char *dest, char *src, int n);

int main()
{
	char dest1[42];
	char dest2[42];
	char src[] = "Hola";

	ft_memmove(dest1, src, 2);
	memmove(dest2, src, 2);
	printf("%s\n", dest1);
	printf("%s\n", dest2);
	return (0);
}*/

void	*ft_memmove(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
