/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 12:40:14 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/12 14:10:02 by ivagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_itoa(int n);

int	main()
{
	printf("%s", ft_itoa(-214));
	return (0);
}

#include "libft.h"
#include <stdlib.h>

char	*ft_int_min(void)
{
	char	*str;

	str = malloc(12 * sizeof(char));
	ft_strlcpy(str, "-2147483648", 12);
	return (str);
}

int	ft_numcifras(int n)
{
	int	cont;

	cont = 0;
	if (n < 0)
	{
		n = n * -1;
		cont++;
	}
	while (n > 0)
	{
		n = n / 10;
		cont++;
	}
	return (cont);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*str;
	int		i;

	if (n == -2147483648)
	{
		str = ft_int_min();
		return (str);
	}
	size = ft_numcifras(n);
	str = malloc((size + 1) * sizeof(char));
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	if (str == 0)
		return (0);
	i = size - 1;
	while (n >= 0)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	str[size] = '\0';
	return (str);
}
