/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:57:54 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/25 16:29:27 by ivagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len);

int main()
{
	printf("%s", ft_substr(0, 1, 3));
	return (0);
}*/

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*cpy;
	size_t	s_len;
	size_t	cpy_len;

	if (!s)
		return (0);
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
