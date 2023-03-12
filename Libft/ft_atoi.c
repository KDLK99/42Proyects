/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:54:57 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/12 12:18:56 by ivagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int	main()
{
	char num[] = "-2147483649";

	printf("%d\n", ft_atoi(num));
	printf("%d\n", atoi(num));
	return (0);
}*/

#include "libft.h"

int	ft_atoi(char *str)
{
	int	res;
	int	sign;
	int	i;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] != '-' && !(str[i] >= '0' && str[i] <= '9'))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (sign * res);
}
