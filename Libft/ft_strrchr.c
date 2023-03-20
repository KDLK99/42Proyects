/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdlk99 <kdlk99@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:57:32 by ivagarci          #+#    #+#             */
/*   Updated: 2023/03/19 18:53:08 by kdlk99           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>

char	*ft_strrchr(char *s, int c);

int	main()
{
	char s[] = "Hola Mundosdofs";

	printf("%d\n", ft_strrchr(s,'w'));
	printf("%d", strrchr(s, 'w'));
	return (0);
}*/

char	*ft_strrchr(char const *s, int c)
{
	int		i;
	char	*last;

	last = 0;
	i = 0;
	c = c % 256;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			last = (char *) &s[i];
		i++;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	return (last);
}
