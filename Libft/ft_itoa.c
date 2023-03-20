/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdlk99 <kdlk99@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 12:40:14 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/19 20:48:30 by kdlk99           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

char	*ft_itoa(int n);

int	main()
{
	printf("%s", ft_itoa(0));
	return (0);
}*/

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
	else if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		cont++;
	}
	return (cont);
}

char	*ft_write_number(char *str, int i, int n)
{
	if (n == 0)
		str[i] = '0';
	while (n > 0)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (str);
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
	if (str == 0)
		return (0);
	i = size - 1;
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	ft_write_number(str, i, n);
	str[size] = '\0';
	return (str);
}
