/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:57:25 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/25 16:23:47 by ivagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *big, const char *small, size_t n);
int	ft_strcmp2(const char *s1, const char *s2);

int	main()
{
	char big[] = "";
	char small[] = "ab";

	printf("%p\n", ft_strnstr(big, small, -1));
	return (0);
}*/

#include "libft.h"

int	ft_strcmp2(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strnstr(const char *big, const char *small, size_t n)
{
	size_t	i;

	i = 0;
	if (!big && n == 0)
		return (0);
	if (*small == '\0' || small == NULL)
		return ((char *) big);
	while (big[i] != '\0' && i < n)
	{
		if (ft_strcmp2 (&big[i], small) && (i + (int) ft_strlen(small) <= n))
		{
			return ((char *) &big[i]);
		}
		i++;
	}
	return (0);
}
