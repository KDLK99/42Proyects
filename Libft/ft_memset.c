/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 19:54:02 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/12 16:35:55 by ivagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>

void	ft_memset(char *s, int c, int n);

int main()
{
	char	s1[] = "Hola Mundosdfsdf";
	char	s2[] = "Hola Mundosdfsdf";

	ft_memset(s1, 82, 7);
	memset(s2, 82, 7);
	printf("%s\n", s1);
	printf("%s", s2);
	return (0);
}*/

void	ft_memset(void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && i < n)
	{
		s[i] = c;
		i++;
	}
}
