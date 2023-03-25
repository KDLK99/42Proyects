/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 12:19:17 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/25 16:32:05 by ivagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include "libft.h"

char	**ft_split(char const *s, char c);
size_t	ft_words(char const *s, char c);
int	ft_letters(char const *s, int c);

int	main()
{
	char	str[] = "  Ho la      Mundo afsd    ";
	char	**m;

	m = ft_split(str, ' ');
	for(int i = 0; i < 5; i++)
	{
		printf("%s ", m[i]);
	}
	return (0);
}*/

#include <stdlib.h>
#include "libft.h"

size_t	ft_words(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (words);
}

int	ft_letters(char const *s, int c)
{
	size_t	len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**m;
	size_t	j;
	size_t	len;

	if (!s)
		return (0);
	j = 0;
	m = malloc((ft_words(s, c) + 1) * sizeof(char *));
	if (m == 0)
		return (0);
	while (*s != '\0')
	{
		if (*s != c)
		{
			len = ft_letters(s, c);
			s = s + len;
			m[j++] = ft_substr(s - len, 0, len);
		}
		else
			s++;
	}
	m[j] = 0;
	return (m);
}
