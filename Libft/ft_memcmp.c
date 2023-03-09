/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdlk99 <kdlk99@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:51:33 by kdlk99            #+#    #+#             */
/*   Updated: 2023/03/09 18:12:37 by kdlk99           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>

int	ft_memcmp(char *s1, char *s2, int n);

int	main()
{
	char	s1[] = "Hola Mndo";
	char	s2[] = "Hola Mundo";

	printf("%d\n", ft_memcmp(s1, s2, 3));
	printf("%d", memcmp(s1, s2, 3));
	return (0);
}*/

int	ft_memcmp(char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
