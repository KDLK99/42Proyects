/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:57:54 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/12 15:29:22 by ivagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len);

int main()
{
	char	str[] = "Hola Mundo";

	printf("%s", ft_substr(str, 20, 20));
	return (0);
}*/

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*cpy;
	size_t	size;

	size = 0;
	while (s[size] != '\0')
		size++;
	size++;
	if (size < start)
		return (0);
	cpy = malloc(len * sizeof(char));
	if (cpy == NULL)
		return (0);
	ft_strlcpy(cpy, &s[start], len);
	return (cpy);
}
