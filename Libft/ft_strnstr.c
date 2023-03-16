/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:57:25 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/16 19:32:33 by ivagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>

char	*ft_strnstr(char *big, char *small, int n);
int	ft_strcmp(char *s1, char *s2);

int	main()
{
	char big[] = "Hla Mundo adios";
	char small[] = "Mu";

	printf("%d\n", ft_strnstr(big, small, 42));
	printf("%d", strstr(big, small));
	return (0);
}*/

#include "libft.h"

int	ft_strcmp2(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strnstr(char *big, char *small, int n)
{
	int	i;

	i = 0;
	if (big == small)
		return (big);
	if (*small == '\0')
		return (big);
	while (big[i] != '\0' && i < n)
	{
		if (big[i] == *small && ft_strcmp2(&big[i], small) == 1
			&& (i + (int) ft_strlen(small) < n))
		{
			return (&big[i]);
		}
		i++;
	}
	return (0);
}
