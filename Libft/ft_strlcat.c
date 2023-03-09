/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdlk99 <kdlk99@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:51:52 by kdlk99            #+#    #+#             */
/*   Updated: 2023/03/09 18:12:46 by kdlk99           ###   ########.fr       */
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

int	ft_strlcat(char *dest, char *src, int n)
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
