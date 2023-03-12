/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 19:44:43 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/12 15:28:05 by ivagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>

unsigned long	ft_strlen(char *s);

int main()
{
	char	s[] = "   Hola Mundosdfsdf    ";

	printf("%lu", ft_strlen(s));
	printf("%lu", strlen(s));
	return (0);
}*/

unsigned long	ft_strlen(char const *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
