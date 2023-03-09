/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdlk99 <kdlk99@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:52:05 by kdlk99            #+#    #+#             */
/*   Updated: 2023/03/09 18:13:00 by kdlk99           ###   ########.fr       */
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

char	*ft_strrchr(char *s, int c)
{
	int		i;
	char	*last;

	last = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			last = &s[i];
		i++;
	}
	return (last);
}
