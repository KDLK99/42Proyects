/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:56:37 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/16 21:16:56 by ivagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>

char	*ft_strchr(char const *s, int c);

int	main()
{
	char s[] = "teste";

	printf("%p\n", ft_strchr(s, 1024));
	printf("%p", strchr(s, 1024));
	return (0);
}*/

char	*ft_strchr(char const *s, int c)
{
	int	i;

	i = 0;
	c = c % 256;
	while ((char) s[i] != '\0')
	{
		if ((char) s[i] == c)
			return ((char *) &s[i]);
		i++;
	}
	if ((char) s[i] == c)
		return ((char *)&s[i]);
	return (0);
}
