/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 20:24:39 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/12 16:33:04 by ivagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>

void	ft_bzero(char *s, int n);

int main()
{
	char	s1[] = "Hola Mundosdfsdf";
	char	s2[] = "Hola Mundosdfsdf";

	ft_bzero(s1, 4);
	bzero(s2, 4);
	printf("%s\n", &s1[3]);
	printf("%s", &s2[3]);
	return (0);
}*/

void	ft_bzero(void *s, size_t n)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && i < n)
	{
		s[i] = 0;
		i++;
	}
}
