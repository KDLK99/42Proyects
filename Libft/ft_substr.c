/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdlk99 <kdlk99@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:57:54 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/19 19:44:47 by kdlk99           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len);

int main()
{
	printf("%s", ft_substr("hola", 4294967295, 0));	
	return (0);
}*/

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*cpy;
	size_t	s_len;
	size_t	cpy_len;

	s_len = ft_strlen(s);
	while (s[0] == '\0')
		return (ft_strdup(""));
	if (start >= s_len)
		return (ft_strdup(""));
	else
		cpy_len = s_len - start;
	if (cpy_len > len)
		cpy_len = len;
	cpy = malloc((cpy_len + 1) * sizeof(char));
	if (cpy != NULL)
		ft_strlcpy(cpy, &s[start], cpy_len + 1);
	return (cpy);
}
