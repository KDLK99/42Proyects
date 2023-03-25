/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivagarci <ivagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 21:14:12 by kdlk99            #+#    #+#             */
/*   Updated: 2023/03/25 16:32:39 by ivagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <unistd.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	suma(unsigned int i, char c);

char    mapi(unsigned int i, char c)
{
        static int indexArray[11] = {0};

        if (i > 10 || indexArray[i] == 1)
                write(1, "wrong index\n", 12);
        else
                indexArray[i] = 1;
        if (c >= 'a' && c <= 'z')
                return (c - 32);
        else if (c >= 'A' && c <= 'Z')
                return (c + 32);
        else
                return (c);
}

int	main()
{
	printf("%s", ft_strmapi("Hola", &mapi));
	return (0);
}*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*aux;

	if (!s || !f)
		return (0);
	i = 0;
	if (s[i] == '\0')
		return (ft_strdup(""));
	if (!(*f))
		return (ft_strdup(s));
			aux = ft_strdup(s);
	if (aux == NULL)
		return (ft_strdup(""));
	while (aux[i] != '\0')
	{
		aux[i] = (*f)(i, s[i]);
		i++;
	}
	return (aux);
}
