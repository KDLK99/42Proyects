/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdlk99 <kdlk99@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:56:14 by kdlk99            #+#    #+#             */
/*   Updated: 2023/03/10 18:21:41 by kdlk99           ###   ########.fr       */
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
	int		size;

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
