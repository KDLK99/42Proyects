/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:57:49 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/25 16:31:32 by ivagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>

char *ft_strtrim(char const *s1, char const *set);
int	ft_ischar(char c, char const *set);

int main()
{
	char	str[] = "Hola Mundo";
	char	set[] = "Hdol a";

	printf("%s", ft_strtrim(str, set));
	return (0);
}*/

#include "libft.h"
#include <stdlib.h>

int	ft_ischar(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != 0)
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	in;
	size_t	end;

	if (!s1 || !set)
		return (0);
	if (s1[0] == 0 && set[0] == 0)
		return (ft_strdup(""));
	in = 0;
	end = ft_strlen(s1);
	while (s1[in] != 0 && ft_ischar(s1[in], set))
	{
		in++;
	}
	while (end > in && ft_ischar(s1[end - 1], set))
	{
		end--;
	}
	return (ft_substr(&s1[in], 0, end - in));
}
