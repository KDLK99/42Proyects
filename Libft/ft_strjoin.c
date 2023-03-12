/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:56:58 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/12 15:32:02 by ivagarci         ###   ########.fr       */
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

	if (ft_strlen(s1) == 0 || ft_strlen(s2) == 0)
		return (0);
	aux = malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char));
	if (aux == NULL)
		return (0);
	ft_strlcpy(aux, s1, ft_strlen(s1));
	ft_strlcpy(&aux[ft_strlen(s1)], s2, ft_strlen(s2));
	return (aux);
}
