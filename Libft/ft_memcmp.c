/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:56:09 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/12 16:34:44 by ivagarci         ###   ########.fr       */
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

int	memcmp(const void *s1, const void *s2, size_t n)
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
