/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:56:58 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/25 16:30:25 by ivagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>


char	*ft_strjoin(char const *s1, char const *s2);

int main()
{
	char	s1[] = "Hola";
	char	s2[] = "Mundo";

	printf("%s", ft_strjoin(s1, s2));
	return (0);
}*/

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*aux;
	size_t	s1_size;
	size_t	s2_size;

	if (!s1 || !s2)
		return (0);
	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	if (s1_size == 0 && s2_size == 0)
		return (ft_strdup(""));
	aux = malloc((s1_size + s2_size + 1) * sizeof(char));
	if (aux == NULL)
		return (0);
	ft_strlcpy(aux, s1, s1_size + 1);
	ft_strlcpy(&aux[s1_size], s2, s2_size + 1);
	return (aux);
}
