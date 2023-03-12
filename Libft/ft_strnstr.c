/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:57:25 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/12 15:30:45 by ivagarci         ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
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
	while (big[i] != '\0' && i < n)
	{
		if (big[i] == *small && ft_strcmp(&big[i], small) == 1)
		{
			return (&big[i]);
		}
		i++;
	}
	return (0);
}
