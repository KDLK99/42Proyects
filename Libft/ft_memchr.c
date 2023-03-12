/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:55:37 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/12 11:55:49 by ivagarci         ###   ########.fr       */
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
	return (0);
}
