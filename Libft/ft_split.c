/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdlk99 <kdlk99@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 18:41:25 by kdlk99            #+#    #+#             */
/*   Updated: 2023/03/11 16:48:08 by kdlk99           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	**ft_split(char const *s, char c);
size_t	ft_words(char const *s, char c);


int	main()
{
	char	str[] = "Hola  Mundo afsd ";
	char	m[][] = ft_split(str, ' ');
	
	for(int i = 0; i < 7; i++)
	{
		printf("%s", m[i]);
	}
	return (0);
}

#include <stdlib.h>

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

char	**ft_split(char const *s, char c)
{
	char	**m;
	size_t	i;
	size_t	len;
	size_t	j;
	
	len = 0;
	i = 0;
	j = 0;
	m = malloc((ft_words(s, c) + 1) * sizeof(char *));
	if (m == 0)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
			{
				i++;
				len++;
			}
			m[j++] = ft_substr(s[i - len], 0, len);
		}
		else
			i++;
	}
}
