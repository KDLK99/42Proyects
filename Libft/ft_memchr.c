/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdlk99 <kdlk99@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:51:31 by kdlk99            #+#    #+#             */
/*   Updated: 2023/03/09 18:12:27 by kdlk99           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>

char	*ft_memchr(char *s, int c, int n);

int	main()
{
	char s[] = "Hla Mundo";

	printf("%d\n", ft_memchr(s, 's', 442));
	printf("%d", memchr(s, 's', 442));
	return (0);
}*/

char	*ft_memchr(char *s, int c, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
