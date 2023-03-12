/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:56:52 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/12 11:56:53 by ivagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

char	*ft_strdup(char *src);

int main()
{
	char str[] = "Hola Mundo";

	printf("%s", ft_strdup(str));
	return (0);
}*/

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		size;

	size = 0;
	while (src[size] != '\0')
	{
		size++;
	}
	size++;
	cpy = (char *) malloc(size * sizeof(char));
	if (cpy == NULL)
		return (0);
	ft_strlcpy(cpy, src, size);
	return (cpy);
}
